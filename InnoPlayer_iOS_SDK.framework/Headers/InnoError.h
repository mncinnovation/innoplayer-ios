//
//  InnoError.h
//  InnoPlayer_iOS_SDK
//
//  Created by Victor Toya on 10/12/20.
//  Copyright © 2020 MNC Innovation Center. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Information about an error condition including a domain-specific error code, category and application-specific information.
 */
@interface InnoError : NSObject

/**
 * Code of error
 */
@property(nonatomic) int code;

/**
 * Category of error
 */
@property(nonatomic) int category;

/**
 * Detail of error
 */
@property(nonatomic, nullable, strong) NSString *details;

/**
 * Factory method that creates a InnoError object with code, category and details of error.
 */
- (id _Nullable )initWithCode:(int)code andCategory:(int)category andDetails:(NSString *_Nullable)message;

@end
