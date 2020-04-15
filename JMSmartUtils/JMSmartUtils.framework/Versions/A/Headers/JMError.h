//
//  JMError.h
//  JMSmartUtils
//
//  Created by lzj<lizhijian_21@163.com> on 2020/4/10.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JMError : NSObject

@property (nonatomic, assign) NSInteger errCode;
@property (nonatomic, strong) NSString *errMsg;

+ (JMError *)initWithCode:(NSInteger)code msg:(NSString *)msg;

@end

NS_ASSUME_NONNULL_END
