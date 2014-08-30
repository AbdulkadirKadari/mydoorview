//
//  nextViewController.h
//  mydoorview
//
//  Created by Prajas on 5/26/14.
//  Copyright (c) 2014 My Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface nextViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIView *lab;
@property (weak, nonatomic) IBOutlet UITextField *txt;
- (IBAction)btn1:(id)sender;
- (IBAction)btn2:(id)sender;

@end
