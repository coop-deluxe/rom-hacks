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
#include "levels/bitfs/header.h"
extern u8 _bitfs_segment_ESegmentRomStart[]; 
extern u8 _bitfs_segment_ESegmentRomEnd[];
#include "levels/ttm/header.h"
const LevelScript level_bitfs_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ttm_segment_7SegmentRomStart, _ttm_segment_7SegmentRomEnd),
LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _mountain_mio0SegmentRomStart, _mountain_mio0SegmentRomEnd),
LOAD_RAW(0x1A, _ttmSegmentRomStart, _ttmSegmentRomEnd),
LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom33390272_skybox_mio0SegmentRomStart,_SkyboxCustom33390272_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_TTM_SLIDE_EXIT_PODIUM, ttm_geo_000DF4),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_ROLLING_LOG,       ttm_geo_000730),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_CAGE,        ttm_geo_000710),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_BLUE_SMILEY,       ttm_geo_000D14),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_YELLOW_SMILEY,     ttm_geo_000D4C),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_SMILEY,       ttm_geo_000D84),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_MOON_SMILEY,       ttm_geo_000DBC),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,     ttm_geo_000748),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,     ttm_geo_000778),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,     ttm_geo_0007A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,     ttm_geo_0007D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,     ttm_geo_000808),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,     ttm_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,     ttm_geo_000858),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,     ttm_geo_000880),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,     ttm_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,     ttm_geo_0008D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,     ttm_geo_0008F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,     ttm_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,     ttm_geo_000948),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,     ttm_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,     ttm_geo_000990),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,     ttm_geo_0009C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,     ttm_geo_0009F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,     ttm_geo_000A18),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,     ttm_geo_000A40),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bitfs_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,90,-166,-38,-324),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x1f21700),
TERRAIN(col_bitfs_1_0xe055550),
SET_BACKGROUND_MUSIC(0,38),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,-166,-38,-324,0,90,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(56,259,1237,-2528,0,0,0,0x0, bhvCustomSMSRYoshiCoin,31),
OBJECT_WITH_ACTS(56,3860,23,-3357,0,0,0,0x0, bhvCustomSMSRYoshiCoin,31),
OBJECT_WITH_ACTS(56,-1746,1001,-3642,0,0,0,0x0, bhvCustomSMSRYoshiCoin,31),
OBJECT_WITH_ACTS(0,-4151,831,4235,90,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(56,3347,1321,4089,0,0,0,0x0, bhvCustomSMSRYoshiCoin,31),
OBJECT_WITH_ACTS(100,259,806,-2528,0,0,0,0x0, bhvCustomSMSRPiranhaPlantWild,31),
OBJECT_WITH_ACTS(100,-842,-194,-4940,0,90,0,0x0, bhvCustomSMSRPiranhaPlantWild,31),
OBJECT_WITH_ACTS(0,3860,174,-3357,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(56,-6148,121,866,0,0,0,0x0, bhvCustomSMSRYoshiCoin,31),
OBJECT_WITH_ACTS(84,1959,-524,-810,0,0,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,759,-121,-4265,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,1359,-121,-4265,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,-2041,-126,-3656,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,-1641,83,-3253,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,-1841,283,-2850,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,-1841,483,-2267,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,754,673,4523,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,564,673,4523,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(194,-4178,1094,4449,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,4028,-92,-5139,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(192,3434,-419,-128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-614,586,-1347,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-6149,822,4470,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(192,-1745,-419,-4949,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(212,-6190,-926,4877,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(122,-5742,45,-527,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,3271,846,4880,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,158,586,-333,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(192,3862,-819,-2303,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,1059,-30,-4940,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(116,-550,586,4466,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1738,586,4466,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,1596,586,1647,0,0,270,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,259,818,-2528,0,0,0,0x0, bhvBowser,31),
OBJECT_WITH_ACTS(0,-842,-194,-4940,0,0,0,0x0, bhvBowser,31),
OBJECT_WITH_ACTS(0,3808,589,4454,0,0,0,0x19060000, bhvWarp,31),
OBJECT_WITH_ACTS(0,3060,1003,4472,0,270,0,0xd0000, bhvDeathWarp,128),
OBJECT_WITH_ACTS(0,3060,1003,4472,0,90,0,0xc0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-508,731,1978,0,90,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,1851,731,3715,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(15,-237,-33,2364,0,0,0,0x0, bhvCustomSMSRLavaLift,31),
OBJECT_WITH_ACTS(15,-37,-33,2364,0,0,0,0x0, bhvCustomSMSRLavaLift,31),
OBJECT_WITH_ACTS(15,163,-33,2364,0,0,0,0x0, bhvCustomSMSRLavaLift,31),
OBJECT_WITH_ACTS(15,171,-33,1624,0,180,0,0x0, bhvCustomSMSRLavaLift,31),
OBJECT_WITH_ACTS(15,-29,-33,1624,0,180,0,0x0, bhvCustomSMSRLavaLift,31),
OBJECT_WITH_ACTS(15,-229,-33,1624,0,180,0,0x0, bhvCustomSMSRLavaLift,31),
OBJECT_WITH_ACTS(122,-744,1148,1975,0,90,0,0x4000000, bhvCustomSMSRStarReplica,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,19,1,12,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,27,0),
WARP_NODE(241,26,1,28,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,33,1,10,0),
RETURN()
};
