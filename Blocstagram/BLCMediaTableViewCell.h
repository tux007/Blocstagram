//
//  BLCMediaTableViewCell.h
//  Blocstagram
//
//  Created by tom on 18/11/14.
//  Copyright (c) 2014 BLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCMediaTableViewCell : UITableViewCell

@property (nonatomic, strong) BLCMedia *mediaItem;

+ (CGFloat) heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width;

@end
