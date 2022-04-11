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

#include "levels/ccm/header.h"

//This is meant to deal with conflicts in objects needed for different areas
static const LevelScript level_ccm_POSTLOAD[] = {
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(local_area_ccm_1_),
JUMP_LINK(local_area_ccm_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};

//AREA 2 LOADS
static const LevelScript level_ccm_area2load[] = {
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP(level_ccm_POSTLOAD)
};

const LevelScript level_ccm_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd),

LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
JUMP_AREA(0,2,level_ccm_area2load),
//AREA 1 LOADS
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
LOAD_MODEL_FROM_GEO(208, star_door_geo),
LOAD_MODEL_FROM_GEO(37,  key_door_geo),
JUMP_LINK(script_func_global_12),
LOAD_MODEL_FROM_GEO(55, lll_geo_sinking_rock),
LOAD_MODEL_FROM_GEO(58, lll_geo_rotate_firebars),
JUMP_LINK(script_func_global_15),
JUMP(level_ccm_POSTLOAD)
};

const LevelScript local_area_ccm_1_[] = {
AREA(1,Geo_ccm_1_0x19001700),
TERRAIN(col_ccm_1_0xe027a58),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_1_),
JUMP_LINK(local_warps_ccm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_1_[] = {
OBJECT_WITH_ACTS(0,2652,-71,-5303,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-3214,600,-5181,0,-154,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,5246,1960,5846,0,-153,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-3511,-539,-640,0,107,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,4030,299,-2687,0,-151,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,4295,-417,-4987,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-1324,1719,-5188,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(124,1910,-710,-5610,0,83,0,0x80000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,835,-880,-495,0,92,0,0xf0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-284,-158,2136,0,-2,0,0x100000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,3065,-880,1678,0,233,0,0x230000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-1054,-158,5195,0,-56,0,0x270000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(215,-5036,1198,276,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2065,885,3165,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,591,-52,3537,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4138,1771,-2370,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1833,0,1617,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1343,-677,-156,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1007,-573,-5928,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3138,-833,-4921,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(100,-6624,737,-1616,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-6583,737,-4532,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-5474,737,-1943,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(84,-1818,573,5613,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(223,2382,104,-2208,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(107,3922,441,-611,0,0,0,0x0, bhvWoodenPost,31),
OBJECT_WITH_ACTS(104,4474,1369,5183,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(192,0,-833,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-1771,-833,-5417,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-1939,-833,-4779,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(188,482,-52,4459,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,-2141,-781,-5368,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-310,-781,-255,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2513,208,-5474,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-469,365,208,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-677,417,-2917,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3750,1458,-5260,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2448,2031,-5208,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5208,625,-2083,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3904,-833,2706,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-479,-729,-1798,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(140,3949,435,-1666,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,4704,521,-1495,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,4649,521,-3053,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3503,521,-3161,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3598,521,-1366,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(129,3577,240,-2695,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(137,521,156,4475,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,-2067,0,-2662,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,1316,-104,3770,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_ccm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,60,0),
WARP_NODE(241,31,1,61,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_ccm_2_[] = {
AREA(2,Geo_ccm_2_0x19001700),
TERRAIN(col_ccm_2_0xe02f0f0),
SET_BACKGROUND_MUSIC(0,10),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_2_),
JUMP_LINK(local_warps_ccm_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_2_[] = {
OBJECT_WITH_ACTS(0,-2240,-319,-5104,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(84,2807,758,-4932,0,0,0,0x0, bhvBalconyBigBoo,31),
OBJECT_WITH_ACTS(122,-1143,2168,1837,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-3469,-1789,-1578,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,2397,-232,-5934,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-4531,1029,-2292,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(0,3606,-2392,2939,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,4740,-470,6250,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5402,-470,2047,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3598,-470,4123,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2031,-1220,4740,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4612,-1220,4471,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2708,-1947,5208,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3558,-1947,4967,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3551,-2705,4572,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(87,2241,452,-4947,0,0,0,0x0, bhvMadPiano,31),
OBJECT_WITH_ACTS(137,1146,-172,6042,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,3657,-492,-5430,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,1113,-232,-5653,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1470,-440,-5680,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1259,-52,-4378,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,781,-156,-4948,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1295,208,-4276,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1216,208,-5490,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,1112,-417,-5638,0,90,270,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,3633,-417,-4884,270,180,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(84,1094,-313,-1354,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-1563,-365,417,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,5021,1406,-1100,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-4635,1777,5208,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(223,-1982,385,-2165,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-1875,-34,-2865,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(129,-3177,560,-2604,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(0,-3813,760,-2133,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(194,357,-417,-80,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,229,-417,-419,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,959,-417,-198,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(0,844,-492,-258,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1209,-492,-258,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(206,-61,313,3706,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-639,365,3874,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-238,313,4296,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(101,-324,197,3773,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,41,197,4051,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(137,-556,197,3212,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,3130,1094,2917,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(129,885,353,174,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(0,3542,365,-417,270,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,781,469,3279,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,781,1510,-4948,0,0,45,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4492,1771,4658,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,-1510,227,1406,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,573,182,-1771,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,1055,-1198,78,0,-187,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,832,-1146,-1176,0,-10,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-1101,-1198,-1254,0,-268,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,2229,-1198,941,0,-214,0,0x0, bhvFlamethrower,31),
RETURN()
};
const LevelScript local_warps_ccm_2_[] = {
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
