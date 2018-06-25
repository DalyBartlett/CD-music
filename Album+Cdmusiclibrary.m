#import "Album+Cdmusiclibrary.h"
@implementation Album (Cdmusiclibrary)
+ (void)objectFromExternalDictionary:(NSDictionary *)dict cdmusiclibrary:(NSString *)cdmusiclibrary {
    NSLog(@"%@", cdmusiclibrary);
}
- (void)populateFromExternalDictionary:(NSDictionary *)dict cdmusiclibrary:(NSString *)cdmusiclibrary {
    NSLog(@"%@", cdmusiclibrary);
}

@end
