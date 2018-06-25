#import <Foundation/Foundation.h>
#import "LastFMObject.h"

@interface LastFMObject (Cdmusiclibrary)
+ (void)objectFromExternalDictionary:(NSDictionary *)dict cdmusiclibrary:(NSString *)cdmusiclibrary;

@end
