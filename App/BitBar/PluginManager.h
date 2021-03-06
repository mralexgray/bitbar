//
//  PluginManager.h
//  BitBar
//
//  Created by Mat Ryer on 11/12/13.
//  Copyright (c) 2013 Bit Bar. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Plugin;

@interface PluginManager : NSObject <NSMenuDelegate>

@property (nonatomic, copy) NSString *path;
@property (nonatomic, strong) NSArray *plugins;
@property (nonatomic, strong) NSStatusBar *statusBar;
@property (nonatomic, strong) NSStatusItem *defaultStatusItem;
@property (nonatomic, strong) NSTimer *timerForLastUpdated;
@property (nonatomic, strong) NSDictionary *environment;

- (id) initWithPluginPath:(NSString *)path;

- (NSArray *) pluginFilesWithAsking:(BOOL)shouldAsk;

- (NSArray *)plugins;

- (void) setupAllPlugins;
- (void) reset;
- (void) clearPathAndReset;
- (void) showSystemStatusItemWithMessage:(NSString*)message;
- (void) addHelperItemsToMenu:(NSMenu*)menu asSubMenu:(BOOL)submenu;

- (void) pluginDidUdpdateItself:(Plugin*)plugin;

@end
