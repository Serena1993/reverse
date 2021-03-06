//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FLAnimatedImageView, UIButton, UIColor, UIFont, XMNewAlbumVideoModel, XMWebImageView, YYLabel;

@interface XMComicVideoSelectCollectionCell : UICollectionViewCell
{
    UIFont *_titleFont;
    UIColor *_titleColor;
    UIColor *_borderColor;
    double _borderWidth;
    double _baseWidth;
    XMNewAlbumVideoModel *_soundItem;
    YYLabel *_nameLabel;
    YYLabel *_indexLabel;
    XMWebImageView *_paymentTagImage;
    UIButton *_playButton;
    FLAnimatedImageView *_playAnimationView;
}

@property(retain, nonatomic) FLAnimatedImageView *playAnimationView; // @synthesize playAnimationView=_playAnimationView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) XMWebImageView *paymentTagImage; // @synthesize paymentTagImage=_paymentTagImage;
@property(retain, nonatomic) YYLabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(retain, nonatomic) YYLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMNewAlbumVideoModel *soundItem; // @synthesize soundItem=_soundItem;
@property(nonatomic) double baseWidth; // @synthesize baseWidth=_baseWidth;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void).cxx_destruct;
- (void)playViewHidden:(_Bool)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

