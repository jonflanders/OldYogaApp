//
//  ScheduleViewController.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import UIKit
private let nextDaySegueID = "showNextDaySegue"
private let showInstructorSegue = "showInstructorSegue"
private var currentDayIndex = 0
class ScheduleViewController: UIViewController,UITableViewDelegate,ScheduleTableViewDataSourceDelegate {

	func scheduleTableViewDataSourceAddToSchedule(item: ScheduleItem) {
		
	}
	func scheduleTableViewDataSourceReserverClass(item: ScheduleItem) {
		
	}
	func scheduleTableViewDataSourceShowClassType(view: UIView, rect: CGRect, type: ScheduleItemType) {
		
	}
	private var teacherParams:(UIView,CGRect,String)?
	func scheduleTableViewDataSourceShowTeacher(view: UIView, rect: CGRect, instructor: String) {
		self.teacherParams = (view,rect,instructor)
		self.performSegueWithIdentifier(showInstructorSegue, sender: nil )
	}
	override func prepareForSegue(segue: UIStoryboardSegue, sender: AnyObject?) {
		switch(segue.identifier!)
		{
		case nextDaySegueID:
			if let  vc = segue.destinationViewController as? ScheduleViewController{
				vc.schedule = self.schedule
				vc.dataSource.currentDay = self.nextDay()
			
			}
		case showInstructorSegue:
			
				if let vc = segue.destinationViewController as? TeacherViewController{
					if let (v,r,i) = self.teacherParams{
						vc.instructor = self.schedule?.instructorFromID(i)
						if let pop = vc.popoverPresentationController{
							pop.sourceRect = r
							pop.sourceView = v
						}
					}
					
				}
			
		default:
			break;
		}
		if segue.identifier==nextDaySegueID {
			
		}
		if segue.identifier == showInstructorSegue{
			
		}
		
	}
	override func shouldPerformSegueWithIdentifier(identifier: String?, sender: AnyObject?) -> Bool {
		var ret = true
		
		if(identifier == nextDaySegueID){
			ret = self.hasNextDay()
		}
		return ret
	}
	func hasNextDay()->Bool{
		var tempIdx = currentDayIndex + 1
		if let days = self.daysInOrder {
			if tempIdx < days.count{
				var day = days[tempIdx]
				return self.getItemsForDay(day) != nil
			}
		}
		return false
	}
	private func getItemsForDay(day:String)->[ScheduleItem]?{
		if let s = self.schedule{
			var tempIdx = currentDayIndex + 1
			if let days = self.daysInOrder {
				if tempIdx < days.count {
					var day = days[tempIdx]
					let items = s.scheduleThisWeek[day]
					if let realItems = items {
						
						return realItems
					}
				}
			}
		}
		return nil
	}
	
	func nextDay()->(String,[ScheduleItem])?{
		
		if let s = self.schedule{
			var tempIdx = currentDayIndex + 1
			if let days = self.daysInOrder {
				if tempIdx < days.count {
					var day = days[tempIdx]
					if let items = self.getItemsForDay(day){
					
						currentDayIndex++
						return (day,items)
					}
				}
			}
		}
		return nil
	}
	
	
	
	func tableView(tableView: UITableView, viewForHeaderInSection section: Int) -> UIView? {
		var nib = UINib(nibName: "ScheduleTableHeaderView", bundle: nil)
		var view = nib.instantiateWithOwner(nil, options: nil).first as! UIView
		return view
	}
	
	var isDayOne = true
	@IBOutlet weak var nextButton: UIBarButtonItem!
	@IBOutlet var dataSource:ScheduleTableViewDataSource!
	@IBOutlet var tableView:UITableView!
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
	
	var token: dispatch_once_t = 0
	var dateFormatter:NSDateFormatter?
	
	override func viewDidLoad() {
        super.viewDidLoad()
		        // Do any additional setup after loading the view.
		if(self.schedule == nil){
			let sc = ScheduleController()
			sc.getSchedule { (schedule, error) -> Void in
				if let realSchedule = schedule{
					dispatch_async(dispatch_get_main_queue(), { () -> Void in
						self.schedule = realSchedule
						var day = self.daysInOrder![0]
						if let idx = realSchedule.scheduleThisWeek.indexForKey(day){
							let (k,v) = realSchedule.scheduleThisWeek[idx]
							self.dataSource.currentDay  = (k,v)
							self.dataSource.delegate = self
							self.navigationItem.title = self.dataSource.currentDay!.0
							
						}
					})
					
				}
			}
		}else
		{
			self.dataSource.reloadData()
			self.dataSource.delegate = self
			self.navigationItem.title = self.dataSource.currentDay!.0
			if !self.hasNextDay() {
				self.navigationItem.rightBarButtonItem = nil
			}
		}
		
		
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

}
