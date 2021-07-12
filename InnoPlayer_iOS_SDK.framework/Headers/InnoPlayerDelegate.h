//
//  InnoPlayerDelegate.h
//  InnoPlayer_iOS_SDK
//
//  Created by Victor Toya on 03/09/20.
//  Copyright © 2020 MNC Innovation Center. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InnoError.h"

/**
 * Defines methods for a delegate which responds to events related to a InnoPlayer.
 */
@protocol InnoPlayerDelegate

/**
 * Called when the InnoPlayer is success.
 */
- (void)onInnoPlayerSuccess:(NSString *)message;

/**
 * Called when the InnoPlayer is get error.
 */
- (void)onInnoPlayerError:(InnoError *)error;

/**
 * Called when the InnoPlayer get total duration of video
 */
- (void)onInnoPlayerGetTotalDuration:(int)duration;

/**
 * Called when the InnoPlayer get current duration of played  video
 */
- (void)onInnoPlayerGetCurrentDuration:(int)duration;

/**
 * Called when the InnoPlayer need content id for DRM content
 */
- (void)onInnoFetchContentIdForRequest:(NSURL *)requestURL;

/**
 * Called when the InnoPlayer need certificate for DRM content
 */
- (void)onInnoFetchCertificateForRequest:(NSURL *)requestURL;

/**
 * Called when the InnoPlayer need content key for DRM content
 */
- (void)onInnoFetchContentKeyWithRequest:(NSData *)requestSPC;

@end

