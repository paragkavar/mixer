//
//  DetailViewController.h
//  mixer
//
//  Created by Administrator on 13.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController
{
    UITextField* nameTextField_;
    UITextView* indigrientsTV_;
    UITextView* instructionTV_;
    
}

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (nonatomic, retain) IBOutlet UITextField* nameTextField;
@property (nonatomic, retain) IBOutlet UITextView* indigrientsTV;
@property (nonatomic, retain) IBOutlet UITextView* instructionTV;


@end
