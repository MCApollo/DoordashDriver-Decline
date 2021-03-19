#import <UIKit/UIViewController.h>

// @class UITableView, _TtC3DLS6Button;

@interface UnassignViewController : UIViewController
{
    // Error parsing type: , name: sectionHeaderHeight
    // Error parsing type: , name: tableViewSectionHeaderHorizontalPadding
    // Error parsing type: , name: tableViewSectionHeaderTopPadding
    // Error parsing type: , name: prototypeCell
    // Error parsing type: , name: selectedIndex
    // Error parsing type: , name: shouldHideHeader
    // Error parsing type: , name: tableView
    // Error parsing type: , name: submitButton
    // Error parsing type: , name: presenter
}

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didClickBackButton;
- (void)viewDidLoad;
- (void)submitWithSender:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// @property(nonatomic) __weak _TtC3DLS6Button *submitButton; // @synthesize submitButton;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;

@end

