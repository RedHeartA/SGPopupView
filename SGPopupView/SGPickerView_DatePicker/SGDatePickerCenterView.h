//
//  SGDatePickerCenterView.h
//  SGPickerView_DatePickerExample
//
//  Created by Sorgle on 16/9/23.
//  Copyright © 2016年 Sorgle. All rights reserved.
//
//  - - - - - - - - - - - - - - 交流QQ：1357127436 - - - - - - - - - - - - - - //
//
//  - - 如在使用中, 遇到什么问题或者有更好建议者, 请于 kingsic@126.com 邮箱联系 - - - //
//  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  - - GitHub下载地址 https://github.com/kingsic/SGPopupView.git - - - - - - //
//
//  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //

#import <UIKit/UIKit.h>

@interface SGDatePickerCenterView : UIView

@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;
/** 取消按钮的点击事件 */
- (void)addTargetCancelBtn:(id)target action:(SEL)action;
/** 确定按钮的点击事件 */
- (void)addTargetSureBtn:(id)target action:(SEL)action;


@end
