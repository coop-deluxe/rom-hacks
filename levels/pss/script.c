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

#include "levels/pss/header.h"
const LevelScript level_pss_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(208, star_door_geo),
LOAD_MODEL_FROM_GEO(37,  key_door_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_pss_1_),
JUMP_LINK(local_area_pss_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x19001700),
TERRAIN(col_pss_1_0xe0139f8),
SET_BACKGROUND_MUSIC(0,9),
TERRAIN_TYPE(6),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,-1250,4825,-3431,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,150,-7214,2110,0,-154,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,-3296,4981,1385,0,-89,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1903,-6216,5194,0,91,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-1369,-7409,2273,0,-151,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-84,-7604,3711,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5040,4896,-3967,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1060,4583,-4089,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1767,4792,-2738,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1986,2500,3768,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1121,-313,704,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1538,-1302,-2697,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3398,-3958,-3141,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(124,-1468,4312,-2928,0,183,0,0x660000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,1928,1042,5120,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-866,-1615,-3787,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4479,-3906,-2865,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,-2587,-2396,-3277,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,1930,-7604,2038,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(192,-2440,4375,-3264,0,0,0,0x0, bhvGoomba,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,68,0),
WARP_NODE(241,31,1,69,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_pss_2_[] = {
AREA(2,Geo_pss_2_0x19001700),
TERRAIN(col_pss_2_0xe01a9a8),
SET_BACKGROUND_MUSIC(0,9),
TERRAIN_TYPE(6),
JUMP_LINK(local_objects_pss_2_),
JUMP_LINK(local_warps_pss_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_2_[] = {
OBJECT_WITH_ACTS(0,2084,4877,-3219,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,173,-6900,2260,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-7384,-3613,959,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,1017,4409,-332,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,1867,-6367,2250,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,2352,2865,4958,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2881,2969,2958,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1654,2031,5398,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1048,625,2418,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,165,-938,-2138,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2755,-3490,-3250,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4124,-3802,-2410,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,540,-7344,2230,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,3604,4014,3610,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,2904,2708,2956,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1779,2656,1025,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1046,2656,103,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,983,3281,-573,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(188,2553,4616,-3062,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(180,5439,5293,-1038,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5290,5310,-452,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3318,4932,-62,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3301,4932,586,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3322,4932,1003,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,2393,3073,1458,0,-90,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,420,2240,4219,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,156,2500,4219,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-104,2188,4219,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,1458,-2448,-2500,0,-90,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-3757,-3698,-3131,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-4737,-3958,-3125,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(212,-5781,-3542,-1094,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_pss_2_[] = {
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
