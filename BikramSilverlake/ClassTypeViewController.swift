//
//  ClassTypeViewController.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/10/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import UIKit

class ClassTypeViewController: UIViewController {
	var message:String?
	@IBOutlet private weak var messageLabel: UILabel!
	override func viewDidLoad() {
		if let msg  = self.message{
			self.messageLabel.text = msg
		}
	}
}
