//
//  InnoDrmDataSource.h
//  InnoPlayer_iOS_SDK
//
//  Created by Victor Toya on 10/08/21.
//  Copyright © 2021 MNC Innovation Center. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol InnoDrmDataSource

/**
 * Called when the InnoPlayer need content id for DRM content
 */
- (void)fetchContentIdentifierForRequest:(NSURL *)requestURL;

/**
 * Called when the InnoPlayer need certificate for DRM content
 */
- (void)fetchCertificateForRequest:(NSURL *)requestURL;

/**
 * Called when the InnoPlayer need content key for DRM content
 */
- (void)fetchContentKeyWithRequest:(NSData *)requestSPC;

@end
