//
//  DetailViewController.h
//  helloworld
//
//  Created by Alex on 7/4/14.
//  Copyright (c) 2014 GTLab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
