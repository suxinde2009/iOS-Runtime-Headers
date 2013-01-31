/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum  {
}

@property(retain) NSString * personID;

+ (id)keyPathsForValuesAffectingPersonID;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(BOOL)arg3;
+ (id)entityName;

- (void)_updateKeyAssetIfNeeded;
- (void)setPersonID:(id)arg1;
- (void)enforceImageLimitIfNecessary;
- (void)addAssetOrderedByDataTaken:(id)arg1;
- (id)personID;
- (BOOL)isOwnPhotoStreamAlbum;
- (BOOL)shouldDeleteWhenEmpty;
- (void)awakeFromInsert;

@end