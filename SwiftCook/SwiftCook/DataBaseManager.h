//
//  DataBaseManager.h
//  SwiftCook
//
//  Created by Jason_Liu on 23/09/2016.
//  Copyright © 2016 Deki. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>
@interface DataBaseManager : NSObject
+(instancetype) sharedManager;
    // shared instance
-(void) createDataBase;
  // creat data base
    
    
    
@end
