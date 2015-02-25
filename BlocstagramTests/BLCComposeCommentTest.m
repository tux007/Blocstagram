//
//  BLCComposeCommentTest.m
//  Blocstagram
//
//  Created by tom on 25/02/15.
//  Copyright (c) 2015 BLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>
#import "BLCComposeCommentView.h"

@interface BLCComposeCommentTest : XCTestCase

@end

@implementation BLCComposeCommentTest

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testThatCommentIsWritten
{
    BLCComposeCommentView *commentView = [[BLCComposeCommentView alloc]init];
    commentView.text =@"Comment";
    XCTAssertTrue(commentView.isWritingComment);
}
-(void)testThatCommentIsNotWritten{
    BLCComposeCommentView *commentView = [[BLCComposeCommentView alloc]init];
    commentView.text = @"";
    XCTAssertFalse(commentView.isWritingComment);
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
