//
//  SNECharacter.h
//  PirateAdventure
//
//  Created by Sebastian Neamtu on 14/04/14.
//  Copyright (c) 2014 Sebastian Neamtu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SNEWeapon.h"
#import "SNEArmor.h"

@interface SNECharacter : NSObject

@property (nonatomic) int damage;
@property (nonatomic) int health;
@property (strong, nonatomic) SNEArmor *armor;
@property (strong, nonatomic) SNEWeapon *weapon;

@end
