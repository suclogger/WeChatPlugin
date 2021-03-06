//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MessageSender.h"

#import "MMCGIDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EmoticonMessageSender : MessageSender <MMCGIDelegate>
{
    BOOL _isFirstPack;
    unsigned int _startPos;
    unsigned int _totalLen;
}

@property(nonatomic) unsigned int totalLen; // @synthesize totalLen=_totalLen;
@property(nonatomic) unsigned int startPos; // @synthesize startPos=_startPos;
@property(nonatomic) BOOL isFirstPack; // @synthesize isFirstPack=_isFirstPack;
- (void)onFailed;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)dealloc;
- (void)startSending;
- (id)getClientIDWithFromUsrName:(id)arg1 localID:(unsigned int)arg2 time:(unsigned int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

