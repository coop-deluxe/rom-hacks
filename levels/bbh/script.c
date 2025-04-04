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

#include "levels/bbh/header.h"

static const LevelScript level_bbh_POSTLOAD[] = {
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(local_area_bbh_1_),
JUMP_LINK(local_area_bbh_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};

//AREA 2 LOADS
static const LevelScript level_bbh_area2load[] = {
LOAD_MIO0(5,_group4_mio0SegmentRomStart,_group4_mio0SegmentRomEnd),
LOAD_RAW(12,_group4_geoSegmentRomStart,_group4_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
JUMP_LINK(script_func_global_5),
LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, grate_door_geo),
JUMP_LINK(script_func_global_14),
JUMP(level_bbh_POSTLOAD)
};

const LevelScript level_bbh_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MODEL_FROM_GEO(208, star_door_geo),
LOAD_MODEL_FROM_GEO(37,  key_door_geo),
JUMP_AREA(0,2,level_bbh_area2load),
//AREA 1 LOADS
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP(level_bbh_POSTLOAD)
};

const LevelScript local_area_bbh_1_[] = {
AREA(1,Geo_bbh_1_0x19001700),
TERRAIN(col_bbh_1_0xe020f10),
SET_BACKGROUND_MUSIC(0,19),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bbh_1_),
JUMP_LINK(local_warps_bbh_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_1_[] = {
OBJECT_WITH_ACTS(0,-74,-2206,-5082,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,-2211,3934,364,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(207,4518,-1270,3488,0,270,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(137,3275,556,2181,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,397,3893,-4809,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2442,-781,1616,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,103,4010,5644,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,2334,-1979,5401,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-5272,-885,1660,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,6036,781,1988,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-14,1771,5681,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-138,3854,-4777,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,2172,-2240,-5141,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3548,1250,-2607,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3708,-1198,1722,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6234,-1198,572,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-10,-2344,2710,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-124,-2344,-569,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2522,1615,5071,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5833,208,5285,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,4802,-885,5817,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4535,-469,5809,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3962,-365,5799,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5160,-365,5820,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3961,-179,4787,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,3961,-179,4593,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,3957,-156,3354,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,4541,157,2181,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,4367,-10,2175,0,90,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(140,-2504,-65,-4419,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-2371,-36,-4581,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2600,0,-4538,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2607,0,-4324,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2393,0,-4316,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2221,0,-4492,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2217,0,-4327,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2228,0,-4112,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2225,0,-4656,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2440,0,-4667,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2605,0,-4663,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2393,0,-4108,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2607,0,-4119,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2769,0,-4659,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2765,0,-4494,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2761,0,-4330,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2772,0,-4115,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,3527,-1242,-1917,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,5027,-1242,-587,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,-3222,-1242,3590,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(212,-3741,-1198,4575,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,217,-1406,-3125,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2080,-1406,-4053,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3136,-1354,-4657,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2862,-1354,-4647,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1599,-1094,-225,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6180,-1146,3511,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4531,-1094,3958,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4115,-833,-2552,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5000,-156,-1572,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4029,573,-619,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4323,2188,313,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4219,2083,2656,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2260,1094,693,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3346,104,5270,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-439,3802,-4326,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,583,3906,-4339,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(101,144,-2344,-4112,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-1762,-2240,-4752,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(84,4612,-1094,2754,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-1081,-1146,3296,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-735,-990,-1011,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,4337,3958,2514,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,27,3906,584,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-4874,-417,-2221,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(124,296,-2414,-4932,0,257,0,0x6c0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-1588,-1238,3633,0,180,0,0x6d0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,2386,-1061,1384,0,0,0,0x6e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-1387,-1525,-2968,0,-149,0,0x6f0000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_bbh_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,62,0),
WARP_NODE(241,31,1,63,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_bbh_2_[] = {
AREA(2,Geo_bbh_2_0x19001700),
TERRAIN(col_bbh_2_0xe02ffb8),
SET_BACKGROUND_MUSIC(0,0x25),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bbh_2_),
JUMP_LINK(local_warps_bbh_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_2_[] = {
OBJECT_WITH_ACTS(0,0,4096,0,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,249,1433,401,0,0,0,0x0, bhvHiddenStar,31),
OBJECT_WITH_ACTS(88,-5039,-4321,-3648,0,0,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(88,2474,-4637,-4587,0,180,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(88,3396,-2368,-4517,0,90,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(88,3511,-4136,1981,0,134,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(88,-1775,-4617,5489,0,90,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(0,2453,-4583,-4636,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-5052,-4271,-3594,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,3490,-2344,-4531,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-1683,-4583,5468,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,3537,-4115,1935,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,1251,6510,-2793,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,524,6146,658,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,0,6146,677,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-281,6146,1175,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1331,6146,-4015,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-510,6146,-2280,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1036,6146,-1792,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-815,6146,-1021,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-910,6146,2671,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,-4684,-3958,2710,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,6563,-1615,-1354,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,179,5781,3016,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,45,6406,-418,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(217,1179,5938,2980,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(137,-110,5573,-2316,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2071,6458,2835,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-998,6458,-3001,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,-839,6026,1924,0,-90,0,0x40000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-469,1302,363,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1406,1198,365,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,77,-4698,6354,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,204,-729,-4914,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6250,-4173,-2656,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2524,-3841,3240,0,180,-90,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3007,-2656,2292,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5731,-4063,1440,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2136,-3385,4792,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2039,5260,-2233,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1555,5313,2177,331,0,2,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(207,268,1146,-412,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,1299,4844,128,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(105,1765,5052,2407,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,110,5000,-4451,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-103,5000,2024,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(0,-260,-3542,4583,0,0,0,0x0, bhvFish3,31),
OBJECT_WITH_ACTS(0,-885,0,-1875,0,0,0,0x0, bhvFish3,31),
OBJECT_WITH_ACTS(0,1875,-2083,573,0,0,0,0x0, bhvFish3,31),
OBJECT_WITH_ACTS(0,1615,469,-1094,0,0,0,0x0, bhvFish3,31),
OBJECT_WITH_ACTS(87,-4844,-4427,-2969,0,0,0,0x0, bhvWhirlpool,31),
OBJECT_WITH_ACTS(87,3073,-3646,-2755,0,0,0,0x0, bhvWhirlpool,31),
OBJECT_WITH_ACTS(87,-1161,-3958,3862,0,0,0,0x0, bhvWhirlpool,31),
OBJECT_WITH_ACTS(87,3125,-729,1771,0,0,0,0x0, bhvWhirlpool,31),
OBJECT_WITH_ACTS(87,-2885,-2448,4673,0,0,0,0x0, bhvWhirlpool,31),
OBJECT_WITH_ACTS(87,-3802,-4271,2344,0,0,0,0x0, bhvWhirlpool,31),
OBJECT_WITH_ACTS(192,-625,6094,-156,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-1354,6094,729,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,156,6094,-3698,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(212,3210,-3490,-2995,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,1886,6830,-4048,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,-1552,4988,-1198,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,1918,5000,-1132,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1941,5365,-643,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(194,3131,-1094,4662,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,3153,-1198,4855,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,3125,-1198,4219,0,0,0,0x0, bhvCirclingAmp,31),
RETURN()
};
const LevelScript local_warps_bbh_2_[] = {
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
