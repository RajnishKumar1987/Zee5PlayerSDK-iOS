//
//  ZEE5SdkError.h
//  ZEE5PlayerSDK
//
//  Created by admin on 04/12/18.
//  Copyright © 2018 ZEE5. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZEE5SdkError : NSObject
@property(nonatomic) NSInteger code;
@property(strong, nonatomic) NSString *message;
+ (ZEE5SdkError*)initWithErrorCode:(NSInteger)code andMessage:(NSString*)message;

@end

NS_ASSUME_NONNULL_END
