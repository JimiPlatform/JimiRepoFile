//
//  UIImage+JMExt.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/1/3.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (JMExt)

/// 取图片某点的颜色
/// @param point 要取的点
- (UIColor *)jm_colorAtPixel:(CGPoint)point;

/// 保存图片到沙盒Documents目录下
/// @param picName 图片名称
/// @param dirName 文件夹名称
- (NSString *)jm_saveToDocumentsWithName:(NSString *)picName dirName:(NSString *)dirName;

/// 保存图片到路径下
/// @param filePath 保存路径
- (BOOL)jm_saveImageWithPath:(NSString *)filePath;

/// 改变图片颜色
/// @param img 要改变的图片
/// @param color 改变的颜色
+ (UIImage *)jm_imageWithColor:(UIImage *)img color:(UIColor *)color;

/// 缩放图片
/// @param img 要缩放的图片
/// @param size 要缩放的尺寸
+ (UIImage *)jm_scaleToSize:(UIImage *)img size:(CGSize)size;

/// 截图部分图像
/// @param image 要截取的图片
/// @param mCGRect 截取的范围
/// @param centerBool 是否截取以图片中心点为中心，mCGRect 宽高大小的图片
+ (UIImage*)jm_getSubImage:(UIImage *)image mCGRect:(CGRect)mCGRect centerBool:(BOOL)centerBool;

/// 根据颜色返回图片
/// @param color 图片颜色
+ (UIImage *)jm_imageWithColor:(UIColor *)color;

/// 根据颜色返回指定大小的图片
/// @param color 图片颜色
/// @param size 图片大小
+ (UIImage *)jm_imageWithColor:(UIColor *)color size:(CGSize)size;

/// 根据View返回图片
/// @param view 图片View
+ (UIImage *)jm_imageWithView:(UIView *)view;

/// 根据Buffer 返回指定大小的图片
/// @param buff 图片Buffer
/// @param width 图片的宽
/// @param height 图片的高
+ (UIImage *)jm_getImageWithCBuff:(char *)buff width:(NSInteger)width height:(NSInteger)height;

/// 根据颜色返回指定大小的图片
/// @param color 图片颜色
/// @param size 图片大小
+ (UIImage *)jm_imageEllipseWithColor:(UIColor *)color size:(CGSize)size;

/// 按给定的方向旋转图片
/// @param orient 要翻转的方向
- (UIImage*)jm_rotate:(UIImageOrientation)orient;

/// 垂直翻转
- (UIImage *)flipVertical;

/// 水平翻转
- (UIImage *)flipHorizontal;

/// 将图片旋转弧度radians
/// @param radians 要翻转的弧度
- (UIImage *)jm_imageRotatedByRadians:(CGFloat)radians;

/// 将图片旋转角度degrees
/// @param degrees 要翻转的角度
- (UIImage *)jm_imageRotatedByDegrees:(CGFloat)degrees;

@end

NS_ASSUME_NONNULL_END
