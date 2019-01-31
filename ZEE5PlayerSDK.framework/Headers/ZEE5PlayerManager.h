//
//  ZEE5PlayerManager.h
//  ZEE5PlayerSDK
//
//  Created by admin on 04/12/18.
//  Copyright © 2018 ZEE5. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ZEE5PlayerConfig.h"
#import "ZEE5PlayerDelegate.h"
#import "CurrentItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZEE5PlayerManager : NSObject
@property CurrentItem *currentItem;
@property (weak, nonatomic) id <ZEE5PlayerDelegate> delegate;


+ (ZEE5PlayerManager *)sharedInstance;
- (void)playLiveContent:(NSString *)channel_id showId:(NSString *)show_id startTime:(NSTimeInterval)startTime endtime:(NSTimeInterval)end_time episodNumber:(NSString *)episode_no seasonNumber:(NSString *)season_nun category:(NSString *)category translation:(NSString *)laguage playerConfig:(ZEE5PlayerConfig *)playerConfig playbackView:(UIView *)playbackView;
- (void)playVODContent:(NSString*)content_id country:(NSString*)country translation:(NSString*)laguage playerConfig:(ZEE5PlayerConfig*)playerConfig playbackView:(UIView*)playbackView;
- (void)playVODContent:(NSString*)content_id country:(NSString*)country translation:(NSString*)laguage;
- (void)stop;
-(void)play;
-(void)pause;
-(void)replay;
-(void)setMute:(BOOL)isMute;
-(void)setLock:(BOOL)isLock;
-(void)setFullScreen:(BOOL)isFull;
-(void)forward:(NSInteger)value;
-(void)rewind:(NSInteger)value;
-(void)setSeekTime:(NSInteger)value;
-(void)hideCustomControls;
-(void)perfomAction;
-(void)setAudioTrack:(NSInteger )audioID;
-(void)setSubTitle:(NSInteger )subTitleID;
-(void)moreOptions;
-(void)tapOnLiveButton;
-(void)tapOnPrevButton;
-(void)tapOnNextButton;
-(void)tapOnMinimizeButton;
-(CGFloat )getCurrentDuration;
-(CGFloat )getTotalDuration;
-(NSUInteger )getBufferPercentage;
-(void)playSimilarEvent:(NSString *)content_id;
@end

NS_ASSUME_NONNULL_END
