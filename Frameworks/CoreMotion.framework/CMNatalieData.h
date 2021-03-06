/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSDate, NSNumber;

@interface CMNatalieData : CMLogItem {
    double fNatalies;
    int fRecordId;
    int fSession;
    double fStartDate;
}

@property(readonly) NSNumber * natalies;
@property(readonly) int recordId;
@property(readonly) int session;
@property(readonly) NSDate * startDate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 natalies:(double)arg2 session:(int)arg3 recordId:(int)arg4 timestamp:(double)arg5;
- (id)natalies;
- (int)recordId;
- (int)session;
- (id)startDate;

@end
