//
//  InnoPlayerController.h
//  InnoPlayer_iOS_SDK
//
//  Created by Victor Toya on 03/09/20.
//  Copyright © 2020 MNC Innovation Center. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "InnoPlayerDelegate.h"
#import "InnoConfig.h"
#import <InnoPlayer_iOS_SDK/InnoCaption.h>

/**
 * A class that encapsulates InnoPlayer and provides control over the playback as well as holds the state of the player and notifies about status updates
 */
@interface InnoPlayerController : NSObject

/**
 * Player view.
 *
 * @note to be added to the application view hierarchy.
 */
@property (nonatomic, nullable, strong) UIView *view;

/**
 * The object that acts as the delegate of the InnoPlayerController.
 *
 * @note The delegate must adopt the InnoPlayerDelegate protocol. The delegate is not retained.
 */
@property (nonatomic, nullable, weak) id<InnoPlayerDelegate> delegate;

/**
 * indicates whether or not audio output of the player is muted. Only affects audio muting for the player instance and not for the device.
 */
@property (nonatomic, assign, getter=isMuted) BOOL muted;

/**
 * Indicates the current audio volume of the player; 0 means "silence all audio", 100 means "play at the full volume of the current item".
 */
@property (nonatomic, assign) CGFloat volume;

/**
 * indicates the current resolution of the player
 */
@property (nonatomic, assign, readonly) CGSize currentResolution;

/**
 * indicates player screen is fullscreen or not.
 */
@property (nonatomic, assign) BOOL fullscreen;

/**
 * indicates the current subtitle option of the player
 */
@property (nonatomic, copy, readonly, nullable) AVMediaSelectionOption * currentSubtitleOption;


/**
 * List of all the captions
 *
 * @note Use currentCaptions to activate one of the captions programmatically. Object at index 0 is off.
 */
@property (nonatomic, copy, readonly, nonnull) NSArray <InnoCaption *> * captionsList;

/**
 * The index of the caption object in captions list currently used by the player.
 *
 * @note index 0 stands for no caption.
 */
@property (nonatomic, assign, unsafe_unretained, readwrite) NSUInteger currentCaption;

/**
 * Sets the Player Key programmatically instead of having to type it into the application’s info.plist. We recommend setting the key in the AppDelegate’s application:didFinishLaunchingWithOptions: method.
 *
 * @note If a different key is entered in the info.plist, the key set with this method will supersede. Use this method before instantiating the InnoPlayerController, ideally in the AppDelegate’s application:didFinishLaunchingWithOptions: method.
 */
+ (void)setPlayerKey:(NSString *_Nonnull)key;

/**
 * Inits the player with config object in InnoConfig format.
 *
 * @param frame Frame of player view
 * @param config InnoConfig object that is used to setup the player.
 */
- (id _Nonnull)initWithFrame:(CGRect)frame andConfig:(InnoConfig *_Nonnull)config;

/**
 * Starts to play video from current position.
 *
 * @note If there is a paused ad, this method will resume the ad playback.
 */
- (void)play;

/**
 * Pauses video.
 *
 * @note If there is an ad playing, this method will pause the ad playback.
 */
- (void)pause;

/**
 * Stops the player (returning it to the idle state) and unloads the currently playing media file.
 */
- (void)stop;

/**
 * Seek player
 *
 * @param position Time in the video to seek to
 */
- (void)seek:(NSInteger)position;

/**
 * Set content id or asset id
 *
 * @param contentId content identifier of video
 */
- (void)doInnoSetContentId:(NSData *_Nonnull)contentId;

/**
 * Set certificate for DRM Apple FairPlay
 *
 * @param certificate data of certificate (.der or .cer file)
 */
- (void)doInnoSetCertificate:(NSData *_Nonnull)certificate;

/**
 * Set content key from Apple FairPlay KSM
 *
 * @param contentKey data of content key context from key server module (KSM)
 */
- (void)doInnoSetContentKey:(NSData *_Nonnull)contentKey;

// MARK: - Settings Menu

/**
 * To show innoplayer menu
 */
- (void)innoPlayerShowSettingMenu;

/**
 * To hide innoplayer menu
 */
- (void)innoPlayerHideSettingMenu;

@end
