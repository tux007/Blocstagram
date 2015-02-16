//
//  UIImage+BLCImageUtilities.h
//  Blocstagram
//
//  Created by tom on 16/02/15.
//  Copyright (c) 2015 BLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (BLCImageUtilities)

- (UIImage *) imageWithFixedOrientation;
- (UIImage *) imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *) imageCroppedToRect:(CGRect)cropRect;

@end
