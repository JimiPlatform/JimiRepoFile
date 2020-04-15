//
//  JMTableViewController.h
//  JMSmartUtils
//
//  Created by YaoHua Tan on 2020/1/10.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JMTableViewController : UITableViewController


@property (nonatomic,strong) NSMutableArray * _Nullable datas;      //TableView数据源

@property (nonatomic,strong) NSMutableDictionary * _Nullable dataDic;     //需要传递的数据

@property (nonatomic) id _Nullable dataObject;    //需要传递的数据

@property (nonatomic,assign) char * _Nullable pData;    //需要传递的数据（指针）

@property (nonatomic,assign) NSInteger flag; //需要传递标识

#pragma mark - 导航栏样式
@property (nonatomic,strong) UIButton * _Nullable navRightBtn;
@property (nonatomic,strong) UIButton * _Nullable navLeftBtn;
@end

NS_ASSUME_NONNULL_END
