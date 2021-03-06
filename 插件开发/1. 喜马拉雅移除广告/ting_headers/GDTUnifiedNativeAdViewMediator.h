//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdContentViewCheckerDelegate-Protocol.h"
#import "GDTUnifiedNativeAdDataObjectConnectorProtocol-Protocol.h"
#import "GDTUnifiedNativeAdViewImpProtocol-Protocol.h"

@class GDTAdViewExposeRuleChecker, GDTLogoView, GDTUnifiedNativeAdDataObject, GDTUnifiedNativeAdView, NSString, UIView;
@protocol GDTMediaViewConnectorProtocol, GDTUnifiedNativeAdViewDelegate;

@interface GDTUnifiedNativeAdViewMediator : NSObject <GDTAdContentViewCheckerDelegate, GDTUnifiedNativeAdViewImpProtocol, GDTUnifiedNativeAdDataObjectConnectorProtocol>
{
    id <GDTUnifiedNativeAdViewDelegate> delegate;
    GDTUnifiedNativeAdView *unifiedNativeAdView;
    GDTUnifiedNativeAdDataObject *_dataObject;
    GDTAdViewExposeRuleChecker *_checker;
}

@property(retain, nonatomic) GDTAdViewExposeRuleChecker *checker; // @synthesize checker=_checker;
@property(retain, nonatomic) GDTUnifiedNativeAdDataObject *dataObject; // @synthesize dataObject=_dataObject;
@property(nonatomic) __weak GDTUnifiedNativeAdView *unifiedNativeAdView; // @synthesize unifiedNativeAdView;
@property(nonatomic) __weak id <GDTUnifiedNativeAdViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)relatedDataObject;
- (void)adapter_unifiedNativeAdViewApplicationWillEnterBackground:(id)arg1;
- (void)adapter_unifiedNativeAdDetailViewClosed:(id)arg1;
- (void)adapter_unifiedNativeAdDetailViewWillPresentScreen:(id)arg1;
- (void)adapter_unifiedNativeAdView:(id)arg1 playerStatusChanged:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)adapter_unifiedNativeAdViewDidClick:(id)arg1;
- (void)adapter_unifiedNativeAdViewWillExpose:(id)arg1;
@property(readonly, nonatomic) GDTLogoView *logoView;
@property(readonly, nonatomic) UIView<GDTMediaViewConnectorProtocol> *mediaView;
- (void)adContentViewCheckerContentViewDidBecomeActive;
- (void)adContentViewCheckerViewWillResignActive;
- (void)adContentViewCheckerContentViewDidDisappear;
- (void)adContentViewCheckerContentViewDidAppear;
- (void)recordEventWithId:(long long)arg1;
- (void)sendExposureToAdapterIfNeeds;
- (void)addExposureCheckerIfNeeds;
- (void)registerClickableCallToActionView:(id)arg1;
- (void)udpateRootViewController;
- (void)unregisterDataObject;
- (void)registerDataObject:(id)arg1 clickableViews:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

