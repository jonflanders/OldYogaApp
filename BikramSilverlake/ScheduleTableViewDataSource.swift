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
	private let cellID = "ScheduleCell"
	@IBOutlet var tableView:UITableView!
	var currentDay : [ScheduleItem]?
	var schedule: Schedule?{
		didSet{
			if let s = self.schedule{
				self.currentDay = s.scheduleThisWeek[s.scheduleThisWeek.keys.first!]
				dispatch_async(dispatch_get_main_queue(), { [unowned self] () -> Void in
					self.tableView.reloadData()
				})
			}
		}
	}
	
	func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
		if let items  = self.currentDay{
			return items.count
		}else
		{
			return 0
		}
	}
	func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
		var ret:UITableViewCell?
		if let cell = tableView.dequeueReusableCellWithIdentifier(cellID) as? ScheduleTableViewCell{
			if let cd = self.currentDay{
				cell.scheduleItem = cd[indexPath.row]
			}
			ret = cell
		}
		return ret!
	}
}