#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bowser_3/header.h"

static const LevelScript local_objects_bowser_3_1_[] = {
OBJECT_WITH_ACTS(0,0,1307,0,0,183,0,0xa0000, bhvSpinAirborneCircleWarp,31),
OBJECT_WITH_ACTS(145,-625,445,-885,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(0,-1354,445,1823,0,138,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,1406,445,1927,0,215,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-2135,445,-729,0,68,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,0,445,-2240,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,2083,445,-729,0,294,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(145,573,445,-885,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,-938,445,313,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,990,445,313,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,0,445,1094,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(179,-2122,512,-2912,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,-3362,512,1121,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,0,512,3584,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,3363,512,1121,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,2123,512,-2912,0,0,0,0x0, bhvBowserBomb,31),
RETURN()
};
static const LevelScript local_warps_bowser_3_1_[] = {
WARP_NODE(10,34,1,10,0),
WARP_NODE(241,21,1,11,0),
RETURN()
};

static const LevelScript local_objects_bowser_3_2_[] = {
OBJECT_WITH_ACTS(0,0,1307,0,0,183,0,0xa0000, bhvSpinAirborneCircleWarp,31),
OBJECT_WITH_ACTS(0,-2091,386,-708,0,99,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,2091,386,-708,0,262,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,0,386,-2220,0,330,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,0,386,-2220,0,27,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-1126,386,-836,0,120,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,1062,386,-836,0,236,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,0,386,-1769,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-1448,386,-450,0,99,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,1448,386,-450,0,263,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-354,386,-1029,0,333,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(179,-2122,512,-2912,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,-81,512,-4380,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(0,257,386,-1062,0,27,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,0,386,-901,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(179,2123,512,-2912,0,0,0,0x0, bhvBowserBomb,31),
RETURN()
};
static const LevelScript local_warps_bowser_3_2_[] = {
WARP_NODE(10,34,2,10,0),
WARP_NODE(241,21,2,11,0),
RETURN()
};
static const LevelScript local_area_bowser_3_1_[] = {
AREA(1,bowser_3_geo_000398),
TERRAIN(bowser_3_seg7_collision_level),
SET_BACKGROUND_MUSIC(0,25),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bowser_3_1_),
JUMP_LINK(local_warps_bowser_3_1_),
END_AREA(),
RETURN()
};
static const LevelScript local_area_bowser_3_2_[] = {
AREA(2,bowser_3_geo_000398),
TERRAIN(bowser_3_seg7_collision_level),
SET_BACKGROUND_MUSIC(0,25),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bowser_3_2_),
JUMP_LINK(local_warps_bowser_3_2_),
END_AREA(),
RETURN()
};
const LevelScript level_bowser_3_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bowser_3_segment_7SegmentRomStart, _bowser_3_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _fire_mio0SegmentRomStart, _fire_mio0SegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(6,_group12_mio0SegmentRomStart,_group12_mio0SegmentRomEnd),
LOAD_RAW(13,_group12_geoSegmentRomStart,_group12_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_1,  bowser_3_geo_000290),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_2,  bowser_3_geo_0002A8),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_3,  bowser_3_geo_0002C0),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_4,  bowser_3_geo_0002D8),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_5,  bowser_3_geo_0002F0),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_6,  bowser_3_geo_000308),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_7,  bowser_3_geo_000320),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_8,  bowser_3_geo_000338),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_9,  bowser_3_geo_000350),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_10, bowser_3_geo_000368),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,            bowser_3_geo_000380),
LOAD_MODEL_FROM_GEO(208, star_door_geo),
LOAD_MODEL_FROM_GEO(37,  key_door_geo),
JUMP_LINK(script_func_global_13),
JUMP_LINK(local_area_bowser_3_1_),
JUMP_LINK(local_area_bowser_3_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,183,0,307,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};

