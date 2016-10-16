//
//  InterfaceController.swift
//  BikramSilverlake WatchKit Extension
//
//  Created by Jon Flanders on 5/17/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import WatchKit
import Foundation

private let rowType = "ScheduleRowController"
class InterfaceController: WKInterfaceController {

	private lazy var __once: () = { [unowned self]() -> Void in
				let ds = DateFormatter()
				ds.dateFormat = "EEE MMM d yyyy"
				self.dateFormatter = ds
				//Sun May 10 2015
				}()

	@IBOutlet weak var scheduleTable: WKInterfaceTable!
	@IBOutlet weak var titleLabel: WKInterfaceLabel!
    override func awake(withContext context: Any?) {
        super.awake(withContext: context)
        
        // Configure interface objects here.
		let sc = ScheduleController()
			sc.getSchedule { (schedule, error) -> Void in
			if let realSchedule = schedule{
				DispatchQueue.main.async(execute: { [unowned self]() -> Void in
					self.schedule = realSchedule
					let day = self.daysInOrder![0]
					if let idx = realSchedule.scheduleThisWeek.index(forKey: day){
						let (k,v) = realSchedule.scheduleThisWeek[idx]
						//self.titleLabel .setText(k)
						var items = v
						self.scheduleTable.setNumberOfRows(items.count, withRowType: rowType)
						for i in 0..<items.count
						{
							if let  rc =  self.scheduleTable.rowController(at: i) as? ScheduleRowController{
								let si = items[i]
								rc.scheduleTime = si.scheduleFullTime
							}
							
							
						}
//							self.dataSource.currentDay  = (k,v)
//							self.dataSource.delegate = self
//							self.navigationItem.title = self.dataSource.currentDay!.0
						
					}
				})
				
			}
		}
    }
	
	var token: Int = 0
	var dateFormatter:DateFormatter?
	
	var daysInOrder:[String]?
	var schedule:Schedule?{
		didSet{
			_ = self.__once
			
			if let realSchedule  = self.schedule{
				var days = Array(realSchedule.scheduleThisWeek.keys)
				days.sort{ [unowned self] in
					let d1 = self.dateFormatter?.date(from: $0)
					let d2 = self.dateFormatter?.date(from: $1)
					return d1!.compare(d2!) == ComparisonResult.orderedAscending
				}
				self.daysInOrder = days
			}
		}
	}
    override func willActivate() {
        // This method is called when watch view controller is about to be visible to user
        super.willActivate()
    }

    override func didDeactivate() {
        // This method is called when watch view controller is no longer visible
        super.didDeactivate()
    }

}
