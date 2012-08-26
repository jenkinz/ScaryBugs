//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by Brian Jenkins on 8/26/12.
//  Copyright (c) 2012 Brian Jenkins. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle:(NSString *)title rating:(float)rating;

@end
