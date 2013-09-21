//
//  SonosErrorResponse.h
//  Play
//
//  Created by Nathan Borror on 1/21/13.
//  Copyright (c) 2013 Nathan Borror. All rights reserved.
//

@import Foundation;

@interface SonosErrorResponse : NSObject <NSXMLParserDelegate>

@property (nonatomic, weak) id parentParserDelegate;
@property (nonatomic, strong) NSString *code;
@property (nonatomic, strong) NSString *string;
@property (nonatomic, strong) NSString *detail;

@end
