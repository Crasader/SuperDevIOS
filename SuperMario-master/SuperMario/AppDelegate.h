//
//  AppDelegate.h
//  SuperMario
//
//  Created by jashon on 13-11-5.
//  Copyright __MyCompanyName__ 2013年. All rights reserved.
//
#import "MainGameLayer.h"
#import "DownWorldLayer.h"
#import "GameInfoLayer.h"
#import "StartLayer.h"
#import "SelectLayer.h"
#import "Level.h"
#import <CoreData/CoreData.h>
#import "SimpleAudioEngine.h"
#import "IntroLayer.h"
#import "GameConfig.h"

@class MainGameScene;
@class DownWorldScene;
@class GameInfoScene;
@class SelectScene;
@class Level;

@interface AppController : NSObject <UIApplicationDelegate, CCDirectorDelegate>
{
	UIWindow *window_;
	UINavigationController *navController_;
    
    CCScene *startScene_;
    GameInfoScene *gameInfoScene_;
    SelectScene *selectScene_;
    MainGameScene *mainGameScene_;
    DownWorldScene *downWorldScene_;
    NSMutableArray *levels_;
    NSMutableArray *levelIndexInCoreData_;
    
    NSManagedObjectContext *coreDataContext_;
    NSPersistentStoreCoordinator *sharedPsc_;
    
    int curLevelNum_;
    int curScore_;
    int curLives_;
    int curCoinNum_;
    int timer_;
    MarioStatus marioStatus_;
    BOOL isMarioDownWorld_;
    BOOL isSoundOn_;
    
    SimpleAudioEngine *soundEngin_;
	
	CCDirectorIOS	*director_;							// weak ref
}

@property (nonatomic, retain) UIWindow *window;
@property (readonly) UINavigationController *navController;
@property (readonly) CCDirectorIOS *director;

@property (nonatomic, retain) CCScene *startScene;
@property (nonatomic, retain) GameInfoScene *gameInfoScene;
@property (nonatomic, retain) SelectScene *selectScene;
@property (nonatomic, retain) MainGameScene *mainGameScene;
@property (nonatomic, retain) DownWorldScene *downWorldScene;
@property (nonatomic, retain) NSMutableArray *levels;
@property (nonatomic, retain) NSMutableArray *levelIndexInCoreData;
@property (nonatomic, assign) int curLevelNum;
@property (nonatomic, retain) NSManagedObjectContext *coreDataContext;
@property (nonatomic, retain) NSPersistentStoreCoordinator *sharedPsc;
@property (nonatomic, assign) int curScore;
@property (nonatomic, assign) int curLives;
@property (nonatomic, assign) int curCoinNum;
@property (nonatomic, assign) int timer;
@property (nonatomic, retain) SimpleAudioEngine *soundEngin;
@property (nonatomic, readwrite) MarioStatus marioStatus;
@property (nonatomic, readwrite) BOOL isMarioDownWorld;
@property (nonatomic, readwrite) BOOL isSoundOn;

- (Level *)currentLevel;
- (void) loadStartScene;
- (void) loadSelectScene;
- (void) loadGameInfoScene;
- (void) loadMainGameScene;
- (void) loadDownWorldScene;
- (void) nextLevel;
- (void) levelComplete;
- (void) restartGame;


@end
