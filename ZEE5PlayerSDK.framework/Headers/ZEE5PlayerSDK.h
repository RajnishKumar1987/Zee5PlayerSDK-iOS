//
//  ZEE5PlayerSDK.h
//  ZEE5PlayerSDK
//
//  Created by admin on 04/12/18.
//  Copyright © 2018 ZEE5. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for ZEE5PlayerSDK.
FOUNDATION_EXPORT double ZEE5PlayerSDKVersionNumber;

//! Project version string for ZEE5PlayerSDK.
FOUNDATION_EXPORT const unsigned char ZEE5PlayerSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like

typedef enum devEnvironment
{
    development,
    production
} DevelopmentEnvironment;


#import <ZEE5PlayerSDK/ZEE5SdkError.h>
#import <ZEE5PlayerSDK/ZEE5PlyerManager.h>
#import <ZEE5PlayerSDK/ZEE5PlayerConfig.h>
#import <ZEE5PlayerSDK/ZEE5PlayerDelegate.h>
#import <ZEE5PlayerSDK/ZEE5AudioTrack.h>
#import <ZEE5PlayerSDK/ZEE5Subtitle.h>
#import <ZEE5PlayerSDK/ZEE5LangaugeModel.h>
#import <ZEE5PlayerSDK/CurrentItem.h>
#import <ZEE5PlayerSDK/Genres.h>
#import <ZEE5PlayerSDK/RelatedVideos.h>


typedef void(^SuccessHandler)(id result);
typedef void(^FailureHandler)(ZEE5SdkError *error);

@interface ZEE5PlayerSDK : NSObject
+ (void)initializeWithApplicationId:(NSString *)appId userId:(NSString *)userId andSDK_Key:(NSString*)key devEnvironment:(DevelopmentEnvironment)environment withCompletionHandler:(SuccessHandler)success failureBlock:(FailureHandler)failure;
+ (NSString *)getUserId;
+ (NSString *)getAppId;
+ (NSString *)getSDK_key;
+ (DevelopmentEnvironment)getDevEnvironment;
+ (void)logoutUser;
+ (NSString *)getSDKVersion;
@end
