//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, XMWebImageView, YYLabel;

@interface XMLiveNobleEntryRoomNotice : UIView
{
    XMWebImageView *_icon;
    YYLabel *_entryLabel;
    CAGradientLayer *_bgLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *bgLayer; // @synthesize bgLayer=_bgLayer;
@property(retain, nonatomic) YYLabel *entryLabel; // @synthesize entryLabel=_entryLabel;
@property(retain, nonatomic) XMWebImageView *icon; // @synthesize icon=_icon;
- (void)showEntryMessage:(id)arg1 templateId:(long long)arg2;
- (void)addLayoutMasonry;
- (void)addCustomedSubview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

