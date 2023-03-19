//
//  DisplayManageViewController.h
//  MultipleVideo
//
//  Created by issuser on 2017/4/26.
//  Copyright © 2017年 lsq. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DisplayManageViewController : UIViewController

@property (strong, nonatomic) NSDictionary *video;
@property (strong, nonatomic) NSDictionary *group;

@property (assign, nonatomic) BOOL isPrivate; //是否是私有数据

@end
