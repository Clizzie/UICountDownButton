//
//  BlockButton.m
//  UICountDownButton
//
//  Created by 陈立谦 on 16/11/10.
//  Copyright © 2016年 陈立谦. All rights reserved.
//

#import "BlockButton.h"

@implementation BlockButton

- (instancetype)initWithFrame:(CGRect)frame{
    if ([super initWithFrame:frame]) {
        [self addTarget:self action:@selector(ClickButton:) forControlEvents:UIControlEventTouchUpInside];
    }
    return self;
}

- (void)ClickButton:(UIButton *)button{
    if (self.block) {
        self.block(button);
    }
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
