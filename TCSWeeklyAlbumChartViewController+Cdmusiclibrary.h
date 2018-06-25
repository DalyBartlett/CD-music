#import <UIKit/UIKit.h>
#import "TCSWeeklyAlbumChartViewController.h"
#import "TCSUserNameViewController.h"
#import "TCSSettingsViewController.h"
#import "TCSAlbumDetailViewController.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <ReactiveCocoa/RACEXTScope.h>
#import "TCSLastFMAPIClient.h"
#import "WeeklyAlbumChart.h"
#import "WeeklyChart.h"
#import "User.h"
#import "Album.h"
#import "Artist.h"
#import "TCSSlideSelectView.h"
#import "TCSAlbumArtistPlayCountCell.h"
#import "TCSEmptyErrorView.h"
#import "TCSInnerShadowView.h"

@interface TCSWeeklyAlbumChartViewController (Cdmusiclibrary)
- (void)initWithUser:(User *)user playCountFilter:(NSUInteger)playCountFilter cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)loadViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewDidLoadCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)setUpViewSignalsCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)setUpDataSignalsCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewWillAppear:(BOOL)animated cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewDidAppear:(BOOL)animated cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewWillLayoutSubviewsCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)didReceiveMemoryWarningCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)prefersStatusBarHiddenCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)doDoubleTap:(UITapGestureRecognizer *)tap cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)numberOfSectionsInTableView:(UITableView *)tableView cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)slideSelectViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)loadingImageViewCdmusiclibrary:(NSString *)cdmusiclibrary;

@end
