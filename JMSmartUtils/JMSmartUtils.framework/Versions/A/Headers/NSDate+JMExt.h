//
//  NSDate+JMExt.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/1/3.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 日期格式为 @"yyyy-MM-dd HH:mm:ss"
extern NSString *NSDate_Format_DateAndTime(void);

/// 日期格式为 @"yyyyMMddHHmmss"
extern NSString *NSDate_Format_DateAndTime2(void);

/// 日期格式为 @"yyyy-MM-dd"
extern NSString *NSDate_Format_Date(void);

/// 日期格式为 @"dd-MM-yyyy"
extern NSString *NSDate_Format_Day_Month_Year(void);

/// 日期格式为 @"yyyyMMdd"
extern NSString *NSDate_Format_Date_YearMonthDay(void);

/// 日期格式为 @"MM-dd"
extern NSString *NSDate_Format_Month_Day(void);

/// 日期格式为 @"dd-MM"
extern NSString *NSDate_Format_Day_Month(void);

/// 日期格式为 @"yyyy-MM"
extern NSString *NSDate_Format_Year_Month(void);

/// 日期格式为 @"yyyyMM"
extern NSString *NSDate_Format_YearMonth(void);

/// 日期格式为 @"MM/dd HH:mm"
extern NSString *NSDate_Format_Month_Day_Hour_Min(void);

/// 日期格式为 @"dd/MM"
extern NSString *NSDate_Format_DayMonth(void);

/// 日期格式为 @"yyyy"
extern NSString *NSDate_Format_Year(void);

/// 日期格式为 @"MM"
extern NSString *NSDate_Format_Month(void);

/// 日期格式为 @"dd"
extern NSString *NSDate_Format_Day(void);

/// 日期格式为 @"HH"
extern NSString *NSDate_Format_Hour(void);

/// 日期格式为 @"mm"
extern NSString *NSDate_Format_Min(void);

/// 日期格式为 @"ss"
extern NSString *NSDate_Format_Sec(void);

/// 日期格式为 @"HH:mm:ss"
extern NSString *NSDate_Format_Time(void);

/// 日期格式为 @"HH:mm"
extern NSString *NSDate_Format_Hour_Minute(void);

/// 日期格式为 @"mm:ss"
extern NSString *NSDate_Format_Minute_Second(void);


@interface NSDate (JMExt)

/// 按照日期格式获取日期字符串
/// @param dateFormatStr 时间格式字符串，如，‘MM-dd’
- (NSString *)jm_getDateString:(NSString *)dateFormatStr;

/// @param dateFormatStr 时间格式字符串，如，‘MM-dd’
- (NSString *)jm_getDateStringForUTC:(NSString *)dateFormatStr;

/// 将时间拆分成具体单位并存入字典
- (NSDictionary *)jm_getTimeDic;

/// 将时间转换为UTC并拆分成具体单位存入字典
- (NSDictionary *)jm_getTimeDicForUTC;

/// 返回日期单位年
- (NSInteger)jm_getYear;

/// 将时间转为UTC再返回日期单位年
- (NSInteger)jm_getYearForUTC;

///返回日期单位月
- (NSInteger)jm_getMonth;

/// 将时间转为UTC再返回日期单位月
- (NSInteger)jm_getMonthForUTC;

/// 返回日期单位天
- (NSInteger)jm_getDay;

/// 将时间转为UTC再返回日期单位天
- (NSInteger)jm_getDayForUTC;

/// 返回时间单位小时
- (NSInteger)jm_getHour;

/// 将时间转为UTC再返回时间单位小时
- (NSInteger)jm_getHourForUTC;

/// 返回时间单位分钟
- (NSInteger)jm_getMinute;

/// 将时间转为UTC再返回时间单位分钟
- (NSInteger)jm_getMinuteForUTC;

/// 返回时间单位秒
- (NSInteger)jm_getSecond;

/// 将时间转为UTC再返回时间单位秒
- (NSInteger)jm_getSecondForUTC;

///  将0时区Date转换成当前时区的Date
- (NSDate *)jm_getlocalDate;

/// 将本地时区时间转换成0时区的时间
- (NSDate *)jm_getDateForUTC;

/// 获取当月的天数
- (NSUInteger)jm_getNumberOfDaysInMonth;

/// 获取本地时区与0时区的时差时间
- (NSInteger)jm_getTimeIntervalFromGMT;

/// 获取某天零点时间
- (NSDate *)jm_getDayZeroHourOfDate;

/// 是否为闰年
- (BOOL)jm_isLeapYear;

/// 判断是否为闰年
/// @param date 日期
+ (BOOL)jm_isLeapYear:(NSDate *)date;

/// 通过给定的秒得到日期并按照日期格式获取时间字符串
/// @param dateFormatStr 时间格式字符串，如，‘MM-dd’
/// @param seconds 时间秒
+ (NSString *)jm_getDateStringWithFormatStr:(NSString *)dateFormatStr secondsTime:(NSTimeInterval)seconds;

/// 通过给定的秒得到日期并按照日期格式获取UTC时间字符串
/// @param dateFormatStr 时间格式字符串，如，‘MM-dd’
/// @param seconds 时间秒
+ (NSString *)jm_getDateStringWithFormatStrForUTC:(NSString *)dateFormatStr secondsTime:(NSTimeInterval)seconds;

/// 获取当前时区的时间
+ (NSDate *)jm_localDate;

/// 获取当前UTC的时间
+ (NSDate *)jm_utcDate;

///  将时间转换为UTC时间
/// @param time 要转的时间，单位秒
+ (NSTimeInterval)jm_getTimeForUTC:(NSTimeInterval)time;

/// 将时间转换为当期时区时间
/// @param time 要转的时间，单位秒
+ (NSTimeInterval)jm_getLocalTime:(NSTimeInterval)time;

/// 将某一时间，单位秒，转为日期拆分成具体的时间单位，存入字典
/// @param time 要转的时间，单位秒
+ (NSDictionary *)jm_getTimeDic:(NSTimeInterval)time;

/// 将某一时间，单位秒，转为UTC日期拆分成具体的时间单位，存入字典
/// @param time 要转的时间，单位秒
+ (NSDictionary *)jm_getTimeDicForUTC:(NSTimeInterval)time;


@end

NS_ASSUME_NONNULL_END
