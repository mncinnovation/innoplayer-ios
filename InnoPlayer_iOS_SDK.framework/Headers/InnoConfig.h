//
//  InnoConfig.h
//  InnoPlayer_iOS_SDK
//
//  Created by Victor Toya on 03/09/20.
//  Copyright © 2020 MNC Innovation Center. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InnoPlaylistItem.h"
#import "InnoAdConfig.h"
#import <InnoPlayer_iOS_SDK/InnoMenusStyle.h>

@class InnoPlaylistItem;

/**
 * Configuration object used to create InnoPlayer instance.
 */
@interface InnoConfig : NSObject

/**
 * Video URL to play using InnoPlayer.
 */
@property(nonatomic, nullable, strong) NSString *file;

/**
 * An array of InnoSource objects representing multiple quality levels of a video.
 */
@property(nonatomic, nullable, strong) NSArray *sources;

/**
 * An array of InnoPlaylistItem objects containing information about different video items to be reproduced in a sequence.
 */
@property(nonatomic, nullable, strong) NSArray <InnoPlaylistItem *> *playlist;

/**
 * Title (or name) of the video
 *
 * @note Shown in the play button container in the center of the screen, before the video starts to play, in addition to the device lock screen and in the multimedia controls in the multitasking UI
 */
@property(nonatomic, nullable, strong) NSString *title;

/**
 * The URL of the thumbnail image.
 */
@property(nonatomic, nullable, strong) NSString *image;

/**
 * A description of your video or audio item.
 */
@property(nonatomic, nullable, strong) NSString *desc;

/**
 * Unique identifier of this item. Used by advertising, analytics and discovery services
 */
@property(nonatomic, nullable, strong) NSString *mediaId;

/**
 * adConfig object providing info about ad handling.
 */
@property(nonatomic, nullable, strong) InnoAdConfig *advertising;

/**
 * A boolean value that determines whether player controls are shown.
 */
@property(nonatomic) BOOL controls;

/**
 * A boolean value that determines whether video should repeat after it’s done playing.
 */
@property(nonatomic) BOOL repeat;

/**
 * Configures if the title of a media file should be displayed. Defaults to YES.
 */
@property(nonatomic) BOOL displayTitle;

/**
 * Configures if the thumbnail of a media file should be displayed. Defaults to YES.
 */
@property(nonatomic) BOOL displayThumbnail;

/**
 * Configures if the description title of a media file should be displayed. Defaults to YES.
 */
@property(nonatomic) BOOL displayDescription;

/**
 * A boolean value that determines whether video should start automatically after loading.
 */
@property(nonatomic) BOOL autostart;

/**
 * Configuration object used to customize the menus.
 */
@property (nonatomic, retain, readwrite, nullable) InnoMenusStyle * menus;

/**
 * Factory method that creates a InnoConfig object with url of video content.
 */
- (id _Nonnull)initWithContentURL:(NSString *_Nonnull)url;

@end
