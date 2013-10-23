//
//  EKString.h
//  EKAlgorithms
//
//  Created by Evgeny Karkan on 21.08.13.
//  Copyright (c) 2013 EvgenyKarkan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EKStringStuff : NSObject

+ (BOOL)isGivenStringPalindrome:(NSString *)string;
+ (NSString *)reversedStringWithString:(NSString *)stringToReverse;

@end