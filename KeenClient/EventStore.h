//
//  EventStore.h
//  KeenClient
//
//  Created by Cory Watson on 3/26/14.
//  Copyright (c) 2014 Keen Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

@interface EventStore : NSObject

 /**
  Add an event to the store.
  */
- (BOOL)addEvent: (NSString *)eventData;

 /**
  Get a list of events that are ready to send to Keen. Events that are
  returned have been flagged as pending in the underlying store.
  */
- (void)getEvents: (NSMutableArray **)events;

 /**
  Purge pending events that were returned from a previous call to getEvents.
  */
- (void)purgeEvents;
@end
