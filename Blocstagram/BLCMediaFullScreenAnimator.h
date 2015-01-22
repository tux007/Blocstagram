//
//  BLCMediaFullScreenAnimator.h
//  Blocstagram
//
//  Created by tom on 20/01/15.
//  Copyright (c) 2015 BLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BLCMediaFullScreenAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) BOOL presenting;
@property (nonatomic, weak) UIImageView *cellImageView;

@end
