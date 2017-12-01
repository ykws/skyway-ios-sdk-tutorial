//
// PeerListViewController.h
//  eclwebrtc-ios-sdk-tutorial
//
//  Created by Yoshiyuki Kawashima on 2017/12/02.
//  Copyright © 2017 ykws. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PeerListDelegate <NSObject>

- (void) didSelectPeer:(NSString*)peerId;

@end

@interface PeerListViewController : UITableViewController

@property (strong, nonatomic) NSArray* items;
@property (nonatomic, weak) id<PeerListDelegate> delegate;

@end
