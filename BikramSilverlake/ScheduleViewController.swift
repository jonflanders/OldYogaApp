//
//  ScheduleViewController.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import UIKit

class ScheduleViewController: UIViewController {

	@IBOutlet var dataSource:ScheduleTableViewDataSource!
	@IBOutlet var tableView:UITableView!
    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
		let sc = ScheduleController()
		sc.getSchedule { (schedule, error) -> Void in
			if let realSchedule = schedule{
				self.dataSource.schedule  = realSchedule
			}
		}
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

}
