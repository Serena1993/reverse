//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WBStoryMusicItem;
@protocol WBStoryMusicPickerActionDelegate;

@protocol WBStoryMusicPickerViewDelegate <NSObject>
- (void)musicPickerViewWillEditMusic;
- (void)musicPickerViewShouldPausePlayerIfNeed;
- (void)musicPickerViewDidDismiss:(UIView<WBStoryMusicPickerActionDelegate> *)arg1;
- (void)musicPickerView:(UIView<WBStoryMusicPickerActionDelegate> *)arg1 didSelectMusicItem:(WBStoryMusicItem *)arg2;
- (void)musicPickerView:(UIView<WBStoryMusicPickerActionDelegate> *)arg1 didTapMusicItem:(WBStoryMusicItem *)arg2;
@end

