/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct { 
        float x; 
        float y; 
        float z; 
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    struct { 
        float x; 
        float y; 
        float z; 
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    int accelRingIndex;
    double accelRingTime[256];
    float accelRingX[256];
    float accelRingY[256];
    float accelRingZ[256];
    BOOL computingPosition;
    BOOL copyingAllData;
    } currentQuaternion;
    double dGyroUpdateInterval;
    double dLatestFusedMotionCopied;
    double dLatestTimestamp;
    struct OpaqueFigSemaphore { } *dataSemaphore;
    } fusedRingAccel[256];
    BOOL fusedRingDoingBiasEstimation[256];
    int fusedRingIndex;
    } fusedRingPosition[256];
    } fusedRingQuaternion[256];
    double fusedRingTime[256];
    BOOL gettingAttitudeChange;
    double latestGravityDataTime;
    double latestMotionDataTime;
    BOOL manageAccel;
    BOOL manageFusedMotion;
    BOOL manageGravity;
    CMMotionManager *motionManager;
    } position;
    } previousQuaternion;
    } ringMutex;
    double timestampLatency;
    } velocity;
}

- (id)copyAllFusedMotionData;
- (id)copyFusedMotionData:(double)arg1 endTime:(double)arg2 timeoutValue:(double)arg3 errOut:(int*)arg4;
- (id)copyNewFusedMotionData;
- (void)dealloc;
- (void)didUpdateAcceleration:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)didUpdateFusedMotionWithDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; boolx6; boolx7; boolx8; })arg1 time:(double)arg2 ifsync:(BOOL)arg3;
- (void)didUpdateGravity:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)didUpdatePositionWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (void)didUpdatePositionWithTimeStamp:(double)arg1;
- (void)didUpdateVelocityWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (void)getCurrentAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3;
- (void)getCurrentDeltaAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3;
- (void)getCurrentDeltaQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)getCurrentQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (long)getFusedVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (long)getGravityX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (void)getPositionX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (long)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (id)init;
- (id)initWithAccelerometer:(BOOL)arg1 gravityZ:(BOOL)arg2 fusedMotion:(BOOL)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5;
- (BOOL)isCopyingAllData;
- (BOOL)managingAccel;
- (BOOL)managingFusedMotion;
- (BOOL)managingGravity;
- (long)updateCurrentQuaternionForTimeStamp:(double)arg1;
- (long)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2;
- (void)updateDeviceCallback:(BOOL)arg1 fusedMotionUpdateInterval:(float)arg2;
- (void)updateGyroInterval:(float)arg1;

@end
