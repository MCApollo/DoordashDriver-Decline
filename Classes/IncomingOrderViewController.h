#import <UIKit/UIViewController.h>

@class MKMapView, NSLayoutConstraint, UIActivityIndicatorView, UIButton, UILabel, UIStackView, UIView; //, _TtC14DoordashDriver12PaddingLabel, _TtC14DoordashDriver20CircularProgressView, _TtC14DoordashDriver25IncomingOrderExpandedView;

@interface IncomingOrderViewController : UIViewController
{
    // Error parsing type: , name: didUpdateMap
    // Error parsing type: , name: timeRemaining
    // Error parsing type: , name: timer
    // Error parsing type: , name: declineButton
    // Error parsing type: , name: mapView
    // Error parsing type: , name: progressView
    // Error parsing type: , name: acceptButton
    // Error parsing type: , name: payAmountLabel
    // Error parsing type: , name: storeNamesContainerView
    // Error parsing type: , name: deliveryLabel
    // Error parsing type: , name: countdownLabel
    // Error parsing type: , name: topExtraInfoLabel
    // Error parsing type: , name: additionalInfoContainerView
    // Error parsing type: , name: additionalInfoLabel
    // Error parsing type: , name: additionalInfoExpandButton
    // Error parsing type: , name: payContainerStackView
    // Error parsing type: , name: additionalPayLabel
    // Error parsing type: , name: additionalMilesLabel
    // Error parsing type: , name: payDescriptionLabel
    // Error parsing type: , name: orderTypeBadgeLabel
    // Error parsing type: , name: itemSummaryLabel
    // Error parsing type: , name: expandedView
    // Error parsing type: , name: auxiliaryContainerView
    // Error parsing type: , name: auxiliaryLabel
    // Error parsing type: , name: driveLabelHeight
    // Error parsing type: , name: acceptButtonActivityIndicator
    // Error parsing type: , name: presenter
    // Error parsing type: , name: $__lazy_storage_$_declineViewController
    // Error parsing type: , name: $__lazy_storage_$_unassignViewController
    // Error parsing type: , name: driveCateringOrderConstraint
    // Error parsing type: , name: additionalInfoLabelTopConstraint
}

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateTimer;
- (void)expandPackagedDeliveryAdditionalInfo:(id)arg1;
- (void)acceptOrder:(id)arg1;
- (void)showExpandedView;
- (void)declineOrder:(id)arg1;
- (void)bonusPayTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
@property(nonatomic, retain) NSLayoutConstraint *additionalInfoLabelTopConstraint; // @synthesize additionalInfoLabelTopConstraint;
@property(nonatomic, retain) NSLayoutConstraint *driveCateringOrderConstraint; // @synthesize driveCateringOrderConstraint;
@property(nonatomic) __weak UIActivityIndicatorView *acceptButtonActivityIndicator; // @synthesize acceptButtonActivityIndicator;
@property(nonatomic) __weak UILabel *auxiliaryLabel; // @synthesize auxiliaryLabel;
@property(nonatomic) __weak UIView *auxiliaryContainerView; // @synthesize auxiliaryContainerView;
// @property(nonatomic) __weak _TtC14DoordashDriver25IncomingOrderExpandedView *expandedView; // @synthesize expandedView;
@property(nonatomic) __weak UILabel *itemSummaryLabel; // @synthesize itemSummaryLabel;
// @property(nonatomic) __weak _TtC14DoordashDriver12PaddingLabel *orderTypeBadgeLabel; // @synthesize orderTypeBadgeLabel;
@property(nonatomic) __weak UILabel *payDescriptionLabel; // @synthesize payDescriptionLabel;
@property(nonatomic) __weak UILabel *additionalMilesLabel; // @synthesize additionalMilesLabel;
@property(nonatomic) __weak UILabel *additionalPayLabel; // @synthesize additionalPayLabel;
@property(nonatomic) __weak UIStackView *payContainerStackView; // @synthesize payContainerStackView;
@property(nonatomic) __weak UIButton *additionalInfoExpandButton; // @synthesize additionalInfoExpandButton;
@property(nonatomic) __weak UILabel *additionalInfoLabel; // @synthesize additionalInfoLabel;
@property(nonatomic) __weak UIStackView *additionalInfoContainerView; // @synthesize additionalInfoContainerView;
// @property(nonatomic) __weak _TtC14DoordashDriver12PaddingLabel *topExtraInfoLabel; // @synthesize topExtraInfoLabel;
@property(nonatomic) __weak UILabel *countdownLabel; // @synthesize countdownLabel;
@property(nonatomic) __weak UILabel *deliveryLabel; // @synthesize deliveryLabel;
@property(nonatomic) __weak UIStackView *storeNamesContainerView; // @synthesize storeNamesContainerView;
@property(nonatomic) __weak UILabel *payAmountLabel; // @synthesize payAmountLabel;
@property(nonatomic) __weak UIButton *acceptButton; // @synthesize acceptButton;
// @property(nonatomic) __weak _TtC14DoordashDriver20CircularProgressView *progressView; // @synthesize progressView;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView;
@property(nonatomic) __weak UIButton *declineButton; // @synthesize declineButton;

@end

