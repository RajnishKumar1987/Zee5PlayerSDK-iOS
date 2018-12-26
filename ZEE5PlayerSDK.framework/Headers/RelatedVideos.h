//
//  RelatedVideos.h
//  ZEE5PlayerSDK
//
//  Created by admin on 23/12/18.
//  Copyright © 2018 ZEE5. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RelatedVideos : NSObject
@property (nonatomic, copy)NSString* identifier;
@property (nonatomic, copy)NSString* imageURL;
@property (nonatomic, copy)NSString* title;
@property (nonatomic, copy)NSString* deepLink;
@property (nonatomic)BOOL isAppSwitch;


@end

NS_ASSUME_NONNULL_END
