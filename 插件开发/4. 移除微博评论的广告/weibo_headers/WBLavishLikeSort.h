//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@interface WBLavishLikeSort : WBModelObject
{
    long long _item;
    long long _count;
    CDUnknownBlockType _numberDisplayStrategy;
}

@property(copy, nonatomic) CDUnknownBlockType numberDisplayStrategy; // @synthesize numberDisplayStrategy=_numberDisplayStrategy;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

