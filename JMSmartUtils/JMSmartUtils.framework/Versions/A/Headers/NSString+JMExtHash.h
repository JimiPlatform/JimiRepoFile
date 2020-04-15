//
//  NSString+JMExtHash.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/1/3.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JMExtHash)

@property (readonly) NSString *jm_md5String;
@property (readonly) NSString *jm_md5For16String;
@property (readonly) NSString *jm_sha1String;
@property (readonly) NSString *jm_sha256String;
@property (readonly) NSString *jm_sha512String;

/// 文本数据进行DES加密
/// @param clearText 需要加密的文字
/// @param key 加密的key
- (NSString *)jm_encryptDESForString:(NSString *)clearText key:(NSString *)key;

/// SHA1加密
/// @param key 加密的key
- (NSString *)jm_hmacSHA1StringWithKey:(NSString *)key;

/// SHA256加密
/// @param key 加密的key
- (NSString *)jm_hmacSHA256StringWithKey:(NSString *)key;

/// SHA512加密
/// @param key 加密的key
- (NSString *)jm_hmacSHA512StringWithKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
