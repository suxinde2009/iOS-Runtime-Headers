/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class AVURLAsset;

@interface CKMovieMediaObject : CKAVMediaObject {
    struct CGSize { 
        float width; 
        float height; 
    AVURLAsset *_asset;
    BOOL _checkedVideoInfo;
    BOOL _hasVideoTrack;
    } _pxSize;
}

@property(retain) AVURLAsset * asset;
@property BOOL checkedVideoInfo;
@property BOOL hasVideoTrack;
@property struct CGSize { float x1; float x2; } pxSize;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)attachmentSummary:(unsigned int)arg1;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;

- (id)asset;
- (struct CGSize { float x1; float x2; })bbSize;
- (BOOL)canBeAttachmentContiguous;
- (BOOL)canExport;
- (BOOL)checkedVideoInfo;
- (void)dealloc;
- (void)export:(id)arg1;
- (id)generateThumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (id)generateThumbnailForWidth:(float)arg1 orientation:(BOOL)arg2;
- (BOOL)hasNoVideoTrack;
- (BOOL)hasVideoTrack;
- (int)mediaType;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewForWidth:(float)arg1 orientation:(BOOL)arg2;
- (id)previewItemTitle;
- (struct CGSize { float x1; float x2; })pxSize;
- (void)setAsset:(id)arg1;
- (void)setCheckedVideoInfo:(BOOL)arg1;
- (void)setHasVideoTrack:(BOOL)arg1;
- (void)setPxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)updateVideoInfo;

@end
