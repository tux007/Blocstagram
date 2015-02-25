//
//  BLCMediaTest.m
//  Blocstagram
//
//  Created by tom on 25/02/15.
//  Copyright (c) 2015 BLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>
#import "BLCMedia.h"

@interface BLCMediaTest : XCTestCase

@end

@implementation BLCMediaTest

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testThatInitializationWorks {
    NSDictionary *dictionary = @{@"id" : @"8675309",
                                 @"caption" : @{@"text": @"Pic title"},
                                 @"images" : @{@"standard_resolution" : @{@"url" : @"www.example.com.br/media"}}};
    BLCMedia *testMedia = [[BLCMedia alloc] initWithDictionary:dictionary];
    XCTAssertEqualObjects(testMedia.idNumber,dictionary[@"id"], @"The ID number should be equal");
    XCTAssertEqualObjects(testMedia.caption , dictionary[@"caption"][@"text"], @"Photo title should be a text");
    XCTAssertEqualObjects(testMedia.mediaURL,[NSURL URLWithString:dictionary[@"images"][@"standard_resolution"][@"url"]], @"The the media URL should be equal");
}

@end
