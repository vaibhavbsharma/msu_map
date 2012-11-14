//
//  BuildingSystem.h
//  msu_map
//
//  Created by Minh Pham on 11/10/12.
//  Copyright (c) 2012 Minh Pham. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "Building.h"

@interface BuildingSystem : NSObject

- (id) init;

- (NSArray*) getBuildings;
@end
