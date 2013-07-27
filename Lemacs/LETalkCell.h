//
//  LETalkCell.h
//  Lemacs
//
//  Created by Mike Lee on 7/21/13.
//  Copyright (c) 2013 New Lemurs. All rights reserved.
//

#import "LETalk.h"

@class SETextView;

@interface LETalkCell : UITableViewCell <UIWebViewDelegate>

+ (CGFloat)defaultHeight;

@property (nonatomic, weak) IBOutlet UIImageView *avatarView;
@property (nonatomic, weak) IBOutlet UILabel *timeLabel, *titleLabel;
@property (nonatomic, weak) IBOutlet SETextView *markdownView;

@property (readonly) CGFloat height;

- (void)configureCellWithTalk:(id <LETalk>)talk;

@end
