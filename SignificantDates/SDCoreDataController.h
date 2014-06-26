//
//  SDCoreDataController.h
//  SignificantDates
//
//  Created by Chris Wagner on 5/14/12.
//

#import <Foundation/Foundation.h>

@interface SDCoreDataController : NSObject

////////////////////////////////////////////////////////////////
//this is the singleton
+ (id)sharedInstance;



////////////////////////////////////////////////////////////////
//in commond with my app
- (NSManagedObjectContext *)newManagedObjectContext;
- (NSManagedObjectModel *)managedObjectModel;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;


- (void)saveMasterContext;
- (NSURL *)applicationDocumentsDirectory;

////////////////////////////////////////////////////////////////
//New - ???
- (NSManagedObjectContext *)masterManagedObjectContext;
- (NSManagedObjectContext *)backgroundManagedObjectContext;


- (void)saveBackgroundContext;
@end
