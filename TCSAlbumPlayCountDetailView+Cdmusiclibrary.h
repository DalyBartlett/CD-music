#import <UIKit/UIKit.h>
#import "TCSAlbumPlayCountDetailView.h"
#import "UILabel+TCSLabelSizeCalculations.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <ReactiveCocoa/RACEXTScope.h>

@interface TCSAlbumPlayCountDetailView (Cdmusiclibrary)
- (void)initCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)layoutSubviewsCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)setLabelSizeForLabel:(UILabel *)label width:(CGFloat)width cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)drawRect:(CGRect)rect cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)playCountWeekLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)playWeekLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)durationWeekLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)playCountAllTimeLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)playAllTimeLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)durationAllTimeLabelCdmusiclibrary:(NSString *)cdmusiclibrary;

@end
