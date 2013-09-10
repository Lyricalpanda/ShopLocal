//
//  KnowledgeTreeEngine.m
//  KnowledgeTree
//
//  Created by Eric Harmon on 1/31/13.
//  Copyright (c) 2013 Eric Harmon. All rights reserved.
//

#import "SLEngine.h"
#import "AppDelegate.h"
#import "constants.h"

@implementation SLEngine

+ (SLEngine *) sharedEngine
{
    AppDelegate *appDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    return appDelegate.sharedEngine;
}

- (MKNetworkOperation *)getBusineses
{
    return [self operationWithURLString:[NSString stringWithFormat:@"%@/api/businesses", kBaseURL]];
}

- (MKNetworkOperation *)getItemsForBusiness:(Business *)business
{
    return [self operationWithURLString:[NSString stringWithFormat:@"%@/api/businesses/%d/items", kBaseURL,business.businessId]];
}

@end
