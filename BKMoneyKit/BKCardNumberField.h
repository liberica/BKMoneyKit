//
//  BKCardNumberField.h
//  BKMoneyKit
//
//  Created by Byungkook Jang on 2014. 8. 23..
//  Copyright (c) 2014년 Byungkook Jang. All rights reserved.
//

#import "BKForwardingTextField.h"

@interface BKCardNumberField : BKForwardingTextField

/**
 * A Boolean indicating whether shows card logo left side or not.
 */
@property (nonatomic) BOOL showsCardLogo;

/**
 * The card number without blank space. (e.g., 1234123412341234)
 * Use this property to set or get card number instead of text property.
 */
@property (nonatomic, strong) NSString *cardNumber;

/**
 * The card company name. (e.g., Visa, Master, ...)
 */
@property (nonatomic, readonly) NSString *cardCompanyName;

@end
