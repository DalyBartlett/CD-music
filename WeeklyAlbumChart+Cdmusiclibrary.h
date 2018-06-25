#import "LastFMObject.h"
#import "WeeklyAlbumChart.h"
#import "Album.h"
#import "Artist.h"

@interface WeeklyAlbumChart (Cdmusiclibrary)
+ (void)objectFromExternalDictionary:(NSDictionary *)dict cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)playcountValueCdmusiclibrary:(NSString *)cdmusiclibrary;

@end
