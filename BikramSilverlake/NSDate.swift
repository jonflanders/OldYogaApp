//
//  NSDate.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 8/20/16.
//  Copyright © 2016 flounderware. All rights reserved.
//

import Foundation

/*-(NSDate *) toLocalTime
{
NSTimeZone *tz = [NSTimeZone localTimeZone];
NSInteger seconds = [tz secondsFromGMTForDate: self];
return [NSDate dateWithTimeInterval: seconds sinceDate: self];
}

-(NSDate *) toGlobalTime
{
NSTimeZone *tz = [NSTimeZone localTimeZone];
NSInteger seconds = -[tz secondsFromGMTForDate: self];
return [NSDate dateWithTimeInterval: seconds sinceDate: self];
}
 */


extension Date{
	var localTime:Date{
		get{
			let tz = TimeZone.autoupdatingCurrent
			let seconds:TimeInterval = Double(tz.secondsFromGMT(for: self))
			return Date(timeInterval: seconds, since: self)
		}
	}
	
	var globalTime:Date{
		get{
			let tz = TimeZone.autoupdatingCurrent
			let seconds:TimeInterval = 0 - Double(tz.secondsFromGMT(for: self))
			return Date(timeInterval: seconds, since: self)
		}
	}
}
