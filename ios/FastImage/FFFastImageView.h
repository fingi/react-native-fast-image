#import <UIKit/UIKit.h>

#import <SDWebImage/UIImageView+WebCache.h>
#import <SDWebImage/SDWebImageDownloader.h>
#import "FLAnimatedImageView.h"

#import "RCTComponent.h"
#import "RCTResizeMode.h"

#import "FFFastImageSource.h"

@interface FFFastImageView : FLAnimatedImageView

@property (nonatomic, copy) RCTDirectEventBlock onFastImageLoadStart;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageProgress;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageError;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageLoad;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageLoadEnd;
@property (nonatomic, assign) RCTResizeMode resizeMode;
@property (nonatomic, strong) FFFastImageSource *source;

@end

