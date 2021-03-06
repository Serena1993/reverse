//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "AppsFlyerTrackerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "XMAPMDataReportDelegate-Protocol.h"
#import "XMCipherDelegate-Protocol.h"
#import "XMFingerPrintManagerDelegate-Protocol.h"
#import "XMImageCacheDelegate-Protocol.h"
#import "XMSiriHostDelegate-Protocol.h"
#import "XMUBTrackerDataConfigDelegate-Protocol.h"
#import "XMXlogDataDelegate-Protocol.h"

@class AVAudioPlayer, NSData, NSDictionary, NSString, NSURL, UINavigationController, UIWindow, XMASynEvent, XMImageCache, XMLaunchView, XMMainTabBarController;

@interface XMAppDelegate : UIResponder <XMSiriHostDelegate, XMCipherDelegate, XMXlogDataDelegate, AppsFlyerTrackerDelegate, XMFingerPrintManagerDelegate, XMUBTrackerDataConfigDelegate, UIApplicationDelegate, UIAlertViewDelegate, AVAudioPlayerDelegate, XMImageCacheDelegate, XMAPMDataReportDelegate>
{
    _Bool isFirstLaunch;
    long long appStatus;
    _Bool _isShowingLaunchAd;
    UIWindow *window;
    UINavigationController *navigationController;
    XMMainTabBarController *tabBarController;
    NSURL *updateUrl;
    AVAudioPlayer *audioPlayer;
    XMImageCache *imageCache;
    double enterBgMoment;
    XMLaunchView *_currentLaunchView;
    NSDictionary *_launchOptions;
    unsigned long long _orientationSupport;
    CDUnknownBlockType _orientationSupportBlock;
    NSData *_deviceToken;
    NSDictionary *_updateData;
    NSDictionary *_activityNotificationDic;
    XMASynEvent *_mainTabInitASynEvent;
}

@property(retain, nonatomic) XMASynEvent *mainTabInitASynEvent; // @synthesize mainTabInitASynEvent=_mainTabInitASynEvent;
@property(retain, nonatomic) NSDictionary *activityNotificationDic; // @synthesize activityNotificationDic=_activityNotificationDic;
@property(retain, nonatomic) NSDictionary *updateData; // @synthesize updateData=_updateData;
@property(retain, nonatomic) NSData *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(copy, nonatomic) CDUnknownBlockType orientationSupportBlock; // @synthesize orientationSupportBlock=_orientationSupportBlock;
@property(nonatomic) unsigned long long orientationSupport; // @synthesize orientationSupport=_orientationSupport;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(nonatomic) _Bool isShowingLaunchAd; // @synthesize isShowingLaunchAd=_isShowingLaunchAd;
@property(nonatomic) __weak XMLaunchView *currentLaunchView; // @synthesize currentLaunchView=_currentLaunchView;
@property(nonatomic) double enterBgMoment; // @synthesize enterBgMoment;
@property(retain, nonatomic) XMImageCache *imageCache; // @synthesize imageCache;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer;
@property(retain, nonatomic) NSURL *updateUrl; // @synthesize updateUrl;
@property(retain, nonatomic) XMMainTabBarController *tabBarController; // @synthesize tabBarController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
- (void).cxx_destruct;
- (_Bool)dumpLog;
- (_Bool)onlineDebug;
- (id)networkMode;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)updateMPNowPlayingInfoCenterImageForLive;
- (void)updateMPNowPlayingInfoCenterImage;
- (_Bool)processOpenFromURL:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showUpdateAlertWithURL:(id)arg1 message:(id)arg2 force:(_Bool)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)showAppLauchAd:(id)arg1 withLaunchOptions:(id)arg2;
- (void)initMainTabWithLaunchOptions:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)startInfinitePlay;
- (void)applicationWillResignActive:(id)arg1;
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)entryMainAppTab:(id)arg1;
- (void)entryMainAppCarLifeInit;
- (void)entryMainAppThirdPartyInit;
- (void)entryMainAppOtherInit;
- (void)entryMainAppTabInit:(id)arg1 withLaunchOptions:(id)arg2;
- (void)startMainAppDataBackgroundWithLaunchOptions:(id)arg1;
- (void)entryMainAppInit:(id)arg1 withLaunchOptions:(id)arg2 withLaunchAdView:(id)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)reloadApplication:(id)arg1;
- (void)dealloc;
- (void)resumePlayer;
- (void)clearResource;
- (void)setupImageCacheSize;
- (void)showPrivacyAuthorization;
- (void)relaunchFromPrivacy;
- (void)setPrivacyAuthorization:(_Bool)arg1;
- (_Bool)needPrivacyAuthorization;
- (id)privacyAuthorizationFile;
- (id)privacyAuthorizationPath;
- (id)redirectRequest:(id)arg1 orginURL:(id)arg2;
- (void)xmn_httpRequest:(id)arg1 didFinishLoadWithError:(id)arg2;
- (id)xmn_httpRequest:(id)arg1 withChangeUrl:(id)arg2;
- (_Bool)xmn_httpRequestNeedReTry:(id)arg1;
- (void)xmn_httpRequest:(id)arg1 dealWithServerAlert:(id)arg2;
- (void)xmn_httpRequest:(id)arg1 dealWithErrorHint:(id)arg2;
- (void)xmn_httpRequest:(id)arg1 dealWithRetError:(long long)arg2;
- (id)xmn_encrypCommonParam;
- (id)xmn_httpRequestHeaderField;
- (unsigned long long)xmn_httpRequestEnvironment;
- (void)p_favAlbum:(id)arg1;
- (void)p_addToPlayList:(id)arg1;
- (void)p_playAlbums:(id)arg1;
- (void)p_playTracks:(id)arg1;
- (void)handleSiriKitWithUserActivity:(id)arg1;
- (void)host:(id)arg1 mediaType:(long long)arg2 handlePersons:(id)arg3;
- (void)playNeedBuy;
- (void)playFailure;
- (void)playSuccess;
- (void)p_addNotification;
- (void)host:(id)arg1 mediaType:(long long)arg2 handleAlbums:(id)arg3;
- (void)host:(id)arg1 mediaType:(long long)arg2 handleTracks:(id)arg3;
- (void)application:(id)arg1 handleIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)xmp_xLogInfo:(id)arg1;
- (void)xmp_iapStorePayment:(id)arg1;
- (void)xmp_xdcsDataTrackModule:(id)arg1 withDict:(id)arg2;
- (id)xmp_userDirector;
- (void)timeToUploadDynamicInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)timeToUploadStaticInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)onSlSignatureError:(id)arg1;
- (void)didFailedFetchDataConfig:(id)arg1;
- (void)didFailedParseConfig:(id)arg1;
- (void)didFailedRequestConfig:(id)arg1;
- (void)onConversionDataReceived:(id)arg1;
- (void)queryFreeFlowInfo;
- (id)updateAdditionalParams;
- (void)signRC6SignatureFailedWithReason:(id)arg1;
- (void)signUniKeySignatureFailedWithReason:(id)arg1;
- (void)initKeyDidFailedWithCode:(int)arg1;
- (_Bool)debugWithConfiguration:(id)arg1;
- (void)onReportXLog:(_Bool)arg1;
- (void)onReportXlog:(id)arg1 module:(id)arg2 content:(id)arg3;
- (void)onReportDLog:(id)arg1 module:(id)arg2 message:(id)arg3;
- (void)onReportLLog:(id)arg1 module:(id)arg2 content:(id)arg3;
- (void)onReportIssue:(id)arg1 issueId:(long long)arg2 content:(id)arg3;
- (void)hideLaunchAdWithURL:(id)arg1;
- (void)onFakeClickOpenScreenAd:(id)arg1;
- (id)getAndPreLoadLaunchViewData;
- (void)showPreviewLaunchAd;
- (void)showActiveLaunchAd;
- (void)showLaunchAdView:(id)arg1 withShow:(CDUnknownBlockType)arg2 withDone:(CDUnknownBlockType)arg3;
- (void)openAppFromURL:(id)arg1;
- (void)openAppFromRemoteNotification:(id)arg1;
- (void)openAppFromLocalNotification:(id)arg1;
- (void)openAppFromLaunchOptions:(id)arg1;
- (void)checkAppMessageBadgeNotification;
- (void)handleTasksAfterLaunchAd;
- (void)handleLaunchOptions:(id)arg1;
- (void)initializeSettgins;
- (void)onVersionChangedFrom:(id)arg1 to:(id)arg2;
- (void)handleVersionUpgrade;
- (void)onCurrentTrackSampleFinish:(id)arg1;
- (_Bool)showLimitedAlbumExpiredReminder;
- (_Bool)playSubsidySoundPatch;
- (_Bool)playVipRenewalSound;
- (_Bool)playSoundPatch;
- (void)onCurrentTrackEnd;
- (id)imageOfView:(id)arg1;
- (void)onTakeScreenshot:(id)arg1;
- (void)wakeUpRemoteSetting:(id)arg1;
- (void)initNotifications;
- (void)registerSDKs;
- (void)getRomoteConfigs;
- (void)initOnlineTools;
- (void)initNetworkConfig;
- (void)stopMonitor;
- (void)startMonitor;
- (void)didGetMemCheckException:(id)arg1;
- (void)initDebugTools;
- (void)initRemoteCommond;
- (void)handlePropertyListener:(unsigned int)arg1 dataSize:(unsigned int)arg2 data:(const void *)arg3;
- (void)handleInterruptionChangeToState:(unsigned int)arg1;
- (void)initAudioSession;
- (void)setApplicationStatusBar;
- (void)initAppearance;
- (void)initFingerPrint;
- (void)initXLog;
- (void)initFireworks;
- (void)initXMUBT;
- (void)initAppsFlyer;
- (void)initAPM;
- (void)initXMUnifiedURLRouter;
- (void)setupLaunchModule;
- (id)xmh_customComponentHost;
- (void)xmh_componentDownloadInfo:(id)arg1;
- (void)xmh_requestFinish:(id)arg1 success:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

