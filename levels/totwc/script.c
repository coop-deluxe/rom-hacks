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

#include "levels/totwc/header.h"
const LevelScript level_totwc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
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
JUMP_LINK(local_area_totwc_1_),
JUMP_LINK(local_area_totwc_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x19001700),
TERRAIN(col_totwc_1_0xe00f038),
SET_BACKGROUND_MUSIC(0,6),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,-189,1440,5382,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,-496,-1532,-249,0,-183,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(195,2163,-1649,3951,0,-133,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(201,550,-1535,-884,0,91,0,0x0, bhvCannonClosed,31),
// OBJECT_WITH_ACTS(9,-3860,1289,-4434,0,-60,0,0x0, bhvStaticObject,31),
// OBJECT_WITH_ACTS(9,3828,-677,3536,0,-26,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(201,3826,-417,3576,0,290,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(201,-3882,1540,-4400,0,75,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(0,736,-1302,350,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(137,489,-1094,-51,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,5563,104,-337,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4241,2604,3722,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,37,1458,-6333,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-5661,677,-110,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,3686,-1458,-4643,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(215,-1940,-1458,-153,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5722,1146,-316,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5733,3594,-160,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3911,573,3771,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-216,417,6198,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4113,521,3962,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2354,-1562,3817,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3738,521,-4701,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(188,1318,-1555,-698,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-452,-1555,515,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-417,-1555,-1146,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,-4128,2344,-4500,0,44,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,-175,2448,5500,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,3806,1823,-4622,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4164,3646,3985,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-422,-1406,1015,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,423,-1406,1774,0,35,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,884,-1544,-737,0,0,0,0x640000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,2287,-1544,-176,0,-94,0,0x650000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,64,0),
WARP_NODE(241,31,1,65,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_totwc_2_[] = {
AREA(2,Geo_totwc_2_0x19001700),
TERRAIN(col_totwc_2_0xe00f268),
SET_BACKGROUND_MUSIC(0,0x27),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_2_),
JUMP_LINK(local_warps_totwc_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_2_[] = {
OBJECT_WITH_ACTS(0,714,-2293,392,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,3061,-1870,4053,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(212,847,-1269,-5941,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(122,708,5035,376,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,1459,-2201,-361,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,0,-2501,1250,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3490,-2633,-203,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-573,-701,5729,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2161,313,2535,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2459,2575,-1646,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7031,-649,-8125,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3129,-2333,-3736,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-789,469,-5051,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(85,134,-2538,800,0,0,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(195,938,-2578,52,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(201,1427,-2540,70,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(0,-3959,3698,-208,0,0,271,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3672,-2633,2601,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6198,-1479,-156,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,677,-2526,104,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,365,-2526,417,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1042,-2526,417,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,1719,-2188,52,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,731,-2578,686,0,180,0,0x20000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_totwc_2_[] = {
WARP_NODE(10,9,2,10,0),
WARP_NODE(11,9,2,12,0),
WARP_NODE(12,9,2,11,0),
WARP_NODE(13,9,2,14,0),
WARP_NODE(14,9,2,13,0),
WARP_NODE(240,26,2,30,0),
WARP_NODE(241,26,2,50,0),
WARP_NODE(0,9,2,10,0),
WARP_NODE(1,9,2,10,0),
WARP_NODE(2,9,2,10,0),
WARP_NODE(3,9,2,10,0),
WARP_NODE(4,9,2,10,0),
WARP_NODE(5,9,2,10,0),
WARP_NODE(6,9,2,10,0),
RETURN()
};
