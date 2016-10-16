//
//  ServerConnection.swift
//
//
//  Created by Jon Flanders on 8/22/14.
//  Copyright (c) 2014 Flounderware. All rights reserved.
//

import Foundation

let mainServerConnection = ServerConnectionManager()

typealias JsonDictionary = Dictionary<String,AnyObject>
typealias ServerCallback = (JsonDictionary?,Error?)->(Void)
typealias ServerRawCallback = (Data?,Error?)->Void
class ServerConnectionManager {
    let maxOp = 100;
    init()
    {
        self.queue = OperationQueue()
        self.queue.maxConcurrentOperationCount = maxOp
        self.configuration = URLSessionConfiguration.default
    }
    fileprivate let queue:OperationQueue
    fileprivate let configuration:URLSessionConfiguration
	func getDictionary(_ resourceURL:String, serverCallback:@escaping ServerCallback)
	{
		
		self.get(resourceURL, callback: { (data, error) -> Void in
			
			let (dict,error) = self.dictionaryFromData(data!)
			serverCallback(dict,nil)
			
		})
	}
    func get(_ resourceURL: String, callback: @escaping ServerRawCallback) {
        
        let url = URL(string: resourceURL)
        let request = MutableURLRequest(url: url!)
        let session = self.getSession()
	
        let task = session.dataTask(with: request as URLRequest, completionHandler: { (data , response ,  err) -> Void in
          
            if(err != nil){
                
               callback(nil,err)
                
            }else
            {
				callback(data,nil)
			}
        }) 
        task.resume()
		
    }
    fileprivate func dictionaryFromData(_ data:Data)->(JsonDictionary,NSErrorPointer){
        let err:NSErrorPointer? = nil
		var ret:JsonDictionary? = nil
		do{
			ret = try JSONSerialization.jsonObject(with: data, options: JSONSerialization.ReadingOptions.allowFragments) as! JsonDictionary
		}
		catch{
			
		}
        return (ret!,err!)
    }
    fileprivate func getSession()->URLSession{
        let ret = URLSession(configuration: configuration)
        return ret
    }
}
