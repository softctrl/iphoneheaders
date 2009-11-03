/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSFileHandle, NSString, NSMutableArray;

@interface ASParseContext : NSObject {
	NSMutableArray* _dataBuffers;
	unsigned _offsetIntoFirstData;
	long long _curOffset;
	int _codePage;
	NSString* _parseErrorReason;
	BOOL _moreDataExpected;
	int _dataGeneration;
	long long _expectedTotalBytesCount;
	long long _currentBytesReceivedCount;
	unsigned _lastFoundBufferWithoutLineEnding;
	unsigned _numTokensInBuffersWithoutLineEndings;
	BOOL _lastLookedAtBufferHadStringEndPrefix;
	NSFileHandle* _logFileHandle;
	NSString* _logFilePath;
	int _streamingState;
}
@property(assign, nonatomic) int streamingState;
// inherited: -(id)init;
-(void)setShouldLog:(BOOL)log;
-(void)_moveLogFileContents;
// inherited: -(void)dealloc;
-(BOOL)hasNumberOfTokensRemaining:(unsigned)tokensRemaining;
-(int)numberOfBytesUntilStringEnd:(char*)bytesUntilStringEnd searchStringLength:(int)length acceptingBufferBits:(BOOL)bits;
-(long)goodSizeForBuffer;
-(id)bufferWithAllData;
-(char*)bufferForLength:(unsigned)length shouldFree:(BOOL*)free;
-(BOOL)advanceOffsetByAmount:(unsigned)amount retainLastToken:(BOOL)token;
-(BOOL)advanceOffsetByAmount:(unsigned)amount;
-(void)_logBlobChunk:(id)chunk;
-(void)addData:(id)data;
-(unsigned char)currentByte;
-(unsigned char)byteAtOffsetFromCurrentByte:(unsigned)currentByte;
-(unsigned char)nextByte;
-(int)numTokensForNextString;
-(int)numTokensStreamableForNextStringSizeOfTerminator:(int*)terminator;
-(void)invalidateBuffers;
-(long long)curOffset;
-(int)codePage;
-(void)setCodePage:(int)page;
-(id)parseErrorReason;
-(void)setParseErrorReason:(id)reason;
-(BOOL)moreDataExpected;
-(void)setMoreDataExpected:(BOOL)expected;
-(int)dataGeneration;
-(void)setDataGeneration:(int)generation;
-(long long)expectedTotalBytesCount;
-(void)setExpectedTotalByteCount:(long long)count;
-(long long)currentBytesReceivedCount;
@end

