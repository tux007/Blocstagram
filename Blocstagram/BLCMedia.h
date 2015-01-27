//
//  BLCMedia.h
//  Blocstagram
//
//  Created by tom on 17/11/14.
//  Copyright (c) 2014 BLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BLCLikeButton.h"

typedef NS_ENUM(NSInteger, BLCMediaDownloadState) {
    BLCMediaDownloadStateNeedsImage             = 0,
    BLCMediaDownloadStateDownloadInProgress     = 1,
    BLCMediaDownloadStateNonRecoverableError    = 2,
    BLCMediaDownloadStateHasImage               = 3
};


@class BLCUser;

@interface BLCMedia : NSObject <NSCoding>

- (instancetype) initWithDictionary:(NSDictionary *)mediaDictionary;

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) BLCUser *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *caption;
@property (nonatomic, assign) BLCMediaDownloadState downloadState;
@property (nonatomic, strong) NSArray *comments;
@property (nonatomic, assign) BLCLikeState likeState;
@property (nonatomic, assign) NSInteger likeCount;



@end
