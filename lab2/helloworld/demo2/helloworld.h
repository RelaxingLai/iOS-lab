//
//  helloworld.h
//  lab1
//
//  Created by 阮帅 on 18/12/3.
//  Copyright © 2018年 ruansh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface helloworld : NSObject
@property(strong, nonatomic)NSString *something;
+ (NSString *)sayHelloWorld;
- (NSString *)saysomething;
- (NSString *)sayHello:(NSString *)greeting;
@end
