#import <Foundation/Foundation.h>
#import "TCSSimpleTableDataSource.h"

@interface TCSSimpleTableDataSource (Cdmusiclibrary)
- (void)initWithTableLayout:(NSArray *)tableLayout controller:(id)controller cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)initWithTableLayout:(NSArray *)tableLayout cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)dictionaryForRow:(NSInteger)row cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)cellTypeForRow:(NSInteger)row cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)cellTitleForRow:(NSInteger)row cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)cellSelectorForRow:(NSInteger)row cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)numberOfSectionsInTableView:(UITableView *)tableView cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)tableView:(UITableView *)tableView shouldHighlightRowAtIndexPath:(NSIndexPath *)indexPath cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)setCellClass:(Class)cellClass cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)setTableHeaderViewClass:(Class)tableHeaderViewClass cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)setTableFooterViewClass:(Class)tableFooterViewClass cdmusiclibrary:(NSString *)cdmusiclibrary;

@end
