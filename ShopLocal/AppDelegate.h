//
//  HomeScreenAppDelegate.h
//  ShopLocal
//
//  Created by Eric Harmon on 3/2/13.
//  Copyright (c) 2013 Eric Harmon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "SLEngine.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,CLLocationManagerDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) SLEngine *sharedEngine;
@property (strong, nonatomic) UIWindow *window;

@end
