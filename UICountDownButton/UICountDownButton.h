//
//  UICountDownButton.h
//  CLQStartTimeDown
//
//  Created by 陈立谦 on 16/11/3.
//  Copyright © 2016年 陈立谦. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICountDownButton : UIButton
/**
 *  倒计时按钮
 *
 *  @param timeLine 倒计时总时间
 *  @param title    还没倒计时的title
 *  @param subTitle 倒计时中的子名字，如时、分
 *  @param mColor   还没倒计时的颜色
 *  @param color    倒计时中的颜色
 */
- (void)startWithTime:(NSInteger)timeLine title:(NSString *)title countDownTitle:(NSString *)subTitle mainColor:(UIColor *)mColor countColor:(UIColor *)color;

@end
