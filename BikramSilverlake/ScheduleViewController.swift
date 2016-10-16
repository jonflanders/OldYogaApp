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
	private lazy var __once: () = { [unowned self]() -> Void in
				let ds = DateFormatter()
				ds.dateFormat = "EEE MMM d yyyy"
				self.dateFormatter = ds
				//Sun May 10 2015
			}()
	@IBOutlet weak var messageView: UIView!
	@IBOutlet weak var messageLabel: UILabel!
	@IBOutlet weak var messageViewConstraint: NSLayoutConstraint!
		{
		didSet{
			self.messageViewConstraintConstant = self.messageViewConstraint.constant
			
		}
	}
	var messageViewConstraintConstant:CGFloat!
	@IBAction func closeMessage(_ s:AnyObject?){
		self.messageViewConstraint.constant = self.messageViewConstraintConstant
		UIView.animate(withDuration: 1, animations: {[unowned self] () -> Void in
			self.view.layoutIfNeeded()
		})
	}
	func showMessage(_ msg:String){
		DispatchQueue.main.async(execute: { [unowned self]() -> Void in
			
			self.messageLabel.text = msg;
			self.messageViewConstraint.constant = 0
			UIView.animate(withDuration: 2, animations: { () -> Void in
				self.view.layoutIfNeeded()
				}, completion: { (complete) -> Void in
					DispatchQueue.main.asyncAfter(deadline: .now() + 5.0) {[unowned self] () -> Void in
						self.closeMessage(nil)
					}
			}) 
		})

	}
	fileprivate var eventStore:EKEventStore = EKEventStore()
	func scheduleTableViewDataSourceAddToSchedule(_ item: ScheduleItem) {
		self.eventStore.requestAccess(to: EKEntityType.event, completion: {[unowned self] (allowed, error) -> Void in
			if allowed {
				self.currentItem = item
				let event = EKEvent(eventStore: self.eventStore)
				event.title = item.scheduleType
				event.location = studioName
				event.startDate = item.scheduleStartDate.globalTime as Date
				event.endDate = item.scheduleEndDate.globalTime as Date
				let cal = self.eventStore.defaultCalendarForNewEvents
				event.calendar = cal
				do {
					try self.eventStore .save(event, span: EKSpan.thisEvent)
				} catch _ {
				}
				self.showMessage("Class added to your calendar")

			}else
			{
				self.showMessage("Unable to access your calendar")
			}
		})
		
	}

	func scheduleTableViewDataSourceReserverClass(_ item: ScheduleItem) {
		self.currentItem = item
		self.login  = MBOClientLogin()
		if let l = self.login{
			l.delegate = self
			l.login()
		}
	}
	func scheduleTableViewDataSourceShowClassType(_ view: UIView, rect: CGRect, message: String) {
		self.params = (view,rect,message)
		self .performSegue(withIdentifier: showClassTypeSegue, sender: nil)
	}
	func addCurrentItemToCalendar(){
		
	}
	
	@IBAction func classTypeTouched(_ sender: AnyObject) {
		self.performSegue(withIdentifier: showClassTypeSegue, sender: nil)
	}
	fileprivate var params:(UIView,CGRect,String)?
	fileprivate var currentItem:ScheduleItem?
	func scheduleTableViewDataSourceShowTeacher(_ view: UIView, rect: CGRect, instructor: String) {
		self.params = (view,rect,instructor)
		self.performSegue(withIdentifier: showInstructorSegue, sender: nil )
	}
	@IBAction func swipeRight(_ sender: UISwipeGestureRecognizer) {		
			self.navigationController?.popViewController(animated: true)

	}
	@IBAction func swipeLeft(_ sender: UISwipeGestureRecognizer) {
		if self.hasNextDay(){
			self.performSegue(withIdentifier: nextDaySegueID, sender: self)
		}
	}
	override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
		switch(segue.identifier!)
		{
		case nextDaySegueID:
			if let  vc = segue.destination as? ScheduleViewController{
				vc.schedule = self.schedule
				vc.dataSource.currentDay = self.nextDay()
			
			}
		case showInstructorSegue:
			
				if let vc = segue.destination as? TeacherViewController{
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
			if let vc = segue.destination as? ClassTypeViewController{
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
	override func willMove(toParentViewController parent: UIViewController?) {
		if parent == nil{
			currentDayIndex -= 1
		}
	}
	func adaptivePresentationStyle(for controller: UIPresentationController) -> UIModalPresentationStyle {
		return .none
	}
	override func shouldPerformSegue(withIdentifier identifier: String, sender: Any?) -> Bool {
		var ret = true
		
		if(identifier == nextDaySegueID){
			ret = self.hasNextDay()
		}
		return ret
	}
	func hasNextDay()->Bool{
		let tempIdx = currentDayIndex + 1
		if let days = self.daysInOrder {
			if tempIdx < days.count{
				let day = days[tempIdx]
				return self.getItemsForDay(day) != nil
			}
		}
		return false
	}
	fileprivate func getItemsForDay(_ day:String)->[ScheduleItem]?{
		if let s = self.schedule{
			let tempIdx = currentDayIndex + 1
			if let days = self.daysInOrder {
				if tempIdx < days.count {
					let day = days[tempIdx]
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
		
		if let _ = self.schedule{
			let tempIdx = currentDayIndex + 1
			if let days = self.daysInOrder {
				if tempIdx < days.count {
					let day = days[tempIdx]
					if let items = self.getItemsForDay(day){
					
						currentDayIndex += 1
						return (day,items)
					}
				}
			}
		}
		return nil
	}
	
	
	
	func tableView(_ tableView: UITableView, viewForHeaderInSection section: Int) -> UIView? {
		let nib = UINib(nibName: "ScheduleTableHeaderView", bundle: nil)
		let view = nib.instantiate(withOwner: nil, options: nil).first as! UIView
		return view
	}
	var login:MBOClientLogin?
	var currentClientID:String?
	func complete(_ clientID: String!) {

		if let id = clientID
		{
			self.currentClientID = id
			let alert = UIAlertController(title: "Add Class?", message: "Are you sure you want to reserve this class?", preferredStyle: UIAlertControllerStyle.alert)
			alert.addAction(UIAlertAction(title: "YES", style: UIAlertActionStyle.default, handler:{ [unowned self](act) -> Void in
				self.reserveClass()
				}))
			alert.addAction(UIAlertAction(title: "NO", style: .default, handler: nil))
			self .present(alert, animated: true, completion: { () -> Void in
				
			})
			
		}else
		{let alert = UIAlertController(title: "Sorry", message: "You must login in order to reserver a class", preferredStyle: UIAlertControllerStyle.alert)
			alert.addAction(UIAlertAction(title: "OK", style: UIAlertActionStyle.default, handler:nil))
			self .present(alert, animated: true, completion: { () -> Void in
				
			})
			
		}
		
	}
	func reserveClass(){

		if let item = self.currentItem{
			let reserve = MBOReserveClass()
			let classID = "\(item.scheduleItemID)"
			if let currentID = self.currentClientID{
				var title = "Sorry"
				var msg = "There was a failure processing your request, please try again later or make sure you have a valid payment method set up on Mindbody"
				if reserve.reserveClass(classID, forClient: currentID){
					title = "Success!"
					msg = "You are confirmed for this class."
				}
				let alert = UIAlertController(title: title, message: msg, preferredStyle: UIAlertControllerStyle.alert)
				alert.addAction(UIAlertAction(title: "OK", style: UIAlertActionStyle.default, handler:nil))
				self .present(alert, animated: true, completion: { () -> Void in
					
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
	
	var token: Int = 0
	var dateFormatter:DateFormatter?
	
	override func viewDidLoad() {
        super.viewDidLoad()
		self.tableView.tableFooterView = UIView(frame: CGRect.zero)
		if(self.schedule == nil){
			let sc = ScheduleController()
			sc.getSchedule { (schedule, error) -> Void in
				if let realSchedule = schedule{
					DispatchQueue.main.async(execute: { () -> Void in
						self.schedule = realSchedule
						let day = self.daysInOrder![0]
						if let idx = realSchedule.scheduleThisWeek.index(forKey: day){
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
			if let currentDay = self.dataSource.currentDay{
				self.navigationItem.title = currentDay.0
			}
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
