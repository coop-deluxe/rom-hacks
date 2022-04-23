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

#include "levels/wdw/header.h"

static const LevelScript level_wdw_POSTLOAD[] = {
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_3),
JUMP_LINK(local_area_wdw_1_),
JUMP_LINK(local_area_wdw_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};

//AREA 2 LOADS
static const LevelScript level_wdw_area2load[] = {
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
LOAD_MODEL_FROM_GEO(55, lll_geo_sinking_rock),
LOAD_MODEL_FROM_GEO(58, lll_geo_rotate_firebars),
JUMP_LINK(script_func_global_15),
JUMP(level_wdw_POSTLOAD)
};

const LevelScript level_wdw_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MODEL_FROM_GEO(208, star_door_geo),
LOAD_MODEL_FROM_GEO(37,  key_door_geo),
JUMP_AREA(0,2,level_wdw_area2load),
//AREA 1 LOADS
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, grate_door_geo),
JUMP_LINK(script_func_global_14),
JUMP(level_wdw_POSTLOAD)
};

const LevelScript local_area_wdw_1_[] = {
AREA(1,Geo_wdw_1_0x19001700),
TERRAIN(col_wdw_1_0xe02d2b0),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wdw_1_),
JUMP_LINK(local_warps_wdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wdw_1_[] = {
OBJECT_WITH_ACTS(0,2615,-279,3130,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-4003,-338,5657,0,-154,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-280,3470,-4948,0,-153,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-4317,-614,5670,0,90,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(207,5810,-614,2073,0,-250,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(0,3383,-216,-3119,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,17,-938,-4005,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2900,-521,332,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6293,1615,6493,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1172,2135,-6097,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4633,-313,-185,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4097,625,6500,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6109,1406,2374,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4635,-1094,-2500,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,3369,1146,360,0,0,0,0x3000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(0,3177,789,-4423,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-4631,521,-219,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-3728,2323,4245,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,3276,-562,318,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,3600,0,513,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-4635,-729,-2500,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(87,5226,-104,-4841,0,0,0,0x0, bhvBigBully,31),
OBJECT_WITH_ACTS(124,2110,-614,2454,0,40,0,0x240000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(137,5004,1875,-2619,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4721,-260,-4017,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(129,2757,737,-4816,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(0,-1667,-417,-4010,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4635,-313,-2500,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(140,-2327,-614,3901,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-1029,-573,3460,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1081,-573,991,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,511,-573,2349,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1766,-573,-406,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(212,-4650,1250,6030,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(220,-2516,0,851,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-521,0,-2344,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-6042,0,-5260,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,4635,-614,-2083,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2969,-614,4427,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(223,5052,1381,4323,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(105,-1406,-614,-1771,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-2135,-625,-5156,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(86,-2292,-614,-4115,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-4740,-614,-2031,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(0,2178,2188,-5785,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2301,1543,5451,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(86,4186,867,5609,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,3401,867,5739,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-666,819,5691,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,5782,2674,-5193,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(0,4192,3331,-4993,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(23,5625,-614,-2813,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5260,-614,-1823,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5833,-614,-1250,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5729,-614,1250,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5365,-614,-365,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5052,-614,677,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,1354,-614,5052,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,3958,867,6094,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5521,1381,5365,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5729,1381,4531,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5781,2089,-3750,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,4323,3227,-5365,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-3958,1491,5625,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,521,152,5990,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2969,1491,5833,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-3854,2200,4688,0,0,0,0x0, bhvTree,31),
RETURN()
};
const LevelScript local_warps_wdw_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,60,0),
WARP_NODE(241,6,1,61,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_wdw_2_[] = {
AREA(2,Geo_wdw_2_0x19001700),
TERRAIN(col_wdw_2_0xe03bb20),
SET_BACKGROUND_MUSIC(0,10),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wdw_2_),
JUMP_LINK(local_warps_wdw_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wdw_2_[] = {
OBJECT_WITH_ACTS(0,-5104,-94,6979,0,143,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(124,-5008,-406,6310,0,-10,0,0x280000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,1107,-273,-4794,0,0,0,0x0, bhvKoopaRaceEndpoint,31),
OBJECT_WITH_ACTS(104,-2029,-1638,5555,0,43,0,0x30000, bhvKoopa,31),
OBJECT_WITH_ACTS(0,5053,758,-1455,0,0,0,0x1000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,2709,2060,-1437,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3376,0,-5612,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1016,1458,-4488,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2542,3021,-5046,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1148,1354,3789,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6545,3490,-5704,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4088,1198,1745,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4476,1198,-1583,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,7450,1354,6207,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-5555,2917,-5387,0,12,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,3454,4233,-5340,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-2282,3713,-1172,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(0,4323,2007,-1349,0,26,339,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4443,2007,-1850,0,-64,333,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4990,2007,-1616,27,-61,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4812,2007,-1143,340,26,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(140,1135,2381,-1457,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,1128,1861,2270,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3535,1018,4119,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3483,1018,4346,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3531,698,5432,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3427,1338,2192,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(207,-3863,-798,1072,0,108,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-3916,-1018,42,0,42,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4397,-960,-192,0,-9,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-5028,-814,-112,0,24,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-5549,-611,115,0,21,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,-4090,-727,-123,0,60,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4712,-669,-185,0,9,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5296,-553,3,0,24,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5901,-349,293,0,20,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,-4392,-669,-204,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5053,-494,-96,0,23,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(129,-5896,291,6664,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-428,-1830,6217,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-5603,-1830,-5416,0,-29,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,6276,-1958,1652,0,26,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,4796,1229,4864,0,8,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(137,-3842,1905,-3509,0,-28,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,1140,-223,-1491,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,1134,-223,-1483,0,-159,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,1130,-223,-1508,0,-72,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(180,1132,-1290,6211,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1132,-707,2567,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1159,-250,-359,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1435,-250,-1325,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1353,-250,-1711,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,966,-245,-4389,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3674,317,-1465,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1007,676,-4854,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3666,3285,-4039,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1701,3092,-5627,0,0,0,0x0, bhvFireSpitter,31),
RETURN()
};
const LevelScript local_warps_wdw_2_[] = {
WARP_NODE(10,9,2,10,0),
WARP_NODE(11,9,2,12,0),
WARP_NODE(12,9,2,11,0),
WARP_NODE(13,9,2,14,0),
WARP_NODE(14,9,2,13,0),
WARP_NODE(240,6,2,4,0),
WARP_NODE(241,6,2,5,0),
WARP_NODE(0,9,2,10,0),
WARP_NODE(1,9,2,10,0),
WARP_NODE(2,9,2,10,0),
WARP_NODE(3,9,2,10,0),
WARP_NODE(4,9,2,10,0),
WARP_NODE(5,9,2,10,0),
WARP_NODE(6,9,2,10,0),
RETURN()
};
