//
//  UILabel+JMExt.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/3/2.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (JMExt)

/** 快速创建Label */
+(instancetype)jm_labelWithText:(NSString *)text textFont:(int)font textColor:(UIColor *)color frame:(CGRect)frame;

/** 设置字间距 */
- (void)jm_setColumnSpace:(CGFloat)columnSpace;

/** 设置行距 */
- (void)jm_setRowSpace:(CGFloat)rowSpace;

@end

NS_ASSUME_NONNULL_END
