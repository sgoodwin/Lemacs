//
//  LETalkListController.h
//  Lemacs
//
//  Created by Mike Lee on 7/18/13.
//  Copyright (c) 2013 New Lemurs. All rights reserved.
//
// TODO: Factor out common LCTalkController

@class LETalkViewController, UAGithubEngine;

@interface LETalkListController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (nonatomic, strong) LETalkViewController *talkViewController;

- (IBAction)reloadList;
- (IBAction)resizeCells:(UIPinchGestureRecognizer *)pinch;

@end

extern NSString * const kLETalkListTalkSize;