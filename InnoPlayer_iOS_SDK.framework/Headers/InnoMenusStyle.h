//
//  InnoMenusStyle.h
//  InnoPlayer_iOS_SDK
//
//  Created by Andi Septiadi on 17/06/21.
//  Copyright © 2021 MNC Innovation Center. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * InnoMenusStyle  allows customization of the menu of the player.
 */
@interface InnoMenusStyle : NSObject
/**
 * The color of default text in menus
 */
@property (nonatomic, retain, readwrite, nullable) UIColor * text;

/**
 * The color of active text in menus when select the option
 */
@property (nonatomic, retain, readwrite, nullable) UIColor * textActive;

/**
 * The color of background of the menu
 */
@property (nonatomic, retain, readwrite, nullable) UIColor * background;

/**
 * The color of background of the options in menus
 */
@property (nonatomic, retain, readwrite, nullable) UIColor * itemBackground;

/**
 * The color of background of the selected option in menus
 */
@property (nonatomic, retain, readwrite, nullable) UIColor * selectedItemBackground;

@property (nonatomic, retain, readwrite, nullable) UIColor * tabBarColor;

@property (nonatomic, retain, readwrite, nullable) UIColor * tabBarActiveColor;

@property (nonatomic, retain, readwrite, nullable) UIColor * tabBarIconColor;

@property (nonatomic, retain, readwrite, nullable) UIColor * tabBarIconActiveColor;
@end

NS_ASSUME_NONNULL_END
