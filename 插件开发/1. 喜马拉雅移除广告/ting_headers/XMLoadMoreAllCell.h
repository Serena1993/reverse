//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface XMLoadMoreAllCell : XMTableViewCell
{
    UILabel *_loadMoreTabel;
    UIImageView *_arrowImageView;
    UIView *_line;
    _Bool _showTopLine;
    _Bool _showTopCenterLine;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
+ (double)height;
@property(nonatomic) _Bool showTopCenterLine; // @synthesize showTopCenterLine=_showTopCenterLine;
@property(nonatomic) _Bool showTopLine; // @synthesize showTopLine=_showTopLine;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)setAllTitle:(id)arg1;
- (void)layoutSubviews;
- (void)customInit;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

