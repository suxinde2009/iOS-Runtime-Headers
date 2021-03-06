/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class AXHATimer, AXHearingAidMode, CBPeripheral, NSArray, NSDate, NSMutableDictionary, NSString;

@interface AXHearingAidDevice : NSObject <CBPeripheralDelegate, AXHADeviceProtocol> {
    int _availableEars;
    BOOL _finishedLoading;
    BOOL _isListeningForStreamingChanges;
    BOOL _keepInSync;
    NSDate *_leftBatteryLowDate;
    float _leftMicrophoneVolume;
    unsigned long _leftPresetBitmask;
    float _leftStreamVolume;
    float _leftVolume;
    int _leftWriteResponseProperties;
    AXHATimer *_propertyWriteTimer;
    NSDate *_rightBatteryLowDate;
    float _rightMicrophoneVolume;
    unsigned long _rightPresetBitmask;
    float _rightStreamVolume;
    float _rightVolume;
    int _rightWriteResponseProperties;
    AXHearingAidMode *currentLeftProgram;
    AXHearingAidMode *currentRightProgram;
    long initialLoadToken;
    BOOL isConnecting;
    BOOL isPaired;
    BOOL isPersistent;
    float leftBatteryLevel;
    NSString *leftFirmwareVersion;
    NSString *leftHardwareVersion;
    int leftLoadedProperties;
    CBPeripheral *leftPeripheral;
    NSString *leftPeripheralUUID;
    int leftProgramVersion;
    NSArray *leftPrograms;
    NSMutableDictionary *leftPropertiesLoadCount;
    NSString *leftUUID;
    int leftWriteRequestProperties;
    NSString *manufacturer;
    NSString *model;
    NSString *name;
    float rightBatteryLevel;
    NSString *rightFirmwareVersion;
    NSString *rightHardwareVersion;
    int rightLoadedProperties;
    CBPeripheral *rightPeripheral;
    NSString *rightPeripheralUUID;
    int rightProgramVersion;
    NSArray *rightPrograms;
    NSMutableDictionary *rightPropertiesLoadCount;
    NSString *rightUUID;
    int rightWriteRequestProperties;
}

@property int availableEars;
@property(retain) AXHearingAidMode * currentLeftProgram;
@property(retain) AXHearingAidMode * currentRightProgram;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSString * deviceUUID;
@property(readonly) unsigned int hash;
@property BOOL isConnecting;
@property BOOL isPaired;
@property BOOL isPersistent;
@property BOOL keepInSync;
@property float leftBatteryLevel;
@property(retain) NSDate * leftBatteryLowDate;
@property(retain) NSString * leftFirmwareVersion;
@property(retain) NSString * leftHardwareVersion;
@property int leftLoadedProperties;
@property float leftMicrophoneVolume;
@property(retain) CBPeripheral * leftPeripheral;
@property(retain) NSString * leftPeripheralUUID;
@property unsigned long leftPresetBitmask;
@property int leftProgramVersion;
@property(copy) NSArray * leftPrograms;
@property(retain) NSMutableDictionary * leftPropertiesLoadCount;
@property(retain,readonly) AXHearingAidMode * leftSelectedProgram;
@property float leftStreamVolume;
@property(retain) NSString * leftUUID;
@property int leftWriteRequestProperties;
@property int leftWriteResponseProperties;
@property(retain) NSString * manufacturer;
@property(retain) NSString * model;
@property(retain) NSString * name;
@property float rightBatteryLevel;
@property(retain) NSDate * rightBatteryLowDate;
@property(retain) NSString * rightFirmwareVersion;
@property(retain) NSString * rightHardwareVersion;
@property int rightLoadedProperties;
@property float rightMicrophoneVolume;
@property(retain) CBPeripheral * rightPeripheral;
@property(retain) NSString * rightPeripheralUUID;
@property unsigned long rightPresetBitmask;
@property int rightProgramVersion;
@property(copy) NSArray * rightPrograms;
@property(retain) NSMutableDictionary * rightPropertiesLoadCount;
@property(retain,readonly) AXHearingAidMode * rightSelectedProgram;
@property float rightStreamVolume;
@property(retain) NSString * rightUUID;
@property int rightWriteRequestProperties;
@property int rightWriteResponseProperties;
@property(readonly) Class superclass;

+ (id)characteristicsUUIDs;

- (void)_init;
- (void)_sendDelayedWrites;
- (BOOL)addPeripheral:(id)arg1;
- (int)availableEars;
- (void)connect;
- (int)connectedEars;
- (void)connectionDidChange;
- (BOOL)containsPeripheralWithUUID:(id)arg1;
- (id)currentLeftProgram;
- (id)currentRightProgram;
- (void)dealloc;
- (void)delayWriteProperty:(int)arg1 forPeripheral:(id)arg2;
- (id)description;
- (id)deviceDescription;
- (id)deviceUUID;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadRequiredProperties;
- (void)disconnect;
- (BOOL)hasConnection;
- (id)initWithLeftDevice:(id)arg1 andRightDevice:(id)arg2;
- (id)initWithPeripheral:(id)arg1;
- (id)initWithPersistentRepresentation:(id)arg1;
- (BOOL)isBluetoothPaired;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (BOOL)isPaired;
- (BOOL)isPersistent;
- (BOOL)keepInSync;
- (BOOL)leftAvailable;
- (float)leftBatteryLevel;
- (id)leftBatteryLowDate;
- (id)leftFirmwareVersion;
- (id)leftHardwareVersion;
- (int)leftLoadedProperties;
- (float)leftMicrophoneVolume;
- (id)leftPeripheral;
- (id)leftPeripheralUUID;
- (unsigned long)leftPresetBitmask;
- (int)leftProgramVersion;
- (id)leftPrograms;
- (id)leftPropertiesLoadCount;
- (id)leftSelectedProgram;
- (float)leftStreamVolume;
- (id)leftUUID;
- (int)leftWriteRequestProperties;
- (int)leftWriteResponseProperties;
- (void)loadBasicProperties;
- (void)loadFailedProperties;
- (void)loadProperties:(int)arg1 forPeripheral:(id)arg2 withRetryPeriod:(float)arg3;
- (void)loadRequiredProperties;
- (id)manufacturer;
- (void)mateWithDevice:(id)arg1;
- (id)model;
- (id)name;
- (void)pairingDidCompleteForPeripheral:(id)arg1;
- (id)peripheral:(id)arg1 characteristicForProperty:(int)arg2;
- (id)peripheral:(id)arg1 characteristicForUUID:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didFinishPairingWithResult:(id)arg2;
- (void)peripheral:(id)arg1 didInvalidateServices:(id)arg2;
- (BOOL)peripheral:(id)arg1 didLoadProperty:(int)arg2;
- (void)peripheral:(id)arg1 didUpdateCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (int)peripheral:(id)arg1 propertyForCharacteristic:(id)arg2;
- (void)peripheralDidUnpair:(id)arg1;
- (void)peripheralDidUpdateName:(id)arg1;
- (id)persistentRepresentation;
- (id)programs;
- (void)readProperty:(int)arg1 fromPeripheral:(id)arg2;
- (void)readValueForCharacteristic:(id)arg1 fromPeripheral:(id)arg2;
- (BOOL)rightAvailable;
- (float)rightBatteryLevel;
- (id)rightBatteryLowDate;
- (id)rightFirmwareVersion;
- (id)rightHardwareVersion;
- (int)rightLoadedProperties;
- (float)rightMicrophoneVolume;
- (id)rightPeripheral;
- (id)rightPeripheralUUID;
- (unsigned long)rightPresetBitmask;
- (int)rightProgramVersion;
- (id)rightPrograms;
- (id)rightPropertiesLoadCount;
- (id)rightSelectedProgram;
- (float)rightStreamVolume;
- (id)rightUUID;
- (int)rightWriteRequestProperties;
- (int)rightWriteResponseProperties;
- (void)selectProgram:(id)arg1;
- (id)selectedProgramIndexes;
- (id)selectedPrograms;
- (void)setAvailableEars:(int)arg1;
- (void)setCurrentLeftProgram:(id)arg1;
- (void)setCurrentRightProgram:(id)arg1;
- (void)setIsConnecting:(BOOL)arg1;
- (void)setIsPaired:(BOOL)arg1;
- (void)setIsPersistent:(BOOL)arg1;
- (void)setKeepInSync:(BOOL)arg1;
- (void)setLeftBatteryLevel:(float)arg1;
- (void)setLeftBatteryLowDate:(id)arg1;
- (void)setLeftFirmwareVersion:(id)arg1;
- (void)setLeftHardwareVersion:(id)arg1;
- (void)setLeftLoadedProperties:(int)arg1;
- (void)setLeftMicrophoneVolume:(float)arg1;
- (void)setLeftPeripheral:(id)arg1;
- (void)setLeftPeripheralUUID:(id)arg1;
- (void)setLeftPresetBitmask:(unsigned long)arg1;
- (void)setLeftProgramVersion:(int)arg1;
- (void)setLeftPrograms:(id)arg1;
- (void)setLeftPropertiesLoadCount:(id)arg1;
- (void)setLeftSelectedProgram:(id)arg1;
- (void)setLeftStreamVolume:(float)arg1;
- (void)setLeftUUID:(id)arg1;
- (void)setLeftWriteRequestProperties:(int)arg1;
- (void)setLeftWriteResponseProperties:(int)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotify:(BOOL)arg1 forPeripheral:(id)arg2;
- (void)setRightBatteryLevel:(float)arg1;
- (void)setRightBatteryLowDate:(id)arg1;
- (void)setRightFirmwareVersion:(id)arg1;
- (void)setRightHardwareVersion:(id)arg1;
- (void)setRightLoadedProperties:(int)arg1;
- (void)setRightMicrophoneVolume:(float)arg1;
- (void)setRightPeripheral:(id)arg1;
- (void)setRightPeripheralUUID:(id)arg1;
- (void)setRightPresetBitmask:(unsigned long)arg1;
- (void)setRightProgramVersion:(int)arg1;
- (void)setRightPrograms:(id)arg1;
- (void)setRightPropertiesLoadCount:(id)arg1;
- (void)setRightSelectedProgram:(id)arg1;
- (void)setRightStreamVolume:(float)arg1;
- (void)setRightUUID:(id)arg1;
- (void)setRightWriteRequestProperties:(int)arg1;
- (void)setRightWriteResponseProperties:(int)arg1;
- (void)setValue:(id)arg1 forProperty:(int)arg2;
- (void)updateName;
- (id)valueForProperty:(int)arg1;
- (unsigned char)volumeValueForProperty:(int)arg1 andPeripheral:(id)arg2;
- (void)writeInt:(unsigned char)arg1 toPeripheral:(id)arg2 forProperty:(int)arg3;

@end
