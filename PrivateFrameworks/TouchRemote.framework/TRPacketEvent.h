/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@class NSData, NSDictionary;

@interface TRPacketEvent : NSObject <NSSecureCoding> {
    unsigned int _packetEventType;
    NSDictionary *_payloadDictionary;
    unsigned int _version;
}

@property(readonly) NSData * networkRepresentation;
@property unsigned int packetEventType;
@property(readonly) NSDictionary * payloadDictionary;
@property(readonly) unsigned int version;

+ (Class)_packetClassForPacketEventType:(unsigned int)arg1;
+ (unsigned int)_packetEventType;
+ (unsigned long)networkRepresentationHeaderLength;
+ (id)packetWithNetworkRepresentation:(id)arg1;
+ (unsigned long)payloadSizeWithNetworkRepresentationHeader:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)_networkRepresentationForEventType:(unsigned int)arg1 version:(unsigned int)arg2 payloadDictionary:(id)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)networkRepresentation;
- (unsigned int)packetEventType;
- (id)payloadDictionary;
- (void)setPacketEventType:(unsigned int)arg1;
- (unsigned int)version;

@end
