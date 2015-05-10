//
//  Instructor.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import Foundation

struct Instructor {
	static func instructorFromDictionary(jsonDict:JsonDictionary)->Instructor?{
		if let dict = jsonDict {
			if let iID = dict[idKey] as? String, name = dict[nameKey] as? String, bio = dict[bioKey] as? String, image = dict[imageURIKey] as? String{
				return Instructor(instructorID: iID, instructorName: name, instructorBio: bio, instructorURL: image)
			}
		}
		return nil
	}
	let instructorID:String
	let instructorName:String
	let instructorBio:String
	let instructorURL:String
}
private let idKey = "ID"
private let nameKey = "Name"
private let bioKey  = "Bio"
private let imageURIKey = "ImageURI"