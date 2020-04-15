//
//  JMSystem.h
//  JMSmartUtils
//
//  Created by lzj<lizhijian_21@163.com> on 2019/8/5.
//  Copyright © 2019 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JMSingleton.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//系统语言类型
typedef NS_ENUM(NSInteger, JMSystemLanguageType) {
    JMSystemLanguageTypeUnknow = 0,    //不识别
    JMSystemLanguageTypeEN = 0,        //英文
    JMSystemLanguageTypeZH_Hans = 1,   //简体中文
    JMSystemLanguageTypeZH_Hant = 2,   //繁体中文
    JMSystemLanguageTypeHebrew = 3,    //希伯来文
    JMSystemLanguageTypeSpanish = 4,   //西班牙语
    JMSystemLanguageTypeGerman = 5,    //德语
    JMSystemLanguageTypeFrench = 6,    //法语
    JMSystemLanguageTypePolish = 7,    //波兰文
    JMSystemLanguageTypeBulgarian = 8,    //保加利亚文
};

typedef NS_ENUM(NSInteger, JMScreenSizeType) {
    JMScreenSizeType4S = 0,    //320*480
    JMScreenSizeType5S,        //320*568
    JMScreenSizeType8,         //375*667
    JMScreenSizeType8P,        //414*736
    JMScreenSizeTypeX,         //375*812
    JMScreenSizeTypeXr,        //414*896
    JMScreenSizeTypeXsMax = JMScreenSizeTypeXr,     //414*896
};

extern CGRect JMScreenFrame(void);
extern CGFloat JMScreenHeight(void);
extern CGFloat JMScreenWidth(void);
extern CGFloat JMStatusBarHeight(void);
extern CGFloat JMNavBarHeight(void);
extern JMScreenSizeType JMscreenSizeType(void);
extern CGFloat JMSysVersion(void);
extern BOOL JMIsIPad(void);
extern CGFloat JMScale(void);

@interface JMSystem : NSObject
singleton_h();

@property (nonatomic, assign, readonly) CGRect screenFrame;
@property (nonatomic, assign, readonly) CGFloat screenHeight;
@property (nonatomic, assign, readonly) CGFloat screenWidth;
@property (nonatomic, assign, readonly) CGFloat statusBarHeight;
@property (nonatomic, assign, readonly) CGFloat navBarHeight;

@property (nonatomic, assign, readonly) JMScreenSizeType screenSizeType;
@property (nonatomic, assign, readonly) CGFloat sysVersion;
@property (nonatomic, assign, readonly) BOOL isIPad;

#pragma mark -

+ (CGRect)screenFrame;

+ (CGFloat)screenHeight;

+ (CGFloat)screenWidth;

+ (CGFloat)statusBarHeight;

+ (CGFloat)navBarHeight;

+ (JMScreenSizeType)screenSizeType;

+ (CGFloat)sysVersion;

+ (BOOL)isIPad;

#pragma mark -

/// 返回系统默认的语言类型
+ (JMSystemLanguageType)languageType;

/// 获取系统UUID
+ (NSString *)getUUID;

/// 获取指定长度的UUID
/// @param length UUID长度，最大32位
+ (NSString *)getUUID:(NSInteger)length;

/// 移除UUID记录
+ (void)removeUUID;

@end

NS_ASSUME_NONNULL_END
