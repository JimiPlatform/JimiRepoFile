//
//  JMAESEncryptor.h
//  JMSmartUtils
//
//  Created by jimi01 on 2020/1/10.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>
NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, ELEncryptMode) {
    ELEncryptAES128      = 0,
    ELEncryptAES192,
    ELEncryptAES256,
    ELEncryptDES,
    ELEncrypt3DES,
};
@interface JMAESEncryptor : NSObject
/**
 AES256 ECB 加密
 */
+ (nullable NSString *)jm_stringByAes256Encrypt:(NSString *)string key:(NSString *)key;
/**
 AES256 ECB 解密
 */
+ (nullable NSString *)jm_stringByAes256Decrypt:(NSString *)string key:(NSString *)key;

/**
 *  @abstract           AES和DES通用的加密方法
 *
 *  @param mode         算法
 *  @param data         需要加密的二进制数据
 *  @param key          密钥
 *  @param options      补码方式(PKCS7Padding/None)和加密模式(CBC/ECB，默认CBC)
 *  @param iv           向量，ECB不需要
 *
 *  @return             加密之后二进制的数据
 */
+ (nullable NSData *)jm_dataByEncrypt:(NSData *)data key:(NSString *)key mode:(ELEncryptMode)mode options:(CCOptions)options iv:(nullable NSString *)iv;

/**
 *  @abstract           AES和DES通用的解密方法
 *
 *  @param mode         算法
 *  @param data         需要解密的二进制数据
 *  @param key          密钥
 *  @param options      补码方式(PKCS7Padding/None)和加密模式(CBC/ECB，默认CBC)
 *  @param iv           向量，ECB不需要
 *
 *  @return             解密之后的二进制数据
 */
+ (nullable NSData *)jm_dataByDecrypt:(NSData *)data key:(NSString *)key mode:(ELEncryptMode)mode options:(CCOptions)options iv:(nullable NSString *)iv;
@end

NS_ASSUME_NONNULL_END
