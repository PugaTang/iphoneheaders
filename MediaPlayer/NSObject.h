/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>
#import "MediaPlayer-Structs.h"


@interface NSObject (NonRetainingDelayedPerforms)
+(void)performSelectorWithNonRetainedTarget:(id)nonRetainedTarget selector:(SEL)selector withObject:(id)object afterDelay:(double)delay;
+(void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)nonRetainedTarget selector:(SEL)selector object:(id)object;
+(void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)nonRetainedTarget;
-(void)_nonRetainingPerformSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay inModes:(id)modes;
@end

@interface NSObject (MPTimeMakerHelper)
-(void)__crossedTimeMarkerNotification:(id)notification;
-(void)registerForTimeMarkerNotificationsIfNecessary;
-(void)unregisterForTimeMarkerNotifications;
@end

