/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface ATDeviceSyncManager : NSObject <ATMessageLinkObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_syncClientHandlers;
    BOOL _syncPending;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property BOOL syncPending;

+ (id)deviceSyncManager;

- (void).cxx_destruct;
- (void)cancelSyncOnMessageLink:(id)arg1;
- (id)init;
- (void)initiateSyncForLibrary:(id)arg1 onMessageLink:(id)arg2;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (void)setSyncPending:(BOOL)arg1;
- (BOOL)syncPending;

@end
