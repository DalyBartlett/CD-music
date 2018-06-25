#import <Foundation/Foundation.h>
#import "LastFMObject.h"
#import "Album.h"
#import "Artist.h"

@interface Album (Cdmusiclibrary)
+ (void)objectFromExternalDictionary:(NSDictionary *)dict cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)populateFromExternalDictionary:(NSDictionary *)dict cdmusiclibrary:(NSString *)cdmusiclibrary;

@end
