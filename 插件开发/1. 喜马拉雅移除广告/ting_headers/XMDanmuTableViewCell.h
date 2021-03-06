//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView, XMDanmuItem, YYLabel;
@protocol XMDanmuTableViewDelegate;

@interface XMDanmuTableViewCell : UITableViewCell
{
    _Bool _isLandscape;
    _Bool _isSelected;
    UILabel *_timeLabel;
    YYLabel *_contentLabel;
    UIButton *_reportButton;
    UIButton *_likeButton;
    UILabel *_likesLabel;
    XMDanmuItem *_item;
    id <XMDanmuTableViewDelegate> _delegate;
    UIView *_topLine;
    UIView *_bottomLine;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) __weak id <XMDanmuTableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMDanmuItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *likesLabel; // @synthesize likesLabel=_likesLabel;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)p_likeButton:(id)arg1;
- (void)p_reportButton:(id)arg1;
- (void)requestLike:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

