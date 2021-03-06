/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKContainerID, NSObject<NSSecureCoding><NSCopying>;

@interface CKSharedItemID : NSObject <NSSecureCoding, NSCopying> {
    CKContainerID *_containerID;
    NSObject<NSSecureCoding><NSCopying> *_itemIdentifier;
    int _itemType;
    int _scope;
}

@property(copy) CKContainerID * containerID;
@property(copy) NSObject<NSSecureCoding><NSCopying> * itemIdentifier;
@property int itemType;
@property int scope;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKPropertiesDescription;
- (id)UIDocumentIdentifier;
- (id)_itemTypeDescription;
- (id)ckShortDescription;
- (id)commentIdentifier;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemType:(int)arg1 itemIdentifier:(id)arg2 containerID:(id)arg3;
- (id)initWithItemType:(int)arg1 itemIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)itemIdentifier;
- (int)itemType;
- (id)recordID;
- (int)scope;
- (void)setContainerID:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemType:(int)arg1;
- (void)setScope:(int)arg1;
- (id)shareID;
- (id)zoneID;

@end
