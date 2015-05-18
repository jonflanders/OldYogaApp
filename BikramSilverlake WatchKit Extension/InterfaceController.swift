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

	@IBOutlet weak var scheduleTable: WKInterfaceTable!
	@IBOutlet weak var titleLabel: WKInterfaceLabel!
    override func awakeWithContext(context: AnyObject?) {
        super.awakeWithContext(context)
        
        // Configure interface objects here.
		let sc = ScheduleController()
			sc.getSchedule { (schedule, error) -> Void in
			if let realSchedule = schedule{
				dispatch_async(dispatch_get_main_queue(), { [unowned self]() -> Void in
					self.schedule = realSchedule
					var day = self.daysInOrder![0]
					if let idx = realSchedule.scheduleThisWeek.indexForKey(day){
						let (k,v) = realSchedule.scheduleThisWeek[idx]
						//self.titleLabel .setText(k)
						var items = v
						self.scheduleTable.setNumberOfRows(items.count, withRowType: rowType)
						for i in 0..<items.count
						{
							if let  rc =  self.scheduleTable.rowControllerAtIndex(i) as? ScheduleRowController{
								var si = items[i]
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
	
	var token: dispatch_once_t = 0
	var dateFormatter:NSDateFormatter?
	
	var daysInOrder:[String]?
	var schedule:Schedule?{
		didSet{
			dispatch_once(&token, { [unowned self]() -> Void in
				let ds = NSDateFormatter()
				ds.dateFormat = "EEE MMM d yyyy"
				self.dateFormatter = ds
				//Sun May 10 2015
				})
			
			if let realSchedule  = self.schedule{
				var days = realSchedule.scheduleThisWeek.keys.array
				days.sort{ [unowned self] in
					var d1 = self.dateFormatter?.dateFromString($0)
					var d2 = self.dateFormatter?.dateFromString($1)
					return d1!.compare(d2!) == NSComparisonResult.OrderedAscending
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
