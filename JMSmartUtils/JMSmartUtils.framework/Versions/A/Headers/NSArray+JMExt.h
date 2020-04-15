//
//  NSArray+JMExt.h
//  JMSmartUtils
//
//  Created by lzj<lizhijian_21@163.com> on 2019/11/26.
//  Copyright © 2019 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (JMExt)

/// 将数组转换为Json字符串
- (NSString *)jm_toJsonString;

/// 数组计算交集(两数组比较取相同，组成新数组)
/// @param otherArray 需对比处理的数组
- (NSArray *)jm_arrayForIntersectionWithOtherArray:(NSArray *)otherArray;

/// 数组计算差集(两数组比较取不同，组成新数组)
/// @param otherArray 需对比处理的数组
- (NSArray *)jm_arrayForMinusWithOtherArray:(NSArray *)otherArray;

/// 数组计算并集(两数组数据合并，组成新数组)
/// @param otherArray 需对比处理的数组
- (NSArray *)jm_arrayForUnionWithOtherArray:(NSArray *)otherArray;

/// 反转数组
- (NSArray *)jm_reverseArray;

@end

NS_ASSUME_NONNULL_END
