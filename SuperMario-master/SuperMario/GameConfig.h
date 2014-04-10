//
//  Header.h
//  SuperMario
//
//  Created by jashon on 13-11-7.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef SuperMario_Header_h
#define SuperMario_Header_h

#define kGameOrientationPortrait 1
#define kGameOrientationLandScape 2

#define GAME_ORIENTATION kGameOrientationLandScape

#define PTM_RATIO 32.0

#define BIAS_IMPULSE 3.0

#define MARIO_RUNACTION_TAG 10
#define STARMARIO_JUMPACTION_TAG 11
#define STARMARIO_STOPACTION_TAG 12
#define STARMARIO_STANDACTION_TAG 13

#define IS_PLAYER(x, y) (x.type == kGameObjectPlayer || y.type == kGameObjectPlayer)
#define IS_BRICK(x, y) (x.type == kGameObjectBrick || y.type == kGameObjectBrick)
#define IS_MUSHROOM(x, y) (x.type == kGameObjectMushRoom || y.type == kGameObjectMushRoom)
#define IS_FLOWER(x, y) (x.type == kGameObjectFlower || y.type == kGameObjectFlower)
#define IS_GOLDBRICK(x, y) (x.type == kGameObjectGoldBrick || y.type == kGameObjectGoldBrick)
#define IS_MUSHBRICK(x, y) (x.type == kGameObjectMushBrick || y.type == kGameObjectMushBrick)
#define IS_IRONBRICK(x, y) (x.type == kGameObjectIronBrick || y.type == kGameObjectIronBrick)
#define IS_FIREBALL(x, y) (x.type == kGameObjectFireBall || y.type == kGameObjectFireBall)
#define IS_ENEMY1(x, y) (x.type == kGameObjectEnemy1 || y.type == kGameObjectEnemy1)
#define IS_ENEMY2(x, y) (x.type == kGameObjectEnemy2 || y.type == kGameObjectEnemy2)
#define IS_SHRINKENEMY2(x, y) (x.type == kGameObjectShrinkEnemy2 || y.type == kGameObjectShrinkEnemy2)
#define IS_STAR(x, y) (x.type == kGameObjectStar || y.type == kGameObjectStar)
#define IS_INUP_PIPE(x, y) (x.type == kGameObjectInUpPipe || y.type == kGameObjectInUpPipe)
#define IS_INLEFT_PIPE(x, y) (x.type == kGameObjectInLeftPipe || y.type == kGameObjectInLeftPipe)

typedef enum {
    kGameObjectNone, 
    kGameObjectCoin, 
    kGameObjectPlayer,
    kGameObjectEnemy1,
    kGameObjectEnemy2,
    kGameObjectShrinkEnemy2, 
    kGameObjectFireBall,
    kGameObjectMushRoom,
    kGameObjectFlower,
    kGameObjectStar,
    kGameObjectBrick,
    kGameObjectIronBrick,
    kGameObjectGoldBrick,
    kGameObjectMushBrick,
    kGameObjectMultiCoinBrick,
    kGameObjectStarBrick,
    kGameObjectPipe,
    kGameObjectInUpPipe, 
    kGameObjectInLeftPipe, 
    kGameObjectOutPipe, 
    kGameObjectRock,
    kGameObjectPlatform
} GameObjectType;

typedef enum {
    kMarioSmall,
    kMarioLarge,
    kMarioCanFire
} MarioStatus;

typedef enum {
    kStickHeadingZero,
    kStickHeadingRight,
    kStickHeadingLeft,
    kStickHeadingUp,
    kStickHeadingDown
} StickHeading;
#endif
