//
//  DetailViewController.h
//  JJJ
//
//  Created by Ketul shah on 21/10/13.
//  Copyright (c) 2013 Clarion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
