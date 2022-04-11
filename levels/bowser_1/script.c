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
#include "actors/group12.h"

#include "make_const_nonconst.h"
#include "levels/bowser_1/header.h"

static const LevelScript local_objects_bowser_1_1_[] = {
OBJECT_WITH_ACTS(0,0,1307,0,0,180,0,0xa0000, bhvSpinAirborneCircleWarp,31),
RETURN()
};
static const LevelScript local_warps_bowser_1_1_[] = {
WARP_NODE(10,30,1,10,0),
WARP_NODE(240,26,1,1,0),
WARP_NODE(241,17,1,11,0),
RETURN()
};

static const LevelScript local_objects_bowser_1_2_[] = {
OBJECT_WITH_ACTS(0,0,1307,0,0,180,0,0xa0000, bhvSpinAirborneCircleWarp,31),
RETURN()
};
static const LevelScript local_warps_bowser_1_2_[] = {
WARP_NODE(10,30,2,10,0),
WARP_NODE(240,26,2,34,0),
WARP_NODE(241,17,2,2,0),
RETURN()
};
static const LevelScript local_area_bowser_1_1_[] = {
AREA(1,bowser_1_geo_0000D0),
TERRAIN(bowser_1_seg7_collision_level),
SET_BACKGROUND_MUSIC(0,7),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bowser_1_1_),
JUMP_LINK(local_warps_bowser_1_1_),
END_AREA(),
RETURN()
};
static const LevelScript local_area_bowser_1_2_[] = {
AREA(2,bowser_1_geo_0000D0),
TERRAIN(bowser_1_seg7_collision_level),
SET_BACKGROUND_MUSIC(0,7),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bowser_1_2_),
JUMP_LINK(local_warps_bowser_1_2_),
END_AREA(),
RETURN()
};
const LevelScript level_bowser_1_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bowser_1_segment_7SegmentRomStart, _bowser_1_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_bidw_skybox_mio0SegmentRomStart,_bidw_skybox_mio0SegmentRomEnd),
LOAD_MIO0(6,_group12_mio0SegmentRomStart,_group12_mio0SegmentRomEnd),
LOAD_RAW(13,_group12_geoSegmentRomStart,_group12_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, bowser_1_yellow_sphere_geo),
LOAD_MODEL_FROM_GEO(208, star_door_geo),
LOAD_MODEL_FROM_GEO(37,  key_door_geo),
JUMP_LINK(script_func_global_13),
JUMP_LINK(local_area_bowser_1_1_),
JUMP_LINK(local_area_bowser_1_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,180,0,307,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};

