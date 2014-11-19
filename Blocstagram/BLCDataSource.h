//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by tom on 17/11/14.
//  Copyright (c) 2014 BLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCDataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSMutableArray *mediaItems;

- (void) deleteMediaItem:(BLCMedia *)item;

@end
