//
//  ZEE5AdModel.h
//  ZEE5PlayerSDK
//
//  Created by Mani on 27/12/18.
//  Copyright © 2018 ZEE5. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface ZEE5AdModel : NSObject
@property (nonatomic) NSString *tag;
@property (nonatomic) NSString *tag_name;
@property (nonatomic) NSString *time;
@property (nonatomic) id adView;
@property (nonatomic) NSInteger tagValue;

+ (instancetype)initFromJSONDictionary:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
