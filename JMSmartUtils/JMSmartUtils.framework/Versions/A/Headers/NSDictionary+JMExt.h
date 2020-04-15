//
//  NSDictionary+JMExt.h
//  TestEngineDemo
//
//  Created by lzj<lizhijian_21@163.com> on 2019/11/19.
//  Copyright © 2019 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (JMExt)

/// 将字典转换为Json字符串
- (NSString *)jm_toJsonString;


/// 判断key对应的value是否为空
- (BOOL)jm_judgeValueWithKey:(NSString *)key;
@end

NS_ASSUME_NONNULL_END
