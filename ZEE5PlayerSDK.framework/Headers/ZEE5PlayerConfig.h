//
//  ZEE5PlayerConfig.h
//  ZEE5PlayerSDK
//
//  Created by admin on 04/12/18.
//  Copyright © 2018 ZEE5. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZEE5PlayerConfig : NSObject
@property(nonatomic) BOOL autoPlay;
@property(nonatomic) BOOL showCustomPlayer;
@property(nonatomic) BOOL isLandScape;
//@property(nonatomic) BOOL showSuggestions;

@property(nonatomic) NSInteger forwardValue;

@end

NS_ASSUME_NONNULL_END
