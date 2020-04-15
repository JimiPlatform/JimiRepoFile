//
//  JMTableViewCell.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/1/10.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>
@class JMTableVeiwCellItem;

NS_ASSUME_NONNULL_BEGIN

@interface JMTableViewCell : UITableViewCell

@property (nonatomic,strong) JMTableVeiwCellItem *item;
@property (nonatomic, strong) UIImageView *arrowIV;
@property (nonatomic, strong) UISwitch *switchBtn;
@property (nonatomic, strong) UILabel *labelView;
@property (nonatomic, strong) UIView *divider;
@property (nonatomic, strong) NSTimer *switchBtnTimer;
@property (nonatomic, strong) UIImageView *titleAfterIconView;
@property (nonatomic,copy) void(^switchBtnBlock)(void);
@property (nonatomic,copy) void(^switchBtnWithIdBlock)(UISwitch *switchBtn);
@property (nonatomic,strong) UIView *customView;
@property (nonatomic,assign) BOOL hiddenLastDivider;
@property (nonatomic, strong) UIImageView *lineImgView;

+ (instancetype)cellWithTableView:(UITableView *)tableView item:(JMTableVeiwCellItem *)item;


@end

NS_ASSUME_NONNULL_END
