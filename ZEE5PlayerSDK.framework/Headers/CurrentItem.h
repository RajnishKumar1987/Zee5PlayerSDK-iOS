//
//  CurrentItem.h
//  ZEE5PlayerSDK
//
//  Created by admin on 06/12/18.
//  Copyright © 2018 ZEE5. All rights reserved.
//

typedef enum {
    vod,
    live,
    dvr
} StreamType;

#import <Foundation/Foundation.h>
#import "Genres.h"
#import "RelatedVideos.h"
NS_ASSUME_NONNULL_BEGIN

@interface CurrentItem : NSObject
@property(strong, nonnull) NSString *drm_key;
@property(strong, nonnull) NSString *hls_Url;
@property(strong, nonnull) NSString *drm_token;
@property(strong, nonnull) NSString *business_type;
@property(strong, nonnull) NSArray *subTitles;
@property (nonatomic)StreamType streamType;
@property (strong, nonatomic) NSString* asset_type;
@property (strong, nonatomic) NSString* asset_subtype;
@property (strong, nonatomic) NSArray<Genres*> *geners;
@property (strong, nonatomic) NSArray<RelatedVideos*> *related;
@property(strong, nonnull) NSString *content_id;


@end

NS_ASSUME_NONNULL_END
