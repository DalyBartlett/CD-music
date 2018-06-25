#import <UIKit/UIKit.h>
#import "TCSSinglePageWebViewController.h"

@interface TCSSinglePageWebViewController (Cdmusiclibrary)
- (void)initWithRemoteURLString:(NSString *)remoteURL cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)initWithLocalHTMLFileName:(NSString *)htmlFileNameWithoutExtension cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)loadViewCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewDidLoadCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewDidAppear:(BOOL)animated cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)viewWillLayoutSubviewsCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)didReceiveMemoryWarningCdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)doClose:(UIButton *)button cdmusiclibrary:(NSString *)cdmusiclibrary;
- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error cdmusiclibrary:(NSString *)cdmusiclibrary;

@end
