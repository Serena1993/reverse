//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseView.h"

@class NSArray, NSDictionary, NSMutableArray, UIView;

@interface XMMCreateMorePaneView : XMMBaseView
{
    NSDictionary *_actionInfoDictionary;
    CDUnknownBlockType _selectBlcok;
    NSArray *_actionArray;
    UIView *_separatorLine;
    NSMutableArray *_buttonArray;
    double _lineInvterval;
    long long _columnCount;
    struct CGSize _buttonSize;
}

@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) double lineInvterval; // @synthesize lineInvterval=_lineInvterval;
@property(nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) NSArray *actionArray; // @synthesize actionArray=_actionArray;
@property(copy, nonatomic) CDUnknownBlockType selectBlcok; // @synthesize selectBlcok=_selectBlcok;
- (void).cxx_destruct;
- (void)createButtonWithCount:(long long)arg1;
- (void)layoutSubviewsWithSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)clickButton:(id)arg1;
- (void)didInitialize;

@end

