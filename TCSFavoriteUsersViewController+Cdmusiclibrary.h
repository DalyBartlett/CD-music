#import <UIKit/UIKit.h>
#import "TCSFavoriteUsersViewController.h"
#import "TCSUserNameViewController.h"
#import "TCSSettingsViewController.h"
#import "TCSWeeklyAlbumChartViewController.h"
#import "TCSSimpleTableDataSource.h"
#import "TCSLastFMAPIClient.h"
#import "TCSUserStore.h"
#import "User.h"
#import "TCSSettingsCells.h"
#import "UILabel+TCSLabelSizeCalculations.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <ReactiveCocoa/RACEXTScope.h>

@interface TCSFavoriteUsersViewController (Cdmusiclibrary)
- (void)initWithUserStore:(TCSUserStore *)userStore playCountFilter:(NSUInteger)playCountFilter cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)loadViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewDidLoadCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewWillLayoutSubviewsCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewWillAppear:(BOOL)animated cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewDidAppear:(BOOL)animated cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)didReceiveMemoryWarningCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)setEditing:(BOOL)editing animated:(BOOL)animated cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)removeStupidTableHeaderBordersCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)userNameForIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)userForIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)titleForHeaderInSection:(NSInteger)section cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)doSettings:(UIBarButtonItem *)button cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)doAddFriend:(id)button cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)doImportFriends:(id)button cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)numberOfSectionsInTableView:(UITableView *)tableView cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView targetIndexPathForMoveFromRowAtIndexPath:(NSIndexPath *)sourceIndexPath toProposedIndexPath:(NSIndexPath *)proposedDestinationIndexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)footerContainerViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)addFriendButtonCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)importButtonCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)friendHintLabelCdmusiclibrary:(NSString *)cdmusiclibrary;

@end
