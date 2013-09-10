//
//  SLEngine.h
//  ShopLocal
//
//  Created by Eric Harmon on 3/3/13.
//  Copyright (c) 2013 Eric Harmon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MKNetworkEngine.h>
#import "Business.h"

@interface SLEngine : MKNetworkEngine

+ (SLEngine *) sharedEngine;
- (MKNetworkOperation *) getBusineses;
- (MKNetworkOperation *) getItemsForBusiness:(Business *)business;


@end
