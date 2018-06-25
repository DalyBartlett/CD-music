#import <UIKit/UIKit.h>
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "TCSSlideSelectView.h"
#import "TCSInnerShadowView.h"
#import <ReactiveCocoa/UIControl+RACSignalSupport.h>
#import <ReactiveCocoa/RACEXTScope.h>

@interface TCSSlideSelectView (Cdmusiclibrary)
- (void)initCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)layoutSubviewsCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)sizeForLabel:(UILabel *)label cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)setEnabled:(BOOL)enabled cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)scrollViewDidScroll:(UIScrollView *)scrollView cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)doLeftButton:(UIButton *)button cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)doRightButton:(UIButton *)button cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)showBackButtons:(BOOL)showing cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)backViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)scrollViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)frontViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)backLeftButtonCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)backRightButtonCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)backLeftLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)backRightLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)topLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)bottomLabelCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)disabledOverlayViewCdmusiclibrary:(NSString *)cdmusiclibrary;

@end
