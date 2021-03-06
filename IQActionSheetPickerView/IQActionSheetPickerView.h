//
// IQActionSheetPickerView.h
// Hobizbo
//
// Created by Binod_Mac on 11/5/13.
// Copyright (c) 2013 Hobizbo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum IQActionSheetPickerStyle
{
    IQActionSheetPickerStyleTextPicker,
    IQActionSheetPickerStyleDatePicker
}IQActionSheetPickerStyle;

@class IQActionSheetPickerView;

@protocol IQActionSheetPickerView <UIActionSheetDelegate>

- (void)actionSheetPickerView:(IQActionSheetPickerView *)pickerView didSelectTitles:(NSArray*)titles;

@end

@interface IQActionSheetPickerView : UIActionSheet<UIPickerViewDataSource,UIPickerViewDelegate>
{
@private
    UIPickerView    *_pickerView;
    UIDatePicker    *_datePicker;
    UIToolbar       *_actionToolbar;
}

@property(nonatomic,assign) id<IQActionSheetPickerView> delegate; // weak reference
@property(nonatomic, assign) IQActionSheetPickerStyle actionSheetPickerStyle;   //Default is IQActionSheetPickerStyleTextPicker;

/*for IQActionSheetPickerStyleTextPicker*/
@property(nonatomic,assign) BOOL isRangePickerView;
@property(nonatomic, strong) NSArray *titlesForComponenets;
@property(nonatomic, strong) NSArray *widthsForComponents;

/*for IQActionSheetPickerStyleDatePicker*/
@property(nonatomic, assign) NSDateFormatterStyle dateStyle;    //returning date string style.
@property(nonatomic, assign) NSDate *date; //get/set date.

@end