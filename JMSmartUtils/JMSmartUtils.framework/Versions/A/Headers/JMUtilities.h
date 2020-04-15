//
//  JMUtilities.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/1/8.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JMUtilities : NSObject

/// NSData 转为 字符串
/// @param data 要转的data
+ (NSString *)jm_dataToHexString: (NSData *)data;

/// 在字符串扫描第一段数字再转为NSNumber
/// @param str 要转的string
+ (NSNumber *)jm_scanHexStringToNumber :(NSString *) str;

/// 将16进制字符串转为NSData
/// @param string 要转的字符串
+ (NSData *)jm_dataFromHexString:(NSString *)string;

/// 将字符串转为NSData
/// @param str 要转的字符串
+ (NSData *)jm_scanDataString :(NSString *) str;

/// 生成随机密码
/// @param count 密码的位数
+ (NSString *)jm_getRandomNetworkKey:(NSInteger)count;

/// 获取系统时间
+ (NSString *)jm_getSysLocationTime;

/// 画虚直线
/// @param view 虚线的依附View
/// @param sPoint 起始点
/// @param ePoint 终端
/// @param color 虚线颜色
/// @param w 一个虚线的宽
/// @param s 虚线间的空隙大小
+ (void)jm_drawDashLineWithView:(UIView *)view startPoint:(CGPoint)sPoint endPoint:(CGPoint)ePoint color:(UIColor *)color w:(CGFloat)w s:(CGFloat)s;

/// 是否有麦克风权限
+ (BOOL)jm_canRecordPermission;

/// 判断是否有摄像机权限
+ (BOOL)jm_canCameraPermission;

/// 判断是否读取系统相册的权限
+ (BOOL)jm_canPhotoPermission;

/// 判断是否具有系统通知的权限
+ (BOOL)jm_canNotificationPermission:(BOOL)isPrompt;

/// 判断是否有获取地址的权限
+ (BOOL)jm_canLocationPermission;

/// 获取WIFI IP 地址
+ (NSString *)jm_getWiFiIPAddress;



@end

NS_ASSUME_NONNULL_END
