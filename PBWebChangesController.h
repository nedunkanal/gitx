//
//  PBWebChangesController.h
//  GitX
//
//  Created by Pieter de Bie on 22-09-08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PBWebController.h"
#import "PBGitCommitController.h"
#import "PBChangedFile.h"

@interface PBWebChangesController : PBWebController {
	IBOutlet NSArrayController *unstagedFilesController;
	IBOutlet NSArrayController *cachedFilesController;
	IBOutlet PBGitCommitController *controller;
}

- (void) showDiff:(PBChangedFile *)file cached:(BOOL)cached;
@end
