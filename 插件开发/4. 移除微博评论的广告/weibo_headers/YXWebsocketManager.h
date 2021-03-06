//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YXWebSocketServiceAuthenticationCallback-Protocol.h"
#import "YXWebSocketServiceStatusDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSURL, YXTimeoutHandler, YXWebsocketOvertimeHander;
@protocol YXWebsocketManagerTokenFetcher;

@interface YXWebsocketManager : NSObject <YXWebSocketServiceAuthenticationCallback, YXWebSocketServiceStatusDelegate>
{
    NSURL *_websocketURL;
    id <YXWebsocketManagerTokenFetcher> _tokenFetcher;
    long long _reconnectCount;
    NSString *_currentScid;
    YXTimeoutHandler *_timeHandler;
    NSMutableArray *_tempLinkServers;
    NSArray *_linkServers;
    long long _retryInterSec;
    long long _retryTimes;
    YXWebsocketOvertimeHander *_overtimeHandler;
}

+ (id)sharedInstance;
@property(retain, nonatomic) YXWebsocketOvertimeHander *overtimeHandler; // @synthesize overtimeHandler=_overtimeHandler;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) long long retryInterSec; // @synthesize retryInterSec=_retryInterSec;
@property(retain, nonatomic) NSArray *linkServers; // @synthesize linkServers=_linkServers;
@property(retain, nonatomic) NSMutableArray *tempLinkServers; // @synthesize tempLinkServers=_tempLinkServers;
@property(retain, nonatomic) YXTimeoutHandler *timeHandler; // @synthesize timeHandler=_timeHandler;
@property(copy, nonatomic) NSString *currentScid; // @synthesize currentScid=_currentScid;
@property(nonatomic) long long reconnectCount; // @synthesize reconnectCount=_reconnectCount;
@property(nonatomic) __weak id <YXWebsocketManagerTokenFetcher> tokenFetcher; // @synthesize tokenFetcher=_tokenFetcher;
@property(retain, nonatomic) NSURL *websocketURL; // @synthesize websocketURL=_websocketURL;
- (void).cxx_destruct;
- (void)reconnectWebsocket;
- (void)stopAuthenticatedTimeout;
- (void)startAuthenticatedTimeout:(long long)arg1;
- (void)reconnect;
- (void)websocketDidAuthenticatedUnsuccessfully;
- (void)websocketDidAuthenticatedSuccessfully:(id)arg1;
- (void)websocketDidOpen:(id)arg1;
- (void)webSocketServiceStatusFailed;
- (void)websocketStatusChanged:(unsigned long long)arg1;
- (void)websocketServiceOpenscid:(id)arg1 websocketURL:(id)arg2 isAnchor:(id)arg3 token:(id)arg4;
- (id)getwebsocketURLWithlinkServers:(id)arg1;
- (void)connect:(id)arg1 isAnchor:(id)arg2;
- (_Bool)isLoginRoomSuccess;
- (void)overTimeLeaveRoom;
- (void)overTimeGoInRoom;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

