//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTAssetPreviewCell.h"

@class XMTPhotoPreviewView;

@interface XMTPhotoPreviewCell : XMTAssetPreviewCell
{
    _Bool _allowCrop;
    CDUnknownBlockType _imageProgressUpdateBlock;
    XMTPhotoPreviewView *_previewView;
    struct CGRect _cropRect;
}

@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) _Bool allowCrop; // @synthesize allowCrop=_allowCrop;
@property(retain, nonatomic) XMTPhotoPreviewView *previewView; // @synthesize previewView=_previewView;
@property(copy, nonatomic) CDUnknownBlockType imageProgressUpdateBlock; // @synthesize imageProgressUpdateBlock=_imageProgressUpdateBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)recoverSubviews;
- (void)setModel:(id)arg1;
- (void)configSubviews;

@end

