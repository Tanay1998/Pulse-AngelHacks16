#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "GQTPointQuadTreeItem.h"
#import "GClusterItem.h"
#import "GCluster.h"

@interface GQuadItem : NSObject <GCluster, GQTPointQuadTreeItem, NSCopying> 

- (id)initWithItem:(id <GClusterItem>)item;

@property(nonatomic, assign) CLLocationCoordinate2D position;

@property (nonatomic,strong) GMSMarker *marker;

@property (nonatomic, strong) NSString *username;

@property (nonatomic, strong) NSString *userList;


/**
 * Controls whether this marker will be shown on map.
 */
@property(nonatomic, assign) BOOL hidden;

@end
