//
//  Geofencing.h
//  Geofense Demo
//
//  Created by Stuart Farmer on 7/22/15.
//  Copyright © 2015 Stuart Farmer. All rights reserved.
//

#import <Foundation/Foundation.h>

@import CoreLocation;

typedef void(^regions) (NSArray *regions);

@interface Geofencing : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *locationManager;
    NSMutableArray *geofences;
}

- (void)monitorRegions:(NSArray *)regions onEnter:(regions)enterBlock onExit:(regions)exitBlock;

@end
