//
//  JMGLMonitor.h
//  JMMonitorView
//
//  Created by lzj<lizhijian_21@163.com> on 2018/9/26.
//  Copyright © 2018年 lzj<lizhijian_21@163.com>. All rights reserved.
//

#import <GLKit/GLKit.h>
#import <CoreVideo/CVPixelBuffer.h>

NS_ASSUME_NONNULL_BEGIN


/**
 JMGLMonitor视图对模拟器不友好，最好使用真机调试
 */
@interface JMGLMonitor : GLKView

/// 获取截屏或设置图片
@property (nonatomic,strong) UIImage *image;

/// 设置是否在后台，后台则不会更新画面
@property (nonatomic,assign) BOOL isBackground;

/// 加载CVPixelBufferRef类型的画面
/// @param pixelBuffer CVPixelBufferRef
- (void)displayPixelBuffer:(CVPixelBufferRef)pixelBuffer;

/// 加载YUV420P数据画面
/// @param yData Y数据
/// @param uData U数据
/// @param vData V数据
/// @param yuvInfo YUV线性数组，linesize[3]
- (void)displayYUVData:(const unsigned char*)yData uData:(const unsigned char*)uData vData:(const unsigned char*)vData yuvInfo:(int *)yuvInfo;

/// 截图
- (UIImage *)snapshot;

@end

NS_ASSUME_NONNULL_END
