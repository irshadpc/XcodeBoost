//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDESourceControlWorkingTree.h"

#import "IDENavigableItemRepresentation.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSNumber, NSString;

@interface IDESourceControlWorkingTree (IDESourceControlWorkingTreePropertyAdditions) <IDENavigableItemRepresentation>
+ (id)keyPathsForValuesAffectingProgress;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(readonly) NSNumber *progress;
@property(readonly) NSString *navigableItem_lastModifiedDate;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;

// Remaining properties
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@end
