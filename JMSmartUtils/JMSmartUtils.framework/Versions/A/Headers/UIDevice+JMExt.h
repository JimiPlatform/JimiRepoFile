//
//  UIDevice+JMExt.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/3/2.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (JMExt)

/// 系统的版本号
+ (NSString *)jm_systemVersion;

/// cpu个数
+ (NSUInteger)jm_cpuNumber;

/// 获取手机硬盘空闲空间, 返回的是字节数
+ (CGFloat)jm_freeDiskSpaceBytes;

///获取手机硬盘总空间, 返回的是字节数
+ (CGFloat)jm_totalDiskSpaceBytes;



@end

NS_ASSUME_NONNULL_END
