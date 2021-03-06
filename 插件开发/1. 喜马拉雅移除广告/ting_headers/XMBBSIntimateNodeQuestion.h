//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMIntimateQuestion.h"

@class NSArray, NSString, XMBBSAuthorInfo;

@interface XMBBSIntimateNodeQuestion : XMMIntimateQuestion
{
    NSString *_contentDescription;
    unsigned long long _questionId;
    unsigned long long _authorUid;
    unsigned long long _communityId;
    NSArray *_invitedAnswerers;
    double _createdTime;
    long long _answerStatus;
    XMBBSAuthorInfo *_userInfo;
}

+ (id)xmm_modelCustomPropertyMapper;
@property(retain, nonatomic) XMBBSAuthorInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long answerStatus; // @synthesize answerStatus=_answerStatus;
@property(nonatomic) double createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) NSArray *invitedAnswerers; // @synthesize invitedAnswerers=_invitedAnswerers;
@property(nonatomic) unsigned long long communityId; // @synthesize communityId=_communityId;
@property(nonatomic) unsigned long long authorUid; // @synthesize authorUid=_authorUid;
@property(nonatomic) unsigned long long questionId; // @synthesize questionId=_questionId;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

