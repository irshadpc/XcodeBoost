//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEBreakpoint.h>

@class DVTTextDocumentLocation, NSString;

@interface IDEBreakpointLocation : IDEBreakpoint
{
    NSString *_urlString;
    NSString *_timestampString;
    long long _startingColumnNumber;
    long long _endingColumnNumber;
    long long _startingLineNumber;
    long long _endingLineNumber;
    NSString *_characterRangeString;
    IDEBreakpoint *_parentBreakpoint;
    DVTTextDocumentLocation *_documentLocation;
    NSString *_symbolName;
    NSString *_moduleName;
    unsigned long long _address;
    unsigned long long _offsetFromSymbolStart;
}

@property unsigned long long offsetFromSymbolStart; // @synthesize offsetFromSymbolStart=_offsetFromSymbolStart;
@property(readonly) unsigned long long address; // @synthesize address=_address;
@property(readonly) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(readonly) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly) DVTTextDocumentLocation *documentLocation; // @synthesize documentLocation=_documentLocation;
@property(retain) IDEBreakpoint *parentBreakpoint; // @synthesize parentBreakpoint=_parentBreakpoint;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (BOOL)_isTextDocumentLocationEqual:(id)arg1;
- (BOOL)isBreakpointLocationTheSameDisregardingAddress:(id)arg1;
- (id)mutableLocations;
- (id)locations;
@property(readonly) DVTTextDocumentLocation *zeroBasedDocumentLocation;
- (id)displayName;
- (id)initWithDocumentTextLocation:(id)arg1 symbolName:(id)arg2 moduleName:(id)arg3 address:(unsigned long long)arg4;

@end
