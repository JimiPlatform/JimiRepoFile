//
//  NSData+JMExt.h
//  JMSmartUtils
//
//  Created by jimi01 on 2020/3/31.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (JMExt)
/** 二进制NSData转换为16进制 */
- (NSString *)jm_convertDataToHexStr;
@end

NS_ASSUME_NONNULL_END
