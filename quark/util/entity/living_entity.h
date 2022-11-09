//
//  living_entity.h
//  quark
//
//  Created by Evan Anderson on 11/3/22.
//

#ifndef living_entity_h
#define living_entity_h

#include <stdio.h>
#include "damageable.h"
#include "entity_equipment.h"
#include "../potion/potion_effect.h"

typedef struct LivingEntity {
    Damageable *damageable;
    struct LivingEntity *killer;
    struct EntityEquipment equipment;
    
    _Bool can_pickup_items;
    _Bool has_ai;
    
    _Bool is_collidable;
    _Bool is_invisible;
    _Bool is_leashed;
    _Bool is_swimming;
    _Bool is_riptiding;
    
    struct PotionEffect *potion_effects;
    
    double eye_height;
    
    int no_damage_ticks;
    int no_damage_ticks_maximum;
    
    int air_remaining;
    int air_maximum;
} LivingEntity;

void freeLivingEntity(LivingEntity *entity);

enum EntityDamageResult damageLivingEntity(LivingEntity *entity, double amount);

void tickLivingEntity(LivingEntity *entity);

void swingMainHand(LivingEntity *entity);
void swingOffHand(LivingEntity *entity);

_Bool hasPotionEffect(LivingEntity *entity, enum PotionEffectType type);
void addPotionEffect(LivingEntity *entity, enum PotionEffectType type, int amplifier, int duration);
void removePotionEffect(LivingEntity *entity, enum PotionEffectType type);

#endif /* living_entity_h */
