//
//  UIWebImageView.m

#import "UIWebImageView.h"
#import "AppDelegate.h"
#import "SLEngine.h"

@implementation UIWebImageView

@synthesize url = _url;

- (void)setUrl:(NSURL *)url
{
    AppDelegate *appDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    [appDelegate.sharedEngine imageAtURL:url size:self.frame.size completionHandler:
        ^(UIImage *fetchedImage, NSURL *url, BOOL isInCache) {
            self.image = fetchedImage;
        } errorHandler: ^(MKNetworkOperation *completedOperation, NSError *error) {
            NSLog(@"Error downloading image from %@", url);
        }];
}

@end
