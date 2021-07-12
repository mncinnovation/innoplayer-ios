//
//  InnoCaption.h
//  InnoPlayer_iOS_SDK
//
//  Created by Andi Septiadi on 01/04/21.
//  Copyright © 2021 MNC Innovation Center. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface InnoCaption : NSObject
@property (nonatomic, copy, readonly, nullable) NSString * name;
@property (nonatomic, copy, readonly, nullable) NSString * tag;

/**
 * Initialize innocaption with option value
 *
 * @param option Media selection option from item
 * @return caption model
 */
+ (nonnull InnoCaption *)captionWithOption:(nonnull AVMediaSelectionOption *)option;
@end

NS_ASSUME_NONNULL_END
