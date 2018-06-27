#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#elif __has_include("React/RCTBridgeModule.h")
#import "React/RCTBridgeModule.h"
#else
#import "RCTBridgeModule.h"
#endif

#ifndef ReactNativeConfig_Bunch
#define ReactNativeConfig_Bunch
@interface ReactNativeConfig : NSObject <RCTBridgeModule>

+ (NSDictionary *)env;
+ (NSString *)envFor: (NSString *)key;

@end
#endif /* ReactNativeConfig_Bunch */

