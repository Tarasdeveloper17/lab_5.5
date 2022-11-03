//
//  test5_5.m
//  test5.5
//
//  Created by Тарас Могила on 03.11.2022.
//
#include "header.h"
#import <XCTest/XCTest.h>

@interface test5_5 : XCTestCase

@end

@implementation test5_5

- (void)test_lab {
    
    
    double result = g(4);
    
    XCTAssertEqual(result, -2);
    
}



@end
