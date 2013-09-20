/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIKeyboardOperationInsertTextAfterSelection : TIKeyboardOperation {
    NSString *_textInsertion;
}

@property(readonly) NSString * textInsertion;

+ (id)operationWithTextInsertion:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextInsertion:(id)arg1;
- (void)main;
- (id)propertiesForDescription;
- (id)textInsertion;

@end