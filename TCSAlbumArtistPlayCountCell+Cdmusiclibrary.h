#import <UIKit/UIKit.h>
#import "TCSAlbumArtistPlayCountCell.h"
#import "WeeklyAlbumChart.h"
#import "Album.h"
#import "Artist.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <ReactiveCocoa/RACEXTScope.h>
#import <AFNetworking/UIImageView+AFNetworking.h>

@interface TCSAlbumArtistPlayCountCell (Cdmusiclibrary)
- (void)initCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)prepareForReuseCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)setObject:(WeeklyAlbumChart *)object cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)refreshImageCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)layoutSubviewsCdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)heightForObject:(id)object atIndexPath:(NSIndexPath *)indexPath tableView:(UITableView *)tableView cdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)artistAlbumWidthForContentWidth:(CGFloat)width cdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)textLabelFontCdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)detailTextLabelFontCdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)playCountLabelFontCdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)playCountTitleLabelFontCdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)rankLabelFontCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)configureTextLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)configureDetailTextLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)configureImageViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)playCountLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)playCountTitleLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)rankLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)backViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)backSelectedViewCdmusiclibrary:(NSString *)cdmusiclibrary;

@end
