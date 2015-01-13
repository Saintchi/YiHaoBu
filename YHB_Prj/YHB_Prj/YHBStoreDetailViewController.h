//
//  YHBStoreDetailViewController.h
//  YHB_Prj
//
//  Created by yato_kami on 15/1/9.
//  Copyright (c) 2015年 striveliu. All rights reserved.
//

#import "BaseViewController.h"
@class YHBUserInfo;
@interface YHBStoreDetailViewController : BaseViewController

- (instancetype)initWithStoreInfo:(YHBUserInfo *)storeInfo;

- (instancetype)initWithItemID:(NSInteger)itemID;

@end
