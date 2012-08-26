//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Brian Jenkins on 8/26/12.
//  Copyright (c) 2012 Brian Jenkins. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
