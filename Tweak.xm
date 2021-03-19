#import <UIKit/UIKit.h>

#import "Classes/CheckinViewController.h"
#import "Classes/UnassignViewController.h"
#import "Classes/IncomingOrderViewController.h"
#import "Classes/DeclineDeliveryViewController.h"

%hook CheckinViewController
-(void) viewDidLoad {
    %orig;

    UITableView *tableView = [(CheckinViewController *)self tableView];
    tableView.hidden = YES;
    
    // [(UIViewController *)self setTitle: @"Start Dash"];
    [(CheckinViewController *)self setTableView: nil];
}
%end

%hook UnassignViewController
-(void) viewDidLoad {
    %orig;

    NSIndexPath *indexPath = [NSIndexPath indexPathForRow:0 inSection:0];

    ((UIViewController *) self).view.hidden = YES;
    [[((UnassignViewController *) self) tableView] selectRowAtIndexPath:indexPath animated:NO scrollPosition:UITableViewScrollPositionNone];
    [((UnassignViewController *) self) tableView: [(UnassignViewController *)self tableView] didSelectRowAtIndexPath: indexPath];

    [((UnassignViewController *) self) submitWithSender: nil];
}
%end

%hook IncomingOrderViewController
- (void)declineOrder:(id)arg {
    %orig;

    DeclineDeliveryViewController *declineView = MSHookIvar<DeclineDeliveryViewController *>(self, "$__lazy_storage_$_declineViewController");
    declineView.view.hidden = YES;

    [declineView declineWithSender: nil];
}
%end

%ctor {
    %init(CheckinViewController = NSClassFromString(@"DoordashDriver.CheckinViewController"),
        UnassignViewController = NSClassFromString(@"DoordashDriver.UnassignViewController"),
        IncomingOrderViewController = NSClassFromString(@"DoordashDriver.IncomingOrderViewController"));

}

