//
//  BusinessRowCell.h
//  ShopLocal
//
//  Created by Eric Harmon on 3/3/13.
//  Copyright (c) 2013 Eric Harmon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIWebImageView.h"

@interface BusinessRowCell : UITableViewCell

@property IBOutlet UILabel *businessName;
@property IBOutlet UILabel *distance;
@property IBOutlet UIImageView *greyOverlay;
@property IBOutlet UIWebImageView *businessImage;

@end
