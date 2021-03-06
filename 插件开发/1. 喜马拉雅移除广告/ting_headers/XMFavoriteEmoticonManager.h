//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabase, NSMutableArray, NSString;
@protocol XMFavoriteEmoticonManagerDelegate;

@interface XMFavoriteEmoticonManager : NSObject
{
    NSString *_currentDataBaseDirectory;
    NSMutableArray *_favoriteEmoticonArray;
    id <XMFavoriteEmoticonManagerDelegate> _delegate;
    NSString *_kFavTable;
    FMDatabase *_emojiDB;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FMDatabase *emojiDB; // @synthesize emojiDB=_emojiDB;
@property(retain, nonatomic) NSString *kFavTable; // @synthesize kFavTable=_kFavTable;
@property(retain, nonatomic) id <XMFavoriteEmoticonManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_createEmojiTableIfNeeds;
- (id)p_currentUserLocalFavoriteDataBaseDirectory;
- (id)loadDataFromDB;
- (_Bool)removeFavoriteEmoticon:(id)arg1;
- (_Bool)removeFavoriteEmoticonInList:(id)arg1;
- (_Bool)isExistFavoriteEmoticon:(id)arg1;
- (_Bool)addFavoriteEmoticon:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *favoriteEmoticonArray;
- (void)dealloc;
- (id)init;

@end

