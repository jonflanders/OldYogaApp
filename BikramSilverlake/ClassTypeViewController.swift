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
	@IBOutlet fileprivate weak var messageLabel: UILabel!
	@IBOutlet weak var scrollView: UIScrollView!
	override func viewDidLoad() {
		if let msg  = self.message{
			self.messageLabel.text = self.stringByStrippingHTML(msg)
			self.scrollView.contentSize = self.messageLabel.frame.size
		}
	}
	fileprivate let regex = "<[^>]+"
	func stringByStrippingHTML(_ inputString:String)->String{
		var outputString = String(inputString)
		
		var r = outputString?.range(of: regex, options:NSString.CompareOptions.regularExpression)
		if r != nil  {
			repeat{
				outputString?.removeSubrange(r!)
				r = outputString?.range(of: regex, options:NSString.CompareOptions.regularExpression)
			}while(r != nil)
		}
		outputString = outputString?.replacingOccurrences(of: ">", with: "")
		outputString = outputString?.replacingOccurrences(of: "<", with: "")
		
		return outputString!;
	}
}
