//
//  BLCMediaFullScreenViewController.h
//  Blocstagram
//
//  Created by tom on 14/12/14.
//  Copyright (c) 2014 BLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class BLCMedia;

@interface BLCMediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype) initWithMedia:(BLCMedia *)media;

- (void) centerScrollView;

@end