//
//  ScheduleTableViewCell.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import UIKit

protocol ScheduleTableViewCellDelegate{
	func scheduleTableViewCellShowTeacher(view:UIView,rect:CGRect,instructor:String)
	func scheduleTableViewCellShowClassType(view:UIView,rect:CGRect,message:String)
	func scheduleTableViewCellReserverClass(item:ScheduleItem)
	func scheduleTableViewCellAddToSchedule(item:ScheduleItem)
}

class ScheduleTableViewCell: UITableViewCell {

	var scheduleTableViewCellIsActive:Bool{
		get{
			if let si  = self.scheduleItem{
				return !si.scheduleItemInPast
			}else
			{
				return false
			}
		}
	}
	var delegate:ScheduleTableViewCellDelegate?
	@IBAction func showClassType(sender: AnyObject) {
		if let del = self.delegate,let item  = self.scheduleItem{
	
			del.scheduleTableViewCellShowClassType(self, rect: self.classType.frame, message: item.scheduleDescription)
		}
	}
	@IBAction func addToSchedule(sender: AnyObject) {
		if let del = self.delegate{
			del.scheduleTableViewCellAddToSchedule(self.scheduleItem!)
		}
	}
	
	@IBAction func reserverClass(sender: AnyObject) {
		if let del = self.delegate{
			del.scheduleTableViewCellReserverClass(self.scheduleItem!)
		}
	}
	@IBAction func showTeacher(sender: AnyObject) {
		if let del = self.delegate{
			del.scheduleTableViewCellShowTeacher(self, rect: self.teacherButton.frame, instructor: self.scheduleItem!.scheduleTeacherID)
		}
		
	}
	@IBOutlet weak var minutesLabel:UILabel!
	
	var scheduleItem:ScheduleItem?{
		didSet{
			if let si = self.scheduleItem{
				self.timeLabel.text = si.scheduleFullTime
				self.teacherButton .setTitle(si.scheduleTeacherName, forState: UIControlState.Normal)
				self.minutesLabel.text = si.scheduleItemMinutes
				if si.scheduleItemInPast {
					self.userInteractionEnabled = false
					let newAlpha:CGFloat = 0.5
					for v in self.allViews{
						v.alpha = newAlpha
					}
				}
			}
		}
	}
	@IBOutlet var allViews: [UIView]!
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
