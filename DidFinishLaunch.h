self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];

self.window.backgroundColor = [UIColor whiteColor];

MainTabViewContrller *controller = [[MainTabViewContrller alloc]init];

UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:controller];

self.window.rootViewController = nav;

[self.window makeKeyAndVisible];

return YES;
