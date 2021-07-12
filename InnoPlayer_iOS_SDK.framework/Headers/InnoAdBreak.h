//
//  InnoAdBreak.h
//  InnoPlayer_iOS_SDK
//
//  Created by Victor Toya on 04/01/21.
//  Copyright © 2021 MNC Innovation Center. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * InnoAdBreak is an object providing info for an ad break in a video, played using InnoPlayer. Single AdBreak or a set of multiple AdBreak should be fed to the InnoAdConfig's schedule array
 */
@interface InnoAdBreak : NSObject

@property(nonatomic) BOOL displayed;

/**
 * Offset of the ad. Describes the point in time at which to play the ad. @Note Supported formats are:
 */
@property(nonatomic, strong) NSString *offset;

/**
 * This option is the URL to the ad tag, which contains the VAST response.
 */
@property(nonatomic, strong) NSString *tag;

/**
 * Factory method that creates an AdBreak with tag and offset.
 *
 * @param tag This option is the URL to the ad tag, which contains the VAST response.
 * @param offset Offset of the ad.
 */
- (id _Nonnull)initWithWithTag:(NSString *)tag andOffset:(NSString *)offset;

@end

NS_ASSUME_NONNULL_END
