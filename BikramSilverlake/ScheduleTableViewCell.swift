//
//  ScheduleTableViewCell.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import UIKit

class ScheduleTableViewCell: UITableViewCell {

	@IBOutlet weak var scheduleButton: UIButton!
	@IBOutlet weak var classType: UIButton!
	@IBOutlet weak var reserveButton: UIButton!
	@IBOutlet weak var timeLabel: UILabel!
	@IBOutlet weak var teacherButton: UIButton!
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
