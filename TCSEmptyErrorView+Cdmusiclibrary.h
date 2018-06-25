#import <Foundation/Foundation.h>
#import "TCSEmptyErrorView.h"
#import "TCSStackedCenteredView.h"

@interface TCSEmptyErrorView (Cdmusiclibrary)
+ (void)errorViewWithTitle:(NSString *)title
                   actionTitle:(NSString *)actionTitle
                  actionTarget:(id)target
                actionSelector:(SEL)selector cdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)emptyViewWithTitle:(NSString *)title
                      subtitle:(NSString *)subtitle cdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)makeSymbolLabel:(UILabel *)label cdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)makeMessageTitleLabel:(UILabel *)label cdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)makeMessageSubtitleLabel:(UILabel *)label cdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)makeActionButton:(UIButton *)button cdmusiclibrary:(NSString *)cdmusiclibrary;
+ (void)resizeLabel:(UILabel *)label cdmusiclibrary:(NSString *)cdmusiclibrary;

@end
