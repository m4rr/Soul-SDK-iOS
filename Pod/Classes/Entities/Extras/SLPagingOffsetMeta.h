//
//  SLPagingOffsetMeta.h
//  Pods
//
//  Created by Mikhail on 07.03.16.
//
//

#import "SLObject.h"

@interface SLPagingOffsetMeta :SLObject

@property (nonatomic, strong) NSNumber *offset;
@property (nonatomic, strong) NSNumber *limit;
@property (nonatomic, strong) NSNumber *total;

@end