//
//  BlockButton.h
//  UICountDownButton
//
//  Created by 陈立谦 on 16/11/10.
//  Copyright © 2016年 陈立谦. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^Block)(UIButton *button);
@interface BlockButton : UIButton

@property (nonatomic,copy)Block block;
@end
