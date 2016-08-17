//
//  ImageEnlargeCell.h
//  CarouselAmplification
//
//  Created by Marike Jave on 16/8/17.
//  Copyright © 2016年 Jiu Bu Gao Su Ni. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageEnlargeCell : UICollectionViewCell<UIScrollViewDelegate>

// 图片的url地址
@property (nonatomic,strong) NSString *imageUrlString ;

// 视图
@property (nonatomic,strong) UIImageView *imageView ;

@property (nonatomic,strong) UIScrollView *scrollView ;

@end
