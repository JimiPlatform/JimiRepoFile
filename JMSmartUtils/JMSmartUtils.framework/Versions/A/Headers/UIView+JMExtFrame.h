//
//  UIView+JMExtFrame.h
//  JMSmartUtils
//
//  Created by lizhijian on 2017/9/22.
//  Copyright © 2017年 Concox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (JMExtFrame)

@property (nonatomic) CGFloat jm_width;
@property (nonatomic) CGFloat jm_height;
@property (nonatomic) CGFloat jm_left;
@property (nonatomic) CGFloat jm_top;
@property (nonatomic) CGFloat jm_right;
@property (nonatomic) CGFloat jm_bottom;
@property (nonatomic) CGFloat jm_centerX;
@property (nonatomic) CGFloat jm_centerY;
@property (nonatomic) CGPoint jm_origin;
@property (nonatomic) CGSize  jm_size;
@property (readonly) CGPoint jm_bottomLeft;
@property (readonly) CGPoint jm_bottomRight;
@property (readonly) CGPoint jm_topRight;

@end
