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

@optional

/* ========================================*/
/** @name Playback
 */

/**
 * Called when the InnoPlayer enters the 'playing' state.
 */
- (void)onPlay;

/**
 * Called when the InnoPlayer enters the 'paused' state.
 */
- (void)onPause;

/**
 * Called when the InnoPlayer enters the 'idle' state.
 */
- (void)onIdle;

/**
 * Called when the InnoPlayer is ready for playback.
 */
- (void)onReady;

/**
 * Called when the InnoPlayer toggles to/from mute.
 */
- (void)onMute:(BOOL)state;

/* ========================================*/
/** @name Resize
 */

/**
 * Called when the InnoPlayer toggles to/from fullscreen.
 */
- (void)onFullscreen:(BOOL)state;

/* ========================================*/
/** @name Controls
 */

/**
 Fired when controls are enabled or disabled by setting the JWPlayerController controls property to a boolean.
 */
- (void)onControls:(BOOL)state;

/* ========================================*/
/** @name Error
 */

/**
 * Called when the InnoPlayer is get error.
 */
- (void)onError:(InnoError *)error;

/* ========================================*/
/** @name Playback Position and Duration
 */

/**
 * Called when the InnoPlayer get total duration of video
 */
- (void)onDuration:(int)duration;

/**
 * Called when the InnoPlayer get current position of played video
 */
- (void)onTime:(int)position;


@end

