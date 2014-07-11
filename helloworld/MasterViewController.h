//
//  MasterViewController.h
//  helloworld
//
//  Created by Alex on 7/4/14.
//  Copyright (c) 2014 GTLab. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
