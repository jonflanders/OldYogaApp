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
	@IBOutlet weak var scrollView: UIScrollView!
	override func viewDidLoad() {
		if let msg  = self.message{
			self.messageLabel.text = self.stringByStrippingHTML(msg)
			self.scrollView.contentSize = self.messageLabel.frame.size
		}
	}
	private let regex = "<[^>]+"
	func stringByStrippingHTML(inputString:String)->String{
		var outputString = String(inputString)
		
		var r = outputString.rangeOfString(regex, options:NSStringCompareOptions.RegularExpressionSearch)
		do{
			outputString.removeRange(r!)
			r = outputString.rangeOfString(regex, options:NSStringCompareOptions.RegularExpressionSearch)
		}while(r != nil)
		outputString = outputString.stringByReplacingOccurrencesOfString(">", withString: "")
		outputString = outputString.stringByReplacingOccurrencesOfString("<", withString: "")
		
		return outputString;
	}
}