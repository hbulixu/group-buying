//
//  OrderMenuItem.h
//  XTuan
//
//  Created by dengwei on 15/8/15.
//  Copyright (c) 2015年 dengwei. All rights reserved.
//

#import "DealBottomMenuItem.h"

@class OrderModel;
@interface OrderMenuItem : DealBottomMenuItem

@property(nonatomic, strong)OrderModel *order;

@end
