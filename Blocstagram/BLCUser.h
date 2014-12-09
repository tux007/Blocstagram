//
//  BLCUser.h
//  Blocstagram
//
//  Created by tom on 17/11/14.
//  Copyright (c) 2014 BLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BLCUser : NSObject <NSCoding>

- (instancetype) initWithDictionary:(NSDictionary *)userDictionary;

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *fullName;
@property (nonatomic, strong) NSURL *profilePictureURL;
@property (nonatomic, strong) UIImage *profilePicture;

@end
