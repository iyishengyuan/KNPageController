#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "SPCoverController.h"
#import "SPPageController.h"
#import "SPTabController.h"
#import "SPCoverProtocol.h"
#import "SPPageProtocol.h"
#import "SPTabProtocol.h"
#import "SPPageContentView.h"
#import "SPPageTagView.h"
#import "SPTagBarScrollView.h"

FOUNDATION_EXPORT double SPPagesVersionNumber;
FOUNDATION_EXPORT const unsigned char SPPagesVersionString[];

