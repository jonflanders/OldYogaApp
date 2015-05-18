//
//  ScheduleViewController.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import UIKit
import EventKit
private let nextDaySegueID = "showNextDaySegue"
private let showInstructorSegue = "showInstructorSegue"
private let showClassTypeSegue = "showClassTypeSegue"

private var currentDayIndex = 0
class ScheduleViewController: UIViewController,UITableViewDelegate,ScheduleTableViewDataSourceDelegate ,UIPopoverPresentationControllerDelegate,MBOLoginComplete{
	@IBOutlet weak var messageView: UIView!
	@IBOutlet weak var messageLabel: UILabel!
	@IBOutlet weak var messageViewConstraint: NSLayoutConstraint!
		{
		didSet{
			self.messageViewConstraintConstant = self.messageViewConstraint.constant
			
		}
	}
	var messageViewConstraintConstant:CGFloat!
	@IBAction func closeMessage(s:AnyObject?){
		self.messageViewConstraint.constant = self.messageViewConstraintConstant
		UIView.animateWithDuration(0.5, animations: {[unowned self] () -> Void in
			self.view.layoutIfNeeded()
		})
	}
	func showMessage(msg:String){
		self.messageLabel.text = msg;
		self.messageViewConstraint.constant = 0
		UIView.animateWithDuration(1, animations: { () -> Void in
			self.view.layoutIfNeeded()
		}) { (complete) -> Void in
			dispatch_after(3, dispatch_get_main_queue()) {[unowned self] () -> Void in
							self.closeMessage(nil)
			}
		}

	}
	private var eventStore:EKEventStore = EKEventStore()
	func scheduleTableViewDataSourceAddToSchedule(item: ScheduleItem) {
		self.eventStore.requestAccessToEntityType(EKEntityTypeEvent, completion: {[unowned self] (allowed, error) -> Void in
			if allowed {
				self.currentItem = item
				var event = EKEvent(eventStore: self.eventStore)
				event.title = "Bikram"
				event.location = "Bikram Yoga Silverlake"
				event.startDate = item.scheduleLocalStartTime
				event.endDate = item.scheduleLocalEndTime
				var cal = self.eventStore.defaultCalendarForNewEvents
				event.calendar = cal
				self.eventStore .saveEvent(event, span: EKSpanThisEvent, error: nil)
				self.showMessage("Class added to your calendar")

			}else
			{
				self.showMessage("Unable to access your calendar")
			}
		})
		
	}

	func scheduleTableViewDataSourceReserverClass(item: ScheduleItem) {
		self.currentItem = item
		self.login  = MBOClientLogin()
		if let l = self.login{
			l.delegate = self
			l.login()
		}
	}
	func scheduleTableViewDataSourceShowClassType(view: UIView, rect: CGRect, message: String) {
		self.params = (view,rect,message)
		self .performSegueWithIdentifier(showClassTypeSegue, sender: nil)
	}
	func addCurrentItemToCalendar(){
		
	}
	private var params:(UIView,CGRect,String)?
	private var currentItem:ScheduleItem?
	func scheduleTableViewDataSourceShowTeacher(view: UIView, rect: CGRect, instructor: String) {
		self.params = (view,rect,instructor)
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
					if let (v,r,i) = self.params{
						vc.instructor = self.schedule?.instructorFromID(i)
						if let pop = vc.popoverPresentationController{
							pop.delegate = self
							pop.sourceRect = r
							pop.sourceView = v
						}
					}
					
				}
		case showClassTypeSegue:
			if let vc = segue.destinationViewController as? ClassTypeViewController{
				if let (v,r,m) = self.params{
					vc.message = m
					if let pop = vc.popoverPresentationController{
						pop.delegate = self
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
	override func willMoveToParentViewController(parent: UIViewController?) {
		if parent == nil{
			currentDayIndex--
		}
	}
	func adaptivePresentationStyleForPresentationController(controller: UIPresentationController) -> UIModalPresentationStyle {
		return .None
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
	var login:MBOClientLogin?
	var currentClientID:String?
	func complete(clientID: String!) {

		if let id = clientID
		{
			self.currentClientID = id
			let alert = UIAlertController(title: "Add Class?", message: "Are you sure you want to reserve this class?", preferredStyle: UIAlertControllerStyle.Alert)
			alert.addAction(UIAlertAction(title: "YES", style: UIAlertActionStyle.Default, handler:{ [unowned self](act) -> Void in
				self.reserveClass()
				}))
			alert.addAction(UIAlertAction(title: "NO", style: .Default, handler: nil))
			self .presentViewController(alert, animated: true, completion: { () -> Void in
				
			})
			
		}else
		{let alert = UIAlertController(title: "Sorry", message: "You must login in order to reserver a class", preferredStyle: UIAlertControllerStyle.Alert)
			alert.addAction(UIAlertAction(title: "OK", style: UIAlertActionStyle.Default, handler:nil))
			self .presentViewController(alert, animated: true, completion: { () -> Void in
				
			})
			
		}
		
	}
	func reserveClass(){

		if let item = self.currentItem{
			var reserve = MBOReserveClass()
			var classID = "\(item.scheduleItemID)"
			if let currentID = self.currentClientID{
				var title = "Sorry"
				var msg = "There was a failure processing your request, please try again later or make sure you have a valid payment method set up on Mindbody"
				if reserve.reserveClass(classID, forClient: currentID){
					title = "Success!"
					msg = "You are confirmed for this class."
				}
				let alert = UIAlertController(title: title, message: msg, preferredStyle: UIAlertControllerStyle.Alert)
				alert.addAction(UIAlertAction(title: "OK", style: UIAlertActionStyle.Default, handler:nil))
				self .presentViewController(alert, animated: true, completion: { () -> Void in
					
				})
			}
		}
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
