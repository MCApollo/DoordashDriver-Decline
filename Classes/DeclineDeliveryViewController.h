#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIView;

@interface DeclineDeliveryViewController : UIViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: shouldConfigureViews
    // Error parsing type: , name: modalHeight
    // Error parsing type: , name: acceptanceColorThreshold
    // Error parsing type: , name: heightAdjusted
    // Error parsing type: , name: textLabel
    // Error parsing type: , name: backButton
    // Error parsing type: , name: declineButton
    // Error parsing type: , name: acceptanceRateLabel
    // Error parsing type: , name: acceptanceRateView
    // Error parsing type: , name: deactivationWarningLabel
    // Error parsing type: , name: deactivationWarningView
}

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)backWithSender:(id)arg1;
- (void)declineWithSender:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak UIView *deactivationWarningView; // @synthesize deactivationWarningView;
@property(nonatomic) __weak UILabel *deactivationWarningLabel; // @synthesize deactivationWarningLabel;
// @property(nonatomic) __weak _TtC14DoordashDriver26StaticCircularProgressView *acceptanceRateView; // @synthesize acceptanceRateView;
@property(nonatomic) __weak UILabel *acceptanceRateLabel; // @synthesize acceptanceRateLabel;
@property(nonatomic) __weak UIButton *declineButton; // @synthesize declineButton;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel;

@end

