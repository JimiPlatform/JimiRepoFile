//
//  NSString+JMDataConversion.h
//  JMSmartUtils
//
//  Created by jimi01 on 2020/3/31.
//  Copyright © 2020 Jimi. All rights reserved.
//
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JMDataConversion)
/** 将16进制字符串, 转换为十进制字符串 */
- (NSString *)jm_convertHexByDecimal;

/** 十六进制转换为二进制 */
- (NSString *)jm_convertBinaryByHex;

/** 将16进制的字符串转换成NSData */
- (NSData *)jm_convertHexStrToData;
@end

NS_ASSUME_NONNULL_END
