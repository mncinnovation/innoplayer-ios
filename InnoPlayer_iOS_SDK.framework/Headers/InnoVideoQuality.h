//
//  InnoVideoQuality.h
//  InnoPlayer_iOS_SDK
//
//  Created by Andi Septiadi on 29/06/21.
//  Copyright © 2021 MNC Innovation Center. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface InnoVideoQuality : NSObject

/**
 * The bitrate of the media file
 */
@property (nonatomic, unsafe_unretained, readonly) int bitrate;

/**
 * The width of the media file
 */
@property (nonatomic, unsafe_unretained, readonly) double width;

/**
 * The height of the media file
 */
@property (nonatomic, unsafe_unretained, readonly) double height;

/**
 * The label used for a quality
 */
@property (nonatomic, retain, readonly, nonnull) NSString * label;

/**
 * Initializtion InnoVideoQuality with dictionary
 *
 * @param dictionary data of quality
 */
- (instancetype)initWithDictionary:(nonnull NSDictionary *)dictionary;
@end

NS_ASSUME_NONNULL_END
