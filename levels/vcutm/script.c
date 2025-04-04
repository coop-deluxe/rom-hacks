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

#include "levels/vcutm/header.h"
const LevelScript level_vcutm_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(208, star_door_geo),
LOAD_MODEL_FROM_GEO(37,  key_door_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
LOAD_MODEL_FROM_GEO(55, lll_geo_sinking_rock),
LOAD_MODEL_FROM_GEO(58, lll_geo_rotate_firebars),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_vcutm_1_),
JUMP_LINK(local_area_vcutm_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x19001700),
TERRAIN(col_vcutm_1_0xe026e48),
SET_BACKGROUND_MUSIC(0,34),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,-6187,-852,-914,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,5269,-1394,-762,0,-154,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(122,-6567,-2830,-865,0,107,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1878,-1211,-7266,0,-151,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-273,-729,-1040,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,1510,365,4751,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,2551,2917,4340,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1444,4063,-1091,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,5208,-1302,-2500,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2448,-1302,2396,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6250,-1198,-1667,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2763,-1146,5052,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1579,564,3452,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1354,885,6198,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1912,-1302,3863,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-377,2344,5519,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,3049,-1302,1561,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,1652,-1041,5024,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-616,2969,896,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-214,-885,750,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-365,1406,5052,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-417,2656,938,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(103,-105,-1402,2708,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(207,-2083,-1402,4740,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-237,-318,3593,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-237,-318,3781,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,919,-313,3641,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,919,-313,3825,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(223,-3346,-1402,4655,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(220,-470,0,-5769,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,-3399,-1316,-1454,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(223,-233,-1394,-3441,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(220,1051,3333,1690,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(129,990,2344,998,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,990,2344,834,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,2708,2344,2604,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,2708,2344,2423,0,0,0,0x0, bhvBreakableBox,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,66,0),
WARP_NODE(241,31,1,67,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_vcutm_2_[] = {
AREA(2,Geo_vcutm_2_0x19001700),
TERRAIN(col_vcutm_2_0xe025f88),
SET_BACKGROUND_MUSIC(0,0x2B),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_vcutm_2_),
JUMP_LINK(local_warps_vcutm_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_2_[] = {
OBJECT_WITH_ACTS(0,6250,-1258,-1250,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,-5355,-1436,-1168,0,0,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(122,-2350,-384,-5604,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-1438,347,4413,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,480,-1732,4680,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-2500,3073,4063,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,316,312,-5364,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(0,1406,4063,-1406,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-5573,-1198,-260,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3066,-625,-6401,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2969,1510,1250,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2969,625,1250,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-71,3490,14,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,468,3333,-1399,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,9,-1198,5714,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2031,0,52,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(124,6302,-1414,-729,0,180,0,0x80000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(137,-1561,-1094,4427,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(207,-1563,-1444,4637,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,262,-2708,4692,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,202,-417,3085,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-764,-417,3145,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(212,7083,-1406,-1250,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(103,365,-1324,-1927,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(103,417,730,3333,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(180,-2813,-1347,-1458,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2500,-1347,-1354,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2865,-837,4740,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2813,-536,3698,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1719,45,2552,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,313,-1467,-5469,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(223,208,-1436,-3698,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,365,-1436,-3906,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,414,2449,4172,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,677,2448,4115,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,417,2448,885,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,260,-1444,313,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2083,-1564,-7552,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2656,2448,469,0,0,0,0x0, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_vcutm_2_[] = {
WARP_NODE(10,9,2,10,0),
WARP_NODE(11,9,2,12,0),
WARP_NODE(12,9,2,11,0),
WARP_NODE(13,9,2,14,0),
WARP_NODE(14,9,2,13,0),
WARP_NODE(240,31,2,1,0),
WARP_NODE(241,31,2,2,0),
WARP_NODE(0,9,2,10,0),
WARP_NODE(1,9,2,10,0),
WARP_NODE(2,9,2,10,0),
WARP_NODE(3,9,2,10,0),
WARP_NODE(4,9,2,10,0),
WARP_NODE(5,9,2,10,0),
WARP_NODE(6,9,2,10,0),
RETURN()
};
