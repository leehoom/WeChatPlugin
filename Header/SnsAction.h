//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SnsAction : PBGeneratedMessage
{
    unsigned int hasFromUsername:1;
    unsigned int hasToUsername:1;
    unsigned int hasFromNickname:1;
    unsigned int hasToNickname:1;
    unsigned int hasType:1;
    unsigned int hasSource:1;
    unsigned int hasCreateTime:1;
    unsigned int hasContent:1;
    unsigned int hasReplyCommentId:1;
    unsigned int hasCommentId:1;
    unsigned int hasIsNotRichText:1;
    unsigned int hasReplyCommentId2:1;
    unsigned int hasCommentId2:1;
    unsigned int type;
    unsigned int source;
    unsigned int createTime;
    int replyCommentId;
    int commentId;
    unsigned int isNotRichText;
    NSString *fromUsername;
    NSString *toUsername;
    NSString *fromNickname;
    NSString *toNickname;
    NSString *content;
    unsigned long long replyCommentId2;
    unsigned long long commentId2;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetCommentId2:) unsigned long long commentId2; // @synthesize commentId2;
@property(readonly, nonatomic) BOOL hasCommentId2; // @synthesize hasCommentId2;
@property(nonatomic, setter=SetReplyCommentId2:) unsigned long long replyCommentId2; // @synthesize replyCommentId2;
@property(readonly, nonatomic) BOOL hasReplyCommentId2; // @synthesize hasReplyCommentId2;
@property(nonatomic, setter=SetIsNotRichText:) unsigned int isNotRichText; // @synthesize isNotRichText;
@property(readonly, nonatomic) BOOL hasIsNotRichText; // @synthesize hasIsNotRichText;
@property(nonatomic, setter=SetCommentId:) int commentId; // @synthesize commentId;
@property(readonly, nonatomic) BOOL hasCommentId; // @synthesize hasCommentId;
@property(nonatomic, setter=SetReplyCommentId:) int replyCommentId; // @synthesize replyCommentId;
@property(readonly, nonatomic) BOOL hasReplyCommentId; // @synthesize hasReplyCommentId;
@property(retain, nonatomic, setter=SetContent:) NSString *content; // @synthesize content;
@property(readonly, nonatomic) BOOL hasContent; // @synthesize hasContent;
@property(nonatomic, setter=SetCreateTime:) unsigned int createTime; // @synthesize createTime;
@property(readonly, nonatomic) BOOL hasCreateTime; // @synthesize hasCreateTime;
@property(nonatomic, setter=SetSource:) unsigned int source; // @synthesize source;
@property(readonly, nonatomic) BOOL hasSource; // @synthesize hasSource;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetToNickname:) NSString *toNickname; // @synthesize toNickname;
@property(readonly, nonatomic) BOOL hasToNickname; // @synthesize hasToNickname;
@property(retain, nonatomic, setter=SetFromNickname:) NSString *fromNickname; // @synthesize fromNickname;
@property(readonly, nonatomic) BOOL hasFromNickname; // @synthesize hasFromNickname;
@property(retain, nonatomic, setter=SetToUsername:) NSString *toUsername; // @synthesize toUsername;
@property(readonly, nonatomic) BOOL hasToUsername; // @synthesize hasToUsername;
@property(retain, nonatomic, setter=SetFromUsername:) NSString *fromUsername; // @synthesize fromUsername;
@property(readonly, nonatomic) BOOL hasFromUsername; // @synthesize hasFromUsername;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

