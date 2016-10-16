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
	func scheduleTableViewDataSourceShowTeacher(_ view:UIView,rect:CGRect,instructor:String)
	func scheduleTableViewDataSourceShowClassType(_ view:UIView,rect:CGRect, message: String)
	func scheduleTableViewDataSourceReserverClass(_ item:ScheduleItem)
	func scheduleTableViewDataSourceAddToSchedule(_ item:ScheduleItem)
}

class ScheduleTableViewDataSource : NSObject, UITableViewDataSource, ScheduleTableViewCellDelegate
{
	 var delegate:ScheduleTableViewDataSourceDelegate?
	func scheduleTableViewCellReserverClass(_ item: ScheduleItem) {
		if let del = self.delegate{
			del.scheduleTableViewDataSourceReserverClass(item)
		}
	}
	func scheduleTableViewCellAddToSchedule(_ item: ScheduleItem) {
		if let del = self.delegate{
			del.scheduleTableViewDataSourceAddToSchedule(item)
		}
	}
	func scheduleTableViewCellShowClassType(_ view: UIView, rect: CGRect, message: String) {
		if let del = self.delegate{
			del.scheduleTableViewDataSourceShowClassType(view, rect: rect, message:message)
		}
	}
	func scheduleTableViewCellShowTeacher(_ view: UIView, rect: CGRect, instructor: String) {
		if let del = self.delegate{
			del.scheduleTableViewDataSourceShowTeacher(view, rect: rect, instructor: instructor)
		}
	}
	fileprivate let cellID = "ScheduleCell"
	@IBOutlet var tableView:UITableView!
	var currentDay : (String,[ScheduleItem])?{
		didSet{
			self.reloadData()
		}
	}
	func reloadData(){
		if self.tableView != nil && self.currentDay != nil {
			self.tableView.reloadData()
			var currentCell:ScheduleTableViewCell?
			
			for cell in self.tableView.visibleCells{
				if let scell = cell as? ScheduleTableViewCell{
					if scell.scheduleTableViewCellIsActive{
						currentCell = scell
						break
					}
				}
			}
			if let cc = currentCell{
				let indexPath = self.tableView.indexPath(for: cc)
				if let realIndexPath = indexPath {
					self.tableView.scrollToRow(at: realIndexPath, at: UITableViewScrollPosition.top, animated: true)
				}
			}
		}
	}
	
	func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
		if let unwarappedDay  = self.currentDay{
			return unwarappedDay.1.count
		}else
		{
			return 0
		}
	}
	func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
		var ret:UITableViewCell?
		if let cell = tableView.dequeueReusableCell(withIdentifier: cellID) as? ScheduleTableViewCell{
			if let unwarappedDay = self.currentDay{
				cell.scheduleItem = unwarappedDay.1[(indexPath as NSIndexPath).row]
				cell.delegate = self
			}
			ret = cell
		}
		return ret!
	}
}
