//
//  NSFileManager+JMExt.h
//  JMSmartUtils
//
//  Created by lzj<lizhijian_21@163.com> on 2019/12/28.
//  Copyright © 2019 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSFileManager (JMExt)

#pragma mark -

/// 获取沙盒文档文件夹路径
+ (NSString *)jm_documentsPath;

/// 获取沙盒缓存文件夹下文件/文件夹的路径
/// @param fileName 文件/文件名称
+ (NSString *)jm_documentsPath:(NSString *)fileName;

/// 获取沙盒缓存文件夹路径
+ (NSString *)jm_cachesPath;

/// 获取文档文件夹文件路径
/// @param fileName 文件/文件夹名称
+ (NSString *)jm_cachesPath:(NSString *)fileName;

/// 文件是否存在
/// @param fileName 文件名称
+ (BOOL)jm_isExist:(NSString *)fileName;

/// 文件夹是否存在
/// @param dirName 文件夹名称
+ (BOOL)jm_isExistDirectory:(NSString *)dirName;

/// 获取路径下所有的文件列表
/// @param path 路径
+ (NSArray<NSString *> *)jm_fileLists:(NSString *)path;

/// 创建文件/文件夹
/// @param path 文件路径
+ (BOOL)jm_create:(NSString *)path;


/// 创建多级目录
/// @param path 文件路径
+ (BOOL)jm_createDirectory:(NSString *)path;
/// 删除文件
/// @param path 路径
+ (BOOL)jm_delete:(NSString *)path;

/// 移动文件
/// @param path 原文件路径
/// @param toPath 新文件路径
+ (BOOL)jm_move:(NSString *)path toPath:(NSString *)toPath;

/// 往文件中写入数据
/// @param path 文件路径
/// @param data 待写入数据
/// @param isAppend 是否是追加
+ (BOOL)jm_write:(NSString *)path data:(NSData *)data isAppend:(Boolean)isAppend;

/// 拷贝文件
/// @param path 原文件路径
/// @param toPath 新文件路径
+ (BOOL)jm_copy:(NSString *)path toPath:(NSString *)toPath;

/// 查找文件/文件夹
/// @param path 路径
/// @param fileName 文件名称
/// @param isTraversing 是否遍历
+ (NSString *)jm_find:(NSString *)path fileName:(NSString *)fileName isTraversing:(BOOL)isTraversing;

/** 获取一个文件夹以及文件夹下所有文件的大小，返回值得单位是byte */
- (unsigned long long)jm_getSize: (NSString *)path;
@end

NS_ASSUME_NONNULL_END
