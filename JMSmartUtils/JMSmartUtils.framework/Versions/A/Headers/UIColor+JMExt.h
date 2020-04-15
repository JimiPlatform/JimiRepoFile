//
//  UIColor+JMExt.h
//  JMSmartUtils
//
//  Created by lzj<lizhijian_21@163.com> on 2019/11/28.
//  Copyright © 2019 Jimi. All rights reserved.
//

#import <UIKit/UIColor.h>

NS_ASSUME_NONNULL_BEGIN

extern UIColor *JMColor(NSInteger r, NSInteger g, NSInteger b);
extern UIColor *JMColorWithAlpha(NSInteger r, NSInteger g, NSInteger b, CGFloat a);
extern UIColor *JMColorFromRGB(NSInteger rgb);
extern UIColor *JMColorFromRrgWithAlpha(NSInteger rgb, CGFloat alpha);
extern UIColor *JMColorRandom(void);

@interface UIColor (JMExt)

/// 将Hex字符串类型颜色转换成UIColor
/// @param hexString Hex字符串颜色，支持：0xFFFFFF、#FFFFFF、FFFFFF，注意，当为8位时后2位表示透明度
+ (UIColor *)jm_colorWithHexString:(NSString *)hexString;

/// 将整形RGB数据转换成UIColor
/// @param r 整形R
/// @param g  整形G
/// @param b  整形B
+ (UIColor *)jm_color:(NSInteger)r g:(NSInteger)g b:(NSInteger)b;
+ (UIColor *)jm_color:(NSInteger)r g:(NSInteger)g b:(NSInteger)b a:(CGFloat)a;
+ (UIColor *)jm_color:(NSInteger)rgb;
+ (UIColor *)jm_color:(NSInteger)rgb a:(CGFloat)a;
+ (UIColor *)jm_colorRandom;

/// 将颜色值转为整型
- (NSInteger)jm_hexFromColor;

/// 将颜色按照给出的程度加深或淡化
/// @param intensity 颜色强度
- (UIColor *)jm_colorXIntensity:(CGFloat)intensity;

@end

NS_ASSUME_NONNULL_END
