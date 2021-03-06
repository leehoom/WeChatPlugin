//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

#import "MMKeyValueRowViewDelegate.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MMKeyValueScrollView : NSScrollView <MMKeyValueRowViewDelegate>
{
    double _topPadding;
    NSMutableArray *_rows;
    double _totalHeight;
}

@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(retain, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
- (void).cxx_destruct;
- (void)keyValueRowViewContentsChangedHeight:(id)arg1;
- (void)relayout;
- (void)addRowView:(id)arg1;
- (void)removeAllRows;
@property(readonly, nonatomic) double usedHeight;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

