//
//  ScheduleTableViewDataSource.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/9/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import Foundation
import UIKit

class ScheduleTableViewDataSource : NSObject, UITableViewDataSource
{
	override init() {
		
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
			}
			ret = cell
		}
		return ret!
	}
}