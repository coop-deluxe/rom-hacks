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
#include "levels/ttc/header.h"
extern u8 _ttc_segment_ESegmentRomStart[]; 
extern u8 _ttc_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_ttc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _ttc_segment_ESegmentRomStart, _ttc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom28802752_skybox_mio0SegmentRomStart,_SkyboxCustom28802752_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
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
JUMP_LINK(local_area_ttc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,90,-5060,-795,5287),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ttc_1_[] = {
AREA(1,Geo_ttc_1_0x1ac1700),
TERRAIN(col_ttc_1_0xe03dd58),
SET_BACKGROUND_MUSIC(0,4),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ttc_1_),
JUMP_LINK(local_warps_ttc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttc_1_[] = {
OBJECT_WITH_ACTS(0,-5060,-795,5287,0,90,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-340,1385,-1602,0,0,0,0x0, bhvBobBowlingBallSpawner,63),
OBJECT_WITH_ACTS(0,-3263,-603,-1673,0,0,0,0x960000, bhvPoleGrabbing,63),
OBJECT_WITH_ACTS(54,-5174,-969,-728,0,0,0,0x0, bhvControllablePlatform,63),
OBJECT_WITH_ACTS(212,4676,-148,-7499,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(84,-4911,-1373,3602,0,0,0,0x0, bhvBulletBill,63),
OBJECT_WITH_ACTS(137,1392,3682,-3701,0,0,0,0x50e0000, bhvExclamationBox,32),
OBJECT_WITH_ACTS(122,1654,3682,1980,0,0,0,0x1000000, bhvStar,63),
OBJECT_WITH_ACTS(122,-3256,1282,-1666,0,0,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(122,6042,2785,-1150,0,0,0,0x3000000, bhvStar,63),
OBJECT_WITH_ACTS(0,-1906,-514,2898,0,0,0,0x4000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(215,-3817,-882,2285,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(129,2076,-778,1808,0,0,0,0x0, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,1855,-778,1505,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(215,1913,-778,1673,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(129,1862,-778,1866,0,0,0,0x0, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,1665,-778,1707,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,1613,-778,1515,0,0,0,0x0, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,1851,-578,1578,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,1851,-578,1779,0,0,0,0x0, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,2040,-778,2182,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(0,-2665,-326,3073,0,0,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,-3571,-634,3071,0,0,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,-5343,-626,2744,0,90,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,-3892,-626,1850,0,270,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,330,1178,-1725,0,0,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,1709,2078,-4597,0,90,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,1862,1178,-1743,0,90,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,782,2659,-4873,0,0,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(122,1393,3686,-3531,0,0,0,0x0, bhvStar,15),
OBJECT_WITH_ACTS(84,-4310,-1373,3602,0,0,0,0x0, bhvBulletBill,63),
OBJECT_WITH_ACTS(84,-2521,-1373,3602,0,0,0,0x0, bhvBulletBill,63),
OBJECT_WITH_ACTS(84,-1910,-1373,3602,0,0,0,0x0, bhvBulletBill,63),
OBJECT_WITH_ACTS(84,3360,1316,-1902,0,270,0,0x0, bhvBulletBill,63),
OBJECT_WITH_ACTS(84,1680,-482,7,0,0,0,0x0, bhvBulletBill,63),
OBJECT_WITH_ACTS(215,-3261,-774,-3184,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,1913,1926,-5884,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-347,1321,-1623,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,4309,1026,-7459,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-3421,-1674,3681,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-3133,726,2990,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(212,2433,1056,2152,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(0,-795,-697,3172,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-3414,-1524,4998,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(188,-570,-1674,4276,0,0,0,0x0, bhvBobomb,63),
OBJECT_WITH_ACTS(188,1635,-774,2236,0,0,0,0x0, bhvBobomb,63),
OBJECT_WITH_ACTS(120,2130,1086,-4168,0,0,0,0x0, bhvRecoveryHeart,63),
OBJECT_WITH_ACTS(0,-3010,-395,566,0,0,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(89,1627,-1224,4954,0,0,0,0x0, bhvHeaveHo,63),
OBJECT_WITH_ACTS(89,-2457,426,46,0,0,0,0x0, bhvHeaveHo,63),
OBJECT_WITH_ACTS(0,-2712,-357,948,0,0,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(88,1239,1326,1256,0,180,0,0x0, bhvThwomp,63),
OBJECT_WITH_ACTS(88,930,2226,2438,0,270,0,0x0, bhvThwomp,63),
OBJECT_WITH_ACTS(129,-5,426,-872,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,4,426,-663,0,0,0,0x0, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,5391,-1074,2751,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(129,0,626,-876,0,0,0,0x0, bhvBreakableBox,63),
OBJECT_WITH_ACTS(130,208,426,-850,0,0,0,0x0, bhvBreakableBoxSmall,63),
OBJECT_WITH_ACTS(22,4687,-1074,-6539,0,180,0,0x650000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(22,340,2526,-5353,0,247,0,0x640000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(124,108,2526,-5270,0,270,0,0x7a0000, bhvMessagePanel,63),
OBJECT_WITH_ACTS(223,-48,2526,-3258,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(0,-2162,-817,-1151,90,315,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(188,3789,1026,-3711,0,0,0,0x0, bhvBobomb,63),
OBJECT_WITH_ACTS(102,-4915,-774,501,0,0,0,0x0, bhvChainChomp,63),
OBJECT_WITH_ACTS(0,-4248,-817,-2779,0,0,90,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(31,-873,-774,192,0,0,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(0,5060,1026,-6156,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,1456,426,-443,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(116,1835,-1224,2941,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(220,1533,-964,3749,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(0,-349,635,202,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(116,1526,-1224,2941,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(188,-4521,-774,3520,0,0,0,0x0, bhvBobomb,63),
OBJECT_WITH_ACTS(0,-3546,512,950,0,90,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(180,467,2226,-4146,0,0,0,0x0, bhvFireSpitter,63),
OBJECT_WITH_ACTS(0,115,-88,83,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(118,485,2226,-3278,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,-570,2226,-3278,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(180,-560,2226,-2362,0,0,0,0x0, bhvFireSpitter,63),
OBJECT_WITH_ACTS(180,1342,3126,-5389,0,0,0,0x0, bhvFireSpitter,63),
OBJECT_WITH_ACTS(137,-795,1286,-29,0,0,0,0x40000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(116,1003,1926,-2422,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,1004,1926,-3168,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(137,1710,2786,-1601,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(192,-841,-774,1978,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(192,-2198,-1524,4987,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(188,-1302,1026,-1324,0,0,0,0x0, bhvBobomb,63),
OBJECT_WITH_ACTS(130,-5457,-774,3288,0,0,0,0x0, bhvBreakableBoxSmall,63),
OBJECT_WITH_ACTS(0,-4920,-774,500,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-3118,-774,3365,0,0,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,2726,1026,-2418,0,90,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(137,2136,1586,1246,0,0,0,0x50000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(116,-1470,426,-847,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,-1167,726,-858,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,-1165,426,-544,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(129,-5629,-774,3317,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(124,-670,-774,278,0,0,0,0x80000, bhvMessagePanel,63),
OBJECT_WITH_ACTS(118,-40,2227,-4160,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,-40,2227,-2353,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(140,782,2527,-4541,0,0,0,0x0, bhvBlueCoinSwitch,63),
OBJECT_WITH_ACTS(220,5237,-305,439,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(129,5436,425,-853,0,0,0,0x10000, bhvBreakableBox,63),
OBJECT_WITH_ACTS(124,-1767,425,-1457,0,0,0,0x490000, bhvMessagePanel,63),
OBJECT_WITH_ACTS(116,5839,685,1555,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(57,-4786,-1040,2798,2,0,-3,0x0, bhvCustomSMSRToxicWastePlatform,127),
OBJECT_WITH_ACTS(57,-4454,-1040,2298,3,0,8,0x0, bhvCustomSMSRToxicWastePlatform,63),
OBJECT_WITH_ACTS(57,-4737,-1040,1809,-4,0,-8,0x0, bhvCustomSMSRToxicWastePlatform,63),
OBJECT_WITH_ACTS(57,-3814,-1040,2285,7,0,5,0x0, bhvCustomSMSRToxicWastePlatform,63),
OBJECT_WITH_ACTS(57,2650,927,-2784,-9,0,-6,0x0, bhvCustomSMSRToxicWastePlatform,63),
OBJECT_WITH_ACTS(57,4672,927,-4132,-2,0,6,0x0, bhvCustomSMSRToxicWastePlatform,63),
OBJECT_WITH_ACTS(57,4662,927,-4705,-7,0,-3,0x0, bhvCustomSMSRToxicWastePlatform,63),
OBJECT_WITH_ACTS(0,804,2078,-2794,0,90,0,0x0, bhvFlamethrower,32),
RETURN()
};
const LevelScript local_warps_ttc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,6,0),
WARP_NODE(241,6,1,7,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(101,14,1,100,0),
WARP_NODE(100,14,1,101,0),
RETURN()
};
