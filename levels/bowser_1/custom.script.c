#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/bowser_1/header.h"
extern u8 _bowser_1_segment_ESegmentRomStart[]; 
extern u8 _bowser_1_segment_ESegmentRomEnd[];
#include "levels/lll/header.h"
const LevelScript level_bowser_1_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _fire_mio0SegmentRomStart, _fire_mio0SegmentRomEnd),
LOAD_RAW(0x1A, _lllSegmentRomStart, _lllSegmentRomEnd),
LOAD_RAW(0x0E, _bowser_1_segment_ESegmentRomStart, _bowser_1_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom43482816_skybox_mio0SegmentRomStart,_SkyboxCustom43482816_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group6_mio0SegmentRomStart,_group6_mio0SegmentRomEnd),
LOAD_RAW(12,_group6_geoSegmentRomStart,_group6_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                  lll_geo_0009E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                  lll_geo_0009F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                  lll_geo_000A10),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                  lll_geo_000A28),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                  lll_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                  lll_geo_000A60),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                  lll_geo_000A90),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,                  lll_geo_000AA8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                  lll_geo_000AC0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,                  lll_geo_000AD8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                  lll_geo_000AF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART,                lll_geo_000B20),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS,       lll_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING,        lll_geo_000BB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   lll_geo_000BC8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS,       lll_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM,        lll_geo_000BF8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1,                 lll_geo_000C10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2,                 lll_geo_000C30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3,                 lll_geo_000C50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4,                 lll_geo_000C70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5,                 lll_geo_000C90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6,                 lll_geo_000CB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7,                 lll_geo_000CD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8,                 lll_geo_000CF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9,                 lll_geo_000D10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10,                lll_geo_000D30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11,                lll_geo_000D50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12,                lll_geo_000D70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13,                lll_geo_000D90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14,                lll_geo_000DB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK,             lll_geo_000DD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG,                    lll_geo_000DE8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM,    lll_geo_000A78),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE,                    lll_geo_000B50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE,              lll_geo_000B68),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM,               lll_geo_000B80),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM,         lll_geo_000B98),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP,           lll_geo_000EA8),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, custom_castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, custom_castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, custom_castle_door_3_star_geo),
LOAD_MODEL_FROM_GEO(37, custom_key_door_geo),
LOAD_MODEL_FROM_GEO(38, custom_castle_door_geo),
// LOAD_MODEL_FROM_DL(84,0x05000840,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_7),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bowser_1_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,-899,-406,-1088),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_1_1_[] = {
AREA(1,Geo_bowser_1_1_0x28c1700),
TERRAIN(col_bowser_1_1_0xe024f70),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bowser_1_1_),
JUMP_LINK(local_warps_bowser_1_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_1_1_[] = {
OBJECT_WITH_ACTS(0,-899,-406,-1088,0,0,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,2797,-261,-2961,0,0,0,0x0, bhvBowser,31),
OBJECT_WITH_ACTS(100,-294,-307,130,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-4625,92,1112,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,1791,992,4202,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,4282,-307,-4,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-1390,692,-3906,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(55,-4177,-1126,-1515,0,0,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(55,-3650,-1126,-1515,0,0,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(55,-3153,-1126,-1515,0,0,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(84,-1316,273,4691,0,0,0,0x0, bhvMontyMoleHole,31),
OBJECT_WITH_ACTS(84,-1193,273,5306,0,0,0,0x0, bhvMontyMoleHole,31),
OBJECT_WITH_ACTS(84,1705,273,4750,0,0,0,0x0, bhvMontyMoleHole,31),
OBJECT_WITH_ACTS(84,-337,273,-4262,0,0,0,0x0, bhvMontyMoleHole,31),
OBJECT_WITH_ACTS(84,-350,273,-3477,0,0,0,0x0, bhvMontyMoleHole,31),
OBJECT_WITH_ACTS(85,3754,0,3815,0,0,0,0x0, bhvMontyMole,31),
OBJECT_WITH_ACTS(85,3754,0,3815,0,0,0,0x10000, bhvMontyMole,31),
OBJECT_WITH_ACTS(194,1447,-733,-2136,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,551,-735,890,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-1797,-874,-2163,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(192,-4068,-333,349,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,3144,-709,919,0,89,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-1910,-241,766,0,116,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,232,-642,3109,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(107,-3004,-560,-4248,0,0,0,0x0, bhvWoodenPost,31),
OBJECT_WITH_ACTS(107,-512,-151,-5292,0,0,0,0x0, bhvWoodenPost,31),
OBJECT_WITH_ACTS(116,-4400,26,2207,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-4803,-687,-1350,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1033,673,3918,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,787,473,4750,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,2213,273,4212,0,0,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(192,-1316,-241,-5046,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-2614,-678,-3444,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2215,-926,-750,0,0,0,0x0, bhvGoomba,31),
RETURN()
};
const LevelScript local_warps_bowser_1_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,39,0),
WARP_NODE(241,17,1,12,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
