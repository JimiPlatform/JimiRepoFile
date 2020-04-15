//
//  JMTableVeiwCellItem.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/1/10.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JMCellType) {
    JMCellTypeArrowItem,//不带副标题的cell
    JMCellTypeSubArrowItem,//带副标题的cell
    JMCellTypeGroupItem,//section
    JMCellTypeLabelItem,//
    JMCellTypeCenterLabelItem,//文字可居中显示
    JMCellTypeSwitchItem,//右边View为Switch
    JMCellTypeSubSwitchItem,//再副标题的Switch cell
    JMCellTypeCustomViewItem,//右边View为自定义View
};

@interface JMTableVeiwCellItem : NSObject
@property (nonatomic,assign) NSInteger tag;

@property (nonatomic,copy) NSString * _Nullable icon; //图标

@property (nonatomic,copy) NSString * _Nullable title; //标题

@property (nonatomic,copy) NSString * _Nullable subTitle;//子标题

@property (nonatomic,copy) NSString * _Nullable detailTitle; //右边标题

@property (nonatomic,copy) NSString * _Nullable arrowIcon; //右边图标

@property (nonatomic,copy) NSString * _Nullable titleAfterIcon;

@property (nonatomic,assign) Class destVC;//指向的下一个视图控制器类

@property (nonatomic,copy) void(^ _Nullable switchBtnBlock)(void); //定义block保存将来要执行的代码

@property (nonatomic,copy) void(^ _Nullable switchBtnWithIdBlock)(UISwitch * _Nonnull switchBtn);

@property (nonatomic,assign) BOOL switchBtnValue; //Switch值

@property (nonatomic,assign) BOOL switchBtnEnble;   //使能

@property (nonatomic,strong) UIView * _Nullable customArrowView; //自定义Arrow图

@property (nonatomic, assign) JMCellType cellType; //cell类型

@property (nonatomic,assign) NSInteger titleColor;//文字颜色

@property (nonatomic,assign) NSInteger backgroungColor;//cell背景色

@property (nonatomic,strong) NSMutableDictionary * _Nullable dataDic;     //需要传递的数据

@property (nonatomic,strong) id _Nullable dataObject;    //需要传递的数据

@property (nonatomic,assign) char * _Nullable pData;    //需要传递的数据（指针,如有申请内存请自主释放）

@property (nonatomic,assign) NSInteger flag; //需要传递标识

@property (nonatomic,assign) NSInteger titleFontSize; //标题文字大小

@property (nonatomic,assign) NSInteger subFontSize; //子标题文字大小

@property (nonatomic,assign) NSInteger detailFontSize; //右标题文字大小

- (instancetype)initWithIcon:(nullable NSString *)icon title:(nullable NSString *)title destClass:(nullable Class)destVc cellType:(JMCellType)cellType;

- (instancetype)initWithIcon:(nullable NSString *)icon title:(nullable NSString *)title cellType:(JMCellType)cellType;

@end

@interface JMTableViewGroupItem : NSObject

#pragma mark - item Group
@property (nonatomic,copy) NSString *headerTitle;//头部标题

@property (nonatomic,copy) NSString *footerTitle; //底部标题

@property (nonatomic,strong) NSArray *items; //当前分组中所有行的数据（保存的是cellItem模型）

@property (nonatomic, assign) JMCellType cellType; //cell类型

- (instancetype)initWithHeadTitle:(nullable NSString *)headTitle;

#pragma mark -

@end

NS_ASSUME_NONNULL_END
