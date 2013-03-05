//
//  SFLegislatorCell.h
//  Congress
//
//  Created by Daniel Cloud on 2/20/13.
//  Copyright (c) 2013 Sunlight Foundation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SFPanopticCell.h"
@class SFLegislator;

@interface SFLegislatorCell : SFPanopticCell

@property (strong, nonatomic) SFLegislator *legislator;

- (void)updateDisplay;

@end