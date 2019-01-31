//
//  ZEE5PlayerDelegate.h
//  ZEE5PlayerSDK
//
//  Created by admin on 06/12/18.
//  Copyright © 2018 ZEE5. All rights reserved.
//

@protocol ZEE5PlayerDelegate;

#import <Foundation/Foundation.h>
#import "ZEE5SdkError.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, PlayerControlState) {
    Locked,
    Unlocked
};


@protocol ZEE5PlayerDelegate <NSObject>
@optional
- (void)didFinishWithError:(ZEE5SdkError *)error;
- (void)availableAudioTracks:(NSArray *)aryModels;
- (void)availableSubTitles:(NSArray *)aryModels;
- (void)didTaponLiveButton:(NSString *)str;
- (void)didTaponNextButton;
- (void)didTaponPrevButton;
- (void)didFinishPlaying;
- (void)didTaponMinimizeButton;
- (void)didTaponLockButton:(PlayerControlState )state;

@end

NS_ASSUME_NONNULL_END
