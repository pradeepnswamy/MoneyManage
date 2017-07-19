//
//  AppDelegate.h
//  MoneyManage
//
//  Created by Pradeep on 19/07/17.
//  Copyright © 2017 Pradeep. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

