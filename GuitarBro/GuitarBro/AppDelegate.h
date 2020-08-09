//
//  AppDelegate.h
//  GuitarBro
//
//  Created by Dustin Johns on 8/9/20.
//  Copyright © 2020 Dustin Johns. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;


@end

