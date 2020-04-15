//
//  JMRSAEncryptor.h
//  JMSmartUtils
//
//  Created by jimi01 on 2020/1/10.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JMRSAEncryptor : NSObject
+ (NSString *)jm_encryptString:(NSString *)str publicKey:(NSString *)pubKey;
+ (NSData *)jm_encryptData:(NSData *)data publicKey:(NSString *)pubKey;
+ (NSString *)jm_encryptString:(NSString *)str privateKey:(NSString *)privKey;
+ (NSData *)jm_encryptData:(NSData *)data privateKey:(NSString *)privKey;

+ (NSString *)jm_decryptString:(NSString *)str publicKey:(NSString *)pubKey;
+ (NSData *)jm_decryptData:(NSData *)data publicKey:(NSString *)pubKey;
+ (NSString *)jm_decryptString:(NSString *)str privateKey:(NSString *)privKey;
+ (NSData *)jm_decryptData:(NSData *)data privateKey:(NSString *)privKey;
@end

NS_ASSUME_NONNULL_END
