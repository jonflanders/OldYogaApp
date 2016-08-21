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


extension NSDate{
	var localTime:NSDate{
		get{
			let tz = NSTimeZone.localTimeZone()
			let seconds:NSTimeInterval = Double(tz.secondsFromGMTForDate(self))
			return NSDate(timeInterval: seconds, sinceDate: self)
		}
	}
	
	var globalTime:NSDate{
		get{
			let tz = NSTimeZone.localTimeZone()
			let seconds:NSTimeInterval = 0 - Double(tz.secondsFromGMTForDate(self))
			return NSDate(timeInterval: seconds, sinceDate: self)
		}
	}
}