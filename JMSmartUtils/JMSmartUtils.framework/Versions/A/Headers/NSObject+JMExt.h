//
//  NSObject+JMExt.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/3/2.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (JMExt)

/// 属性列表
- (NSArray *)jm_propertiesInfo;

/// 属性列表
+ (NSArray *)jm_propertiesInfo;

/// 格式化之后的属性列表
+ (NSArray *)jm_propertiesWithCodeFormat;

/// 成员变量列表
-(NSArray *)jm_ivarInfo;

/// 成员变量列表
+ (NSArray *)jm_ivarInfo;

/// 对象方法列表
-(NSArray*)jm_instanceMethodList;

/// 对象方法列表
+(NSArray*)jm_instanceMethodList;

/// 类方法列表
+ (NSArray *)jm_classMethodList;

/// 协议列表
-(NSDictionary *)jm_protocolList;

/// 协议列表
+ (NSDictionary *)jm_protocolList;

/// 交换实例方法
/// @param oldMethod 旧方法
/// @param newMethod 新方法
+(void)jm_SwizzlingInstanceMethodWithOldMethod:(SEL)oldMethod newMethod:(SEL)newMethod;

/// 交换类方法
/// @param oldMethod 旧方法
/// @param newMethod 新方法
+(void)jm_SwizzlingClassMethodWithOldMethod:(SEL)oldMethod newMethod:(SEL)newMethod;

/// 添加方法
/// @param methodSEL 添加方法名
/// @param methodIMP 添加的实现
+ (void)jm_addMethodWithSEL:(SEL)methodSEL methodIMP:(SEL)methodIMP;

@end

NS_ASSUME_NONNULL_END
