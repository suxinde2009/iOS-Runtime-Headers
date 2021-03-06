/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUICatalog : NSObject {
    unsigned int _storageRef;
}

+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3 deviceSubtype:(unsigned int)arg4 sizeClassHorizontal:(int)arg5 sizeClassVertical:(int)arg6;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3 deviceSubtype:(unsigned int)arg4;
+ (id)defaultUICatalog;
+ (id)defaultUICatalogForBundle:(id)arg1;
+ (id)systemUICatalog;

- (id)_baseKeyForName:(id)arg1;
- (BOOL)_doStyledQuartzDrawingInContext:(struct CGContext { }*)arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4 drawingHandler:(id)arg5;
- (id)_resolvedRenditionKeyForName:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3 deviceSubtype:(unsigned int)arg4 sizeClassHorizontal:(int)arg5 sizeClassVertical:(int)arg6 memoryClass:(unsigned int)arg7 graphicsClass:(unsigned int)arg8;
- (unsigned int)_themeRef;
- (id)_themeStore;
- (id)allImageNames;
- (int)artVariantIDOrZero;
- (int)blendModeForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (BOOL)canGetShapeEffectRenditionWithKey:(id)arg1;
- (void)clearCachedImageResources;
- (id)dataWithName:(id)arg1 deviceIdiom:(int)arg2 deviceSubtype:(unsigned int)arg3 memoryClass:(unsigned int)arg4 graphicsClass:(unsigned int)arg5;
- (id)dataWithName:(id)arg1;
- (id)debugDescription;
- (BOOL)drawGlyphs:(const unsigned short*)arg1 atPositions:(const struct CGPoint { float x1; float x2; }*)arg2 inContext:(struct CGContext { }*)arg3 withFont:(struct __CTFont { }*)arg4 count:(unsigned int)arg5 stylePresetName:(id)arg6 styleConfiguration:(id)arg7 foregroundColor:(struct CGColor { }*)arg8;
- (struct CGColor { }*)equivalentForegroundColorForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (BOOL)fillStyledPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (BOOL)fillStyledRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (BOOL)hasStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (BOOL)hasStylePresetWithName:(id)arg1;
- (id)imageByStylingImage:(struct CGImage { }*)arg1 stylePresetName:(id)arg2 styleConfiguration:(id)arg3 foregroundColor:(struct CGColor { }*)arg4 scale:(float)arg5;
- (id)imageWithName:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3 deviceSubtype:(unsigned int)arg4 sizeClassHorizontal:(int)arg5 sizeClassVertical:(int)arg6;
- (id)imageWithName:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3 deviceSubtype:(unsigned int)arg4;
- (id)imageWithName:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3;
- (id)imageWithName:(id)arg1 scaleFactor:(float)arg2;
- (id)imagesWithName:(id)arg1;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id*)arg3;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2;
- (id)newShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (id)newShapeEffectPresetWithRenditionKey:(id)arg1;
- (id)newShapeEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor { }*)arg3;
- (id)newTextEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor { }*)arg3;
- (struct CGPDFDocument { }*)pdfDocumentWithName:(id)arg1;
- (id)renditionKeyForShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (id)renditionKeyForShapeEffectPresetWithStyleID:(unsigned int)arg1 state:(int)arg2 presentationState:(int)arg3 value:(int)arg4 resolution:(unsigned int)arg5;
- (id)renditionKeyForShapeEffectPresetWithStylePresetName:(id)arg1 state:(int)arg2 presentationState:(int)arg3 value:(int)arg4 resolution:(unsigned int)arg5;
- (BOOL)requiredDrawOfUnstyledGlyphs:(const unsigned short*)arg1 atPositions:(const struct CGPoint { float x1; float x2; }*)arg2 inContext:(struct CGContext { }*)arg3 withFont:(struct __CTFont { }*)arg4 count:(unsigned int)arg5;
- (BOOL)strokeStyledPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (struct { float x1; float x2; float x3; float x4; })styledInsetsForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor { }*)arg3 scale:(float)arg4;

@end
