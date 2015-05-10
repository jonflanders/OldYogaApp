//
//  ScheduleTableViewDataSource.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/9/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import Foundation
import UIKit

protocol ScheduleTableViewDataSourceDelegate{
	func scheduleTableViewDataSourceShowTeacher(view:UIView,rect:CGRect,instructor:String)
	func scheduleTableViewDataSourceShowClassType(view:UIView,rect:CGRect,type:ScheduleItemType)
	func scheduleTableViewDataSourceReserverClass(item:ScheduleItem)
	func scheduleTableViewDataSourceAddToSchedule(item:ScheduleItem)
}

class ScheduleTableViewDataSource : NSObject, UITableViewDataSource, ScheduleTableViewCellDelegate
{
	 var delegate:ScheduleTableViewDataSourceDelegate?
	func scheduleTableViewCellReserverClass(item: ScheduleItem) {
		if let del = self.delegate{
			del.scheduleTableViewDataSourceReserverClass(item)
		}
	}
	func scheduleTableViewCellAddToSchedule(item: ScheduleItem) {
		if let del = self.delegate{
			del.scheduleTableViewDataSourceAddToSchedule(item)
		}
	}
	func scheduleTableViewCellShowClassType(view: UIView, rect: CGRect, type: ScheduleItemType) {
		if let del = self.delegate{
			del.scheduleTableViewDataSourceShowClassType(view, rect: rect, type: type)
		}
	}
	func scheduleTableViewCellShowTeacher(view: UIView, rect: CGRect, instructor: String) {
		if let del = self.delegate{
			del.scheduleTableViewDataSourceShowTeacher(view, rect: rect, instructor: instructor)
		}
	}
	private let cellID = "ScheduleCell"
	@IBOutlet var tableView:UITableView!
	var currentDay : (String,[ScheduleItem])?{
		didSet{
			if let cd = self.currentDay{
				if self.tableView != nil {
					self.tableView.reloadData()
				}
			}
		}
	}
	func reloadData(){
		if self.tableView != nil && self.currentDay != nil {
			self.tableView.reloadData()
		}
	}
	
	func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
		if let unwarappedDay  = self.currentDay{
			return unwarappedDay.1.count
		}else
		{
			return 0
		}
	}
	func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
		var ret:UITableViewCell?
		if let cell = tableView.dequeueReusableCellWithIdentifier(cellID) as? ScheduleTableViewCell{
			if let unwarappedDay = self.currentDay{
				cell.scheduleItem = unwarappedDay.1[indexPath.row]
				cell.delegate = self
			}
			ret = cell
		}
		return ret!
	}
}