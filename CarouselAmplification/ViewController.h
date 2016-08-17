//
//  ViewController.h
//  CarouselAmplification
//
//  Created by Marike Jave on 16/8/17.
//  Copyright © 2016年 Jiu Bu Gao Su Ni. All rights reserved.
//

#import <UIKit/UIKit.h>
#define kScreenWidth    [UIScreen mainScreen].bounds.size.width
#define kScreenHeight   [UIScreen mainScreen].bounds.size.height

@interface ViewController : UIViewController

// 图片url地址的数组
@property (nonatomic,strong) NSArray *imageUrlArrays ;

// 第几张图片的文本
@property (nonatomic,strong) UILabel *label ;

@end

