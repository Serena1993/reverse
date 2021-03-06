//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoPluginBaseView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WBQueueJobDelegate-Protocol.h"
#import "WBVideoBusinessPluginDetailFollowViewDelegate-Protocol.h"
#import "WBVideoDanmakuComposeSingleHalfScreenViewControllerDelegate-Protocol.h"
#import "WBVideoFastForwardIndicatorViewDelegate-Protocol.h"
#import "WBVideoFullScreenConfigurator-Protocol.h"
#import "WBVideoProgressBarDanmakuComposePluginDelegate-Protocol.h"
#import "WBVideoProgressBarDefinitionPluginDelegate-Protocol.h"
#import "WBVideoProgressBarPluginViewDelegate-Protocol.h"
#import "WBVideoSocialUpNextPluginViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIPanGestureRecognizer, UISlider, UIView, WBTimelineAttributedTextView, WBVideoActivityIndicatorView, WBVideoControlsIndicatorView, WBVideoGradientColorView, WBVideoItem, WBVideoLoadingTimeoutPlugin, WBVideoOverlayBusinessPluginView, WBVideoProgressBarPluginView, WBVideoQualitySwitchMenuPlugin, WBVideoQualitySwitchingTipsPlugin, WBVideoSocialTrendPluginView, WBVideoSocialUpNextPluginView, WBVideoSocialVolumeProgressView, WBVideoStoryboardController, WBVideoStoryboardFrameView;
@protocol WBVideoSocialPluginViewDelegate, WBVideoSocialTrendPluginViewDelegate;

@interface WBVideoSocialControlsPluginView : WBVideoPluginBaseView <WBVideoFullScreenConfigurator, WBVideoSocialUpNextPluginViewDelegate, WBVideoFastForwardIndicatorViewDelegate, UIGestureRecognizerDelegate, WBVideoProgressBarPluginViewDelegate, WBVideoProgressBarDefinitionPluginDelegate, WBVideoBusinessPluginDetailFollowViewDelegate, WBVideoProgressBarDanmakuComposePluginDelegate, WBVideoDanmakuComposeSingleHalfScreenViewControllerDelegate, WBQueueJobDelegate>
{
    struct {
        unsigned int needRecoverPlay:1;
    } _flags;
    _Bool _active;
    _Bool _alwaysShowCacheItem;
    _Bool _backgroundPlaybackEnabled;
    _Bool _isHUDShowing;
    _Bool _playButtonHidden;
    _Bool _activeStateWhenFullScreenChanged;
    _Bool _showSystemVolumeView;
    _Bool _hasEnterFullScreen;
    _Bool _willShowFeedbackView;
    _Bool _nextVideoTipsHidden;
    _Bool _showProgressBarOnly;
    _Bool _activingComposeCapability;
    id <WBVideoSocialPluginViewDelegate> _socialDelegate;
    id <WBVideoSocialTrendPluginViewDelegate> _trendDelegate;
    UIView *_gestureView;
    UIPanGestureRecognizer *_panGesture;
    UISlider *_volumeSlider;
    double _panGestureBeginVolumeValue;
    double _panGestureBeginBrightnessValue;
    unsigned long long _panType;
    WBVideoControlsIndicatorView *_videoProgressHud;
    WBVideoGradientColorView *_topGradientView;
    WBVideoGradientColorView *_bottomGradientView;
    UIButton *_previousButton;
    UIButton *_playButton;
    UIButton *_nextButton;
    UIButton *_feedbackBtn;
    WBTimelineAttributedTextView *_contentLabel;
    UIButton *_moreButton;
    UIButton *_castButton;
    UIButton *_backButton;
    UIButton *_freeDataTipsButton;
    UILabel *_freeDataTipsLabel;
    UIButton *_nextVideoTips;
    UIButton *_postDanMuButton;
    WBVideoSocialVolumeProgressView *_volumeView;
    WBVideoActivityIndicatorView *_indicatorView;
    WBVideoProgressBarPluginView *_inlineProgressBarPlugin;
    WBVideoProgressBarPluginView *_fullScreenProgressBarPlugin;
    WBVideoSocialUpNextPluginView *_socialUpNextPlugin;
    WBVideoSocialTrendPluginView *_trendPlugin;
    WBVideoQualitySwitchMenuPlugin *_qualityMenuPlugin;
    WBVideoOverlayBusinessPluginView *_businessPlugin;
    WBVideoLoadingTimeoutPlugin *_loadingTimeoutPlugin;
    WBVideoGradientColorView *_gradientView;
    WBVideoStoryboardController *_storyboardController;
    WBVideoStoryboardFrameView *_storyboardView;
    WBVideoItem *_storyboardVideoItem;
    WBVideoQualitySwitchingTipsPlugin *_qualitySwitchingTips;
    WBVideoProgressBarPluginView *_currentProgressBarPlugin;
    struct CGPoint _panGestureBeginPoint;
    CDStruct_1b6d18a9 _seekStartTime;
    struct UIEdgeInsets _safeInsets;
}

+ (id)pluginWithstyle:(long long)arg1;
@property(nonatomic) _Bool activingComposeCapability; // @synthesize activingComposeCapability=_activingComposeCapability;
@property(nonatomic) _Bool showProgressBarOnly; // @synthesize showProgressBarOnly=_showProgressBarOnly;
@property(nonatomic) _Bool nextVideoTipsHidden; // @synthesize nextVideoTipsHidden=_nextVideoTipsHidden;
@property(nonatomic) _Bool willShowFeedbackView; // @synthesize willShowFeedbackView=_willShowFeedbackView;
@property(nonatomic) _Bool hasEnterFullScreen; // @synthesize hasEnterFullScreen=_hasEnterFullScreen;
@property(nonatomic) __weak WBVideoProgressBarPluginView *currentProgressBarPlugin; // @synthesize currentProgressBarPlugin=_currentProgressBarPlugin;
@property(retain, nonatomic) WBVideoQualitySwitchingTipsPlugin *qualitySwitchingTips; // @synthesize qualitySwitchingTips=_qualitySwitchingTips;
@property(nonatomic) _Bool showSystemVolumeView; // @synthesize showSystemVolumeView=_showSystemVolumeView;
@property(nonatomic) _Bool activeStateWhenFullScreenChanged; // @synthesize activeStateWhenFullScreenChanged=_activeStateWhenFullScreenChanged;
@property(retain, nonatomic) WBVideoItem *storyboardVideoItem; // @synthesize storyboardVideoItem=_storyboardVideoItem;
@property(retain, nonatomic) WBVideoStoryboardFrameView *storyboardView; // @synthesize storyboardView=_storyboardView;
@property(retain, nonatomic) WBVideoStoryboardController *storyboardController; // @synthesize storyboardController=_storyboardController;
@property(nonatomic) _Bool playButtonHidden; // @synthesize playButtonHidden=_playButtonHidden;
@property(retain, nonatomic) WBVideoGradientColorView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) WBVideoLoadingTimeoutPlugin *loadingTimeoutPlugin; // @synthesize loadingTimeoutPlugin=_loadingTimeoutPlugin;
@property(retain, nonatomic) WBVideoOverlayBusinessPluginView *businessPlugin; // @synthesize businessPlugin=_businessPlugin;
@property(retain, nonatomic) WBVideoQualitySwitchMenuPlugin *qualityMenuPlugin; // @synthesize qualityMenuPlugin=_qualityMenuPlugin;
@property(retain, nonatomic) WBVideoSocialTrendPluginView *trendPlugin; // @synthesize trendPlugin=_trendPlugin;
@property(retain, nonatomic) WBVideoSocialUpNextPluginView *socialUpNextPlugin; // @synthesize socialUpNextPlugin=_socialUpNextPlugin;
@property(retain, nonatomic) WBVideoProgressBarPluginView *fullScreenProgressBarPlugin; // @synthesize fullScreenProgressBarPlugin=_fullScreenProgressBarPlugin;
@property(retain, nonatomic) WBVideoProgressBarPluginView *inlineProgressBarPlugin; // @synthesize inlineProgressBarPlugin=_inlineProgressBarPlugin;
@property(retain, nonatomic) WBVideoActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) WBVideoSocialVolumeProgressView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) UIButton *postDanMuButton; // @synthesize postDanMuButton=_postDanMuButton;
@property(retain, nonatomic) UIButton *nextVideoTips; // @synthesize nextVideoTips=_nextVideoTips;
@property(retain, nonatomic) UILabel *freeDataTipsLabel; // @synthesize freeDataTipsLabel=_freeDataTipsLabel;
@property(retain, nonatomic) UIButton *freeDataTipsButton; // @synthesize freeDataTipsButton=_freeDataTipsButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *castButton; // @synthesize castButton=_castButton;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) WBTimelineAttributedTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIButton *feedbackBtn; // @synthesize feedbackBtn=_feedbackBtn;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *previousButton; // @synthesize previousButton=_previousButton;
@property(retain, nonatomic) WBVideoGradientColorView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) WBVideoGradientColorView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(nonatomic) CDStruct_1b6d18a9 seekStartTime; // @synthesize seekStartTime=_seekStartTime;
@property(retain, nonatomic) WBVideoControlsIndicatorView *videoProgressHud; // @synthesize videoProgressHud=_videoProgressHud;
@property(nonatomic) _Bool isHUDShowing; // @synthesize isHUDShowing=_isHUDShowing;
@property(nonatomic) unsigned long long panType; // @synthesize panType=_panType;
@property(nonatomic) double panGestureBeginBrightnessValue; // @synthesize panGestureBeginBrightnessValue=_panGestureBeginBrightnessValue;
@property(nonatomic) double panGestureBeginVolumeValue; // @synthesize panGestureBeginVolumeValue=_panGestureBeginVolumeValue;
@property(nonatomic) struct CGPoint panGestureBeginPoint; // @synthesize panGestureBeginPoint=_panGestureBeginPoint;
@property(retain, nonatomic) UISlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(nonatomic) __weak id <WBVideoSocialTrendPluginViewDelegate> trendDelegate; // @synthesize trendDelegate=_trendDelegate;
@property(nonatomic) __weak id <WBVideoSocialPluginViewDelegate> socialDelegate; // @synthesize socialDelegate=_socialDelegate;
@property(nonatomic) _Bool backgroundPlaybackEnabled; // @synthesize backgroundPlaybackEnabled=_backgroundPlaybackEnabled;
@property(nonatomic) _Bool alwaysShowCacheItem; // @synthesize alwaysShowCacheItem=_alwaysShowCacheItem;
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)progressBarDefinitionPluginDidSelectQuality:(id)arg1;
- (_Bool)danmakuEnabled;
- (id)currentDanmakuRenderPluginView;
- (void)showProgressHUDWithContent:(id)arg1 isError:(_Bool)arg2;
- (id)loadDanmakuDraft;
- (void)recordDanmakuDraft:(id)arg1 withStatusID:(id)arg2;
- (void)jobSendFinished:(id)arg1;
- (id)warningTextForWordCountExceeded:(id)arg1;
- (void)videoDanmakuComposeSingleHalfScreenViewController:(id)arg1 showProgressMsg:(id)arg2 isError:(_Bool)arg3;
- (void)videoDanmakuComposeSingleHalfScreenViewController:(id)arg1 didDismissWithDraft:(id)arg2;
- (void)videoDanmakuComposeSingleHalfScreenViewController:(id)arg1 didTapSendWithText:(id)arg2 withRightToComment:(_Bool)arg3;
- (void)showDanmakuCapabilityAlertWithType:(long long)arg1;
- (void)showDanmakuComposeHalfScreenViewController;
- (void)progressBarDanmakuComposePluginDidSelectCompose:(id)arg1;
- (double)newProgressToSeek:(double)arg1 startTime:(CDStruct_1b6d18a9)arg2;
- (void)panGestureAction:(id)arg1;
- (void)doubleTapGestureAction:(id)arg1;
- (void)traverseAllSubviews:(id)arg1 withPoint:(struct CGPoint)arg2 withEvent:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)singleTapGestureAction:(id)arg1;
- (void)repeatTapped:(id)arg1;
- (void)singleTapped:(id)arg1;
- (_Bool)inlineMode;
- (_Bool)isPlaying;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)videoProgressBarPlugin:(id)arg1 validateVisibleState:(_Bool)arg2 forSubplugin:(id)arg3;
- (void)updateStoryboardFrameViewWithSeekProgress:(double)arg1;
- (void)updateNextVideoTipsLayoutWithActiveState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateBusinessButtonsLayoutWithActiveState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupBusinessButtonsLayout;
- (void)setSafeInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)safeInsets;
- (id)activeBackgroundColor:(_Bool)arg1;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2 autoHidden:(_Bool)arg3 forceUpdate:(_Bool)arg4 hideControls:(_Bool)arg5 updatesBlock:(CDUnknownBlockType)arg6;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2 autoHidden:(_Bool)arg3 forceUpdate:(_Bool)arg4 hideControls:(_Bool)arg5;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2 forceUpdate:(_Bool)arg3 hideControls:(_Bool)arg4;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2 autoHidden:(_Bool)arg3;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setActive:(_Bool)arg1;
- (void)updateBackButtonVisibility;
- (void)showGradientView:(_Bool)arg1;
- (void)setInactiveTimerFire;
- (void)nextVideoTipsPressed:(id)arg1;
- (id)getBackButtonWithState:(unsigned long long)arg1;
- (void)postDanMu:(id)arg1;
- (_Bool)visibilityWithPlaybackState:(unsigned long long)arg1 presentationState:(unsigned long long)arg2;
- (unsigned long long)presentationStateVisibilityOptions;
- (unsigned long long)playbackStateVisibilityOptions;
- (_Bool)overlayBusinessPlugin:(id)arg1 shouldDisplayDetailFollowViewWithModel:(id)arg2;
- (void)updatePluginsDisableStateForPlugin:(id)arg1 playbackState:(long long)arg2;
- (_Bool)alwaysShowFullScreenPluginWithCurrentStateOfPlayerController:(id)arg1;
- (void)updatePluginsDisableState;
- (void)socialUpNextPluginDidUpdateContentViewVisibleState:(id)arg1;
- (void)nextVideoTipsButtonDidChangeVisibility:(_Bool)arg1;
- (void)tipsPluginDidShowMessageNotification:(id)arg1;
- (_Bool)isTipsPluginShowingMessage;
- (void)updateNextVideoTipsVisibility;
- (_Bool)shouldShowNextVideoTips;
- (void)updateNextVideoTipsContent;
- (void)updateTimes;
- (void)videoPlayerControllerDidFinishPlayback:(id)arg1;
- (void)videoPlayerController:(id)arg1 didUpdateCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayerController:(id)arg1 didExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 userDidPerformEvent:(unsigned long long)arg2 sender:(id)arg3 info:(id)arg4;
- (void)videoPlayerController:(id)arg1 didReceiveOrientationChangeNotificationWithOrientation:(long long)arg2;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)videoPlayerController:(id)arg1 didPerformPlayWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)videoPlayerController:(id)arg1 willPerformPauseWithReason:(long long)arg2;
- (_Bool)shouldShowFreeDataTips;
- (void)showChangeFavoriteResult:(id)arg1;
- (void)favoritOrUnFavoritStatus:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (void)playNextVideoIfNeeded:(id)arg1;
- (_Bool)canPlayNextVideo;
- (void)feedbackDidCommit:(id)arg1;
- (void)systemVolumeDidChange:(id)arg1;
- (void)hideVolumeView;
- (void)showFreeDataTips:(id)arg1;
- (void)showSpeedActionSheet;
- (id)supportedPlaySpeedRates;
- (void)showTipsProgressHud:(id)arg1;
- (void)showDefinitionActionSheetWithButtonItemsResolver:(id)arg1;
- (id)definitionButtonPressedExtraLogParameters;
- (void)castAction:(id)arg1;
- (void)moreAction:(id)arg1;
- (void)showHalfScreenRepostViewController:(id)arg1;
- (_Bool)enableHalfRepostViewController;
- (void)moreAction_mergeSharingFunction:(id)arg1;
- (id)moreButtonPressedLogParams;
- (void)feedbackBtnPressed;
- (void)nextAction:(id)arg1;
- (void)previousAction:(id)arg1;
- (void)playAction:(id)arg1;
- (void)performSeekForward:(_Bool)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)hideVideoFeedbackBtn;
- (void)showFeedbackBtn:(id)arg1;
- (void)willShowVideoFeedbackBtn;
- (void)setPlayButtonHidden:(_Bool)arg1 aniamted:(_Bool)arg2;
- (_Bool)resolvePlayButtonHiddenState;
- (void)updateContentDisplay;
- (void)updateDisplay;
- (void)updateVolumeViewState;
- (void)updateProgressHudDisplay;
- (_Bool)trackingProgressSlider;
- (_Bool)switchingQuality;
- (void)setupGesture;
- (void)prepareForHidden;
- (void)prepareForDisplay;
- (void)layoutOrangeButtons:(id)arg1 contentInsets:(struct UIEdgeInsets)arg2;
- (void)layoutQualitySwitchingTips;
- (double)inlineGradientViewHeight;
- (void)layoutSubviews;
- (id)newFullScreenProgressBarPlugin;
- (id)newInlineProgressBarPlugin;
- (void)updateAppearenceForProgressBarPlugin:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)configurator_unconfigureForFullScreenWithConfigureResult:(id)arg1;
- (id)configurator_configureForFullScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

