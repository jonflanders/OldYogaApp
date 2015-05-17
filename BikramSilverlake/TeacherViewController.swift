//
//  TeacherViewController.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/10/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import UIKit

class TeacherViewController: UIViewController {
	@IBOutlet weak var instructorNameLabel: UILabel!
	
	@IBOutlet weak var instructorImage: UIImageView!
	@IBOutlet weak var instructorBio: UIWebView!
	var instructor:Instructor?
	override func viewDidLoad() {
		if let i = self.instructor{
			self.reloadData(i)
		}
	}
	func reloadData(instructor:Instructor){
	
		self.instructorBio .loadHTMLString(instructor.instructorBio, baseURL: nil)
		var data = NSData(contentsOfURL: NSURL(string: instructor.instructorURL)!)
		self.instructorImage.image = UIImage(data: data!)
		self.instructorNameLabel.text = instructor.instructorName
	}
}
