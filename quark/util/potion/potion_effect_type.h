//
//  potion_effect_type.h
//  quark
//
//  Created by Evan Anderson on 11/3/22.
//

#ifndef potion_effect_type_h
#define potion_effect_type_h

struct PotionEffectType {
    const char *identifier;
};

void potion_effect_type_destroy(struct PotionEffectType *type);

extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_ABSORPTION;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_BAD_OMEN;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_BLINDNESS;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_CONDUIT_POWER;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_CONFUSION;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_DAMAGE_RESISTANCE;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_DARKNESS;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_DOLPHINS_GRACE;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_FIRE_RESISTANCE;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_GLOWING;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_HARM;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_HASTE;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_HEAL;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_HEALTH_BOOST;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_HERO_OF_THE_VILLAGE;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_HUNGER;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_INVISIBILITY;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_JUMP_BOOST;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_LEVITATION;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_LUCK;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_MINING_FATIGUE;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_NIGHT_VISION;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_POISON;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_REGENERATION;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_SATURATION;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_SLOWNESS;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_SLOW_FALLING;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_SPEED;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_STRENGTH;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_UNLUCK;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_WATER_BREATHING;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_WEAKNESS;
extern struct PotionEffectType POTION_EFFECT_TYPE_MINECRAFT_WITHER;

#endif /* potion_effect_type_h */
