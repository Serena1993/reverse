//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, XMLiveRoomApproachInfo, XMWebImageButton, YYLabel;

@interface XMCategoryRecLiveItem : UICollectionViewCell
{
    UILabel *_nameLabel;
    YYLabel *_statusLabel;
    UIImageView *_recReasonBg;
    XMWebImageButton *_coverImage;
    XMLiveRoomApproachInfo *_item;
    YYLabel *_categoryLabel;
    UILabel *_recReasonLabel;
    UIImageView *_playView;
    UIView *_backView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIImageView *playView; // @synthesize playView=_playView;
@property(retain, nonatomic) UILabel *recReasonLabel; // @synthesize recReasonLabel=_recReasonLabel;
@property(retain, nonatomic) YYLabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(retain, nonatomic) XMLiveRoomApproachInfo *item; // @synthesize item=_item;
@property(retain, nonatomic) XMWebImageButton *coverImage; // @synthesize coverImage=_coverImage;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

