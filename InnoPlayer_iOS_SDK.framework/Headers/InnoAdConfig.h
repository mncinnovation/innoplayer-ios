//
//  InnoAdConfig.h
//  InnoPlayer_iOS_SDK
//
//  Created by Victor Toya on 04/01/21.
//  Copyright © 2021 MNC Innovation Center. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InnoAdBreak.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * An object providing information about the way ads are handled by the player. Describes adMessage, skipMessage, skipText and skipOffset.
 *
 * @note In the current implementation, an adConfig object can be added to config and propagates to all adBreaks.
 */
@interface InnoAdConfig : NSObject

/**
 * An array of InnoAdBreak objects that proivides info about ad breaks.
 *
 * @note tag property is ignored if this property is not nil.
 */
@property(nonatomic, strong) NSArray <InnoAdBreak *> *schedule;

@end

NS_ASSUME_NONNULL_END
