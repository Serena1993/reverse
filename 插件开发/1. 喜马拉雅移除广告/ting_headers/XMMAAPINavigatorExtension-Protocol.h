//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XMMiniAppViewController;

@protocol XMMAAPINavigatorExtension <NSObject>
- (void)navigateTo:(NSString *)arg1 from:(XMMiniAppViewController *)arg2 result:(void (^)(_Bool, NSDictionary *))arg3;
- (_Bool)canHandleURL:(NSString *)arg1;
@end

