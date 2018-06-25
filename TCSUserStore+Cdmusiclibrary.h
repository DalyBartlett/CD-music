#import <Foundation/Foundation.h>
#import "TCSUserStore.h"
#import "User.h"
#import <ReactiveCocoa/ReactiveCocoa.h>

@interface TCSUserStore (Cdmusiclibrary)
- (void)initCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)deallocCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)setUser:(User *)user cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)friendsCountCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)friendCountChangedCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)friendAtIndex:(NSUInteger)index cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)addFriend:(User *)user cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)addFriends:(NSArray *)friends cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)removeFriendAtIndex:(NSUInteger)index cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)removeAllFriendsCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)replaceFriendAtIndex:(NSUInteger)index withFriend:(User *)user cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)moveFriendAtIndex:(NSUInteger)fromIndex toIndex:(NSUInteger)toIndex cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)saveCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)loadCdmusiclibrary:(NSString *)cdmusiclibrary;

@end
