//
//  FTCSprite.h
//  FlashToCocos
//
//  Created by Jordi.Martinez on 9/14/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "FTCFrameInfo.h"

@class  FTCCharacter;

@interface FTCSprite : CCSprite 
{
    CCNode          *debugDrawingNode;
    NSArray         *currentAnimationInfo;
    FTCCharacter    *currentCharacter;
}

@property (strong) NSString              *name;
@property (unsafe_unretained) BOOL       ignoreRotation;
@property (unsafe_unretained) BOOL       ignorePosition;
@property (unsafe_unretained) BOOL       ignoreScale;
@property (unsafe_unretained) BOOL       ignoreAlpha;

@property (strong) NSMutableDictionary   *animationsArr;


// private
-(void) setCurrentAnimation:(NSString *)_framesId forCharacter:(FTCCharacter *)_character;
-(void) setCurrentAnimationFramesInfo:(NSArray *)_framesInfoArr forCharacter:(FTCCharacter *)_character;
-(void) applyFrameInfo:(FTCFrameInfo *)_frameInfo;
-(void) playFrame:(int)_frameindex;
@end
