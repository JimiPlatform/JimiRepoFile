//
//  UIView+JMExt.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/3/2.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (JMExt)

@property (nonatomic, assign) NSNumber *tapTimes;

/// View添加单机手势
/// @param tapAction 手势回调
- (void)jm_addClickedBlock:(void(^)(id obj))tapAction;

/// View 添加双击手势
/// @param tapAction 手势回调
- (void)jm_addDoubleTapBlock:(void(^)(id obj))tapAction;

/// View 添加多次点击手势
/// @param tapAction 手势回调
- (void)jm_addManyTimesTapBlock:(void(^)(id obj))tapAction;

/// View 长按手势
/// @param longPressAction 手势回调
- (void)jm_addlongPressActionBlock:(void(^)(id obj))longPressAction;

@end

NS_ASSUME_NONNULL_END
