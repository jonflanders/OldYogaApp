//
//  ImageTableViewCell.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/16/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import UIKit

open class ImageTableViewCell: UITableViewCell {

	open var cellImage:UIImage?{
		didSet{
			if let i = self.cellImage{
				self.cellImageView.image = i
			}
		}
	}
	@IBOutlet weak var cellImageView: UIImageView!
    override open func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override open  func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
