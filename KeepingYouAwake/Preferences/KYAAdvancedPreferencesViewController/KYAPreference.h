//
//  KYAPreference.h
//  KeepingYouAwake
//
//  Created by Marcel Dierkes on 18.12.15.
//  Copyright © 2015 Marcel Dierkes. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KYAPreference : NSObject
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *defaultsKey;
@property (nonatomic, readwrite) BOOL value;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithTitle:(NSString *)title defaultsKey:(NSString *)defaultsKey;

/// Reset the preference to its default value.
/// @note Do not forget to synchronize user defaults afterwards.
- (void)reset;

@end

NS_ASSUME_NONNULL_END
