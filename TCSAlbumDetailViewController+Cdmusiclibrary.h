#import <UIKit/UIKit.h>
#import "TCSAlbumDetailViewController.h"
#import "TCSLastFMAPIClient.h"
#import "Artist.h"
#import "Album.h"
#import "WeeklyAlbumChart.h"
#import "WeeklyChart.h"
#import "TCSAlbumArtDetailView.h"
#import "TCSAlbumPlayCountDetailView.h"
#import "TCSAlbumAboutDetailView.h"
#import "UILabel+TCSLabelSizeCalculations.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <ReactiveCocoa/RACEXTScope.h>
#import <ReactiveCocoa/RACEXTKeyPathCoding.h>

@interface TCSAlbumDetailViewController (Cdmusiclibrary)
- (void)initWithWeeklyAlbumChart:(WeeklyAlbumChart *)weeklyAlbumChart cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)initWithAlbum:(Album *)album user:(User *)user cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)initWithAlbum:(Album *)album cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)loadViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewDidLoadCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewWillLayoutSubviewsCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewWillAppear:(BOOL)animated cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewWillDisappear:(BOOL)animated cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)didReceiveMemoryWarningCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)prefersStatusBarHiddenCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)doSwipe:(id)sender cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)scrollViewDidScroll:(UIScrollView *)scrollView cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)scrollViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)albumDetailViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)playCountViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)pullLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)aboutViewCdmusiclibrary:(NSString *)cdmusiclibrary;

@end
