//
//  RLAgreementAppDelegate.h
//  RLAgreement
//
//  Created by arn on 5/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RLAgreementViewController;

@interface RLAgreementAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet RLAgreementViewController *viewController;

@end