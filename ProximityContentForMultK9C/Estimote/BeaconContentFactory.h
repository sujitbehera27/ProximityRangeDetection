//
//  BeaconContentFactory.h
//  ProximityContentForMultK9C
//

#import "BeaconID.h"

@protocol BeaconContentFactory <NSObject>

- (void)contentForBeaconID:(BeaconID *)beaconID completion:(void (^)(id content))completion;

@end
