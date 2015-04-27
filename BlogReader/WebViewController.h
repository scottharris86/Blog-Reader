//
//  WebViewController.h
//  BlogReader
//
//  Created by scott harris on 12/7/14.
//  Copyright (c) 2014 scott harris. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (nonatomic, strong) NSURL *blogPostURL;

@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
