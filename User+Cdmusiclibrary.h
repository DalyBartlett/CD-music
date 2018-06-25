#import <Foundation/Foundation.h>
#import "LastFMObject.h"
#import "User.h"

@interface User (Cdmusiclibrary)
+ (void)objectFromExternalDictionary:(NSDictionary *)dict cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)initWithUserName:(NSString *)userName cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)descriptionCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)initWithCoder:(NSCoder *)decoder cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)encodeWithCoder:(NSCoder *)encoder cdmusiclibrary:(NSString *)cdmusiclibrary;

@end
