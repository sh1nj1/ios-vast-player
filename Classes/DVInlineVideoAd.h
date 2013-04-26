//
//  DVInlineVideoAd.h
//  DVVASTSample
//
//  Created by Nikolay Morev on 8/7/12.
//  Copyright (c) 2012 DENIVIP Media. All rights reserved.
//

#import "DVVideoAd.h"


@interface DVInlineVideoAd : DVVideoAd

@property (nonatomic, copy) NSString *system;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *impressionURLs;    // Multiple <Impression> elements
@property (nonatomic, copy) NSURL *impressionURL;       // For compatibility sake (code using ios-vast-player's "single" impressionURL)
@property (nonatomic, copy) NSURL *clickThroughURL;
@property (nonatomic, copy) NSArray *clickTrackingURLs; // Multiple <ClickTracking> elements
@property (nonatomic, copy) NSURL *clickTrackingURL;    // For compatibility sake (code using ios-vast-player's "single" clickTrackingURL)

@property (nonatomic) NSTimeInterval duration;
@property (nonatomic, copy) NSURL *mediaFileURL;

- (void)trackImpressions;

@end
