#import <UIKit/UIKit.h>
#import "TCSSimpleTableDataSource.h"
#import "TCSSettingsCells.h"

@interface TCSSettingsCell (Cdmusiclibrary)
- (void)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)prepareForReuseCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)didTransitionToState:(UITableViewCellStateMask)state cdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)fontCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)setTitleText:(NSString *)text cdmusiclibrary:(NSString *)cdmusiclibrary;

@end
