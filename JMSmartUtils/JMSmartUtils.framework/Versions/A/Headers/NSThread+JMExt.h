//
//  NSThread+JMExt.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/1/6.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSThread (JMExt)


@property (atomic, assign) BOOL isSleep;
@property (atomic, strong) NSCondition *condition;

- (void)jm_sleepForTime:(NSTimeInterval)ti;

- (void)jm_unSleep;

@end

NS_ASSUME_NONNULL_END
