//
//  BKMoneyUtils.h
//  BKMoneyKit
//
//  Created by Byungkook Jang on 2014. 8. 24..
//  Copyright (c) 2014년 Byungkook Jang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BKMoneyUtils : NSObject

+ (NSRegularExpression *)nonNumericRegularExpression;

+ (NSCharacterSet *)numberCharacterSet;

@end
