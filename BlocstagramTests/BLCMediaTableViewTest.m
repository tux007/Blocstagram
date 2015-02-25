//
//  BLCMediaTableViewTest.m
//  Blocstagram
//
//  Created by tom on 25/02/15.
//  Copyright (c) 2015 BLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>
#import "BLCMediaTableViewCell.h"
#import "BLCMedia.h"
#import "BLCComposeCommentView.h"
#import "BLCDataSource.h"

@interface BLCMediaTableViewTest : XCTestCase

@end

@implementation BLCMediaTableViewTest

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

-(void)testHeightofMedia
{
    BLCMediaTableViewCell *cell = [BLCMediaTableViewCell new];
    BLCDataSource *data = [BLCDataSource new];
    for (BLCMedia *media in data.mediaItems)
    {
        CGFloat height = [BLCMediaTableViewCell heightForMediaItem:media width:320];
        XCTAssertTrue(height > 0, @"the height should be bigger than 0");
        XCTAssertTrue(height < cell.frame.size.height, @"the height should be bigger than 0");
    }
}

@end
