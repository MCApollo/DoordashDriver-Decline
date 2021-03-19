#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIButton, UITableView, UIView;

@interface CheckinViewController : UIViewController
{
    // Error parsing type: , name: startDashButton
    // Error parsing type: , name: tableView
    // Error parsing type: , name: hairlineView
    // Error parsing type: , name: tableViewBottomConstraint
    // Error parsing type: , name: unassignButton
    // Error parsing type: , name: unassignButtonHeightConstraint
    // Error parsing type: , name: checkinCellIdentifier
    // Error parsing type: , name: driveCheckinCellIdentifier
    // Error parsing type: , name: headerHeight
    // Error parsing type: , name: presenter
    // Error parsing type: , name: declineDeliveryView
    // Error parsing type: , name: dasherTOSController
}

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)didTapUnassignButton:(id)arg1;
- (void)clickStartDashButton:(id)arg1;
- (void)handleTapOnCovidGuidanceLinkLabel;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(nonatomic, retain) NSLayoutConstraint *unassignButtonHeightConstraint; // @synthesize unassignButtonHeightConstraint;
@property(nonatomic, retain) UIButton *unassignButton; // @synthesize unassignButton;
@property(nonatomic) __weak NSLayoutConstraint *tableViewBottomConstraint; // @synthesize tableViewBottomConstraint;
@property(nonatomic) __weak UIView *hairlineView; // @synthesize hairlineView;
// @property(nonatomic, retain) UITableView *tableView; // @synthesize tableView;
@property(nonatomic, retain) UIButton *startDashButton; // @synthesize startDashButton;

@end

