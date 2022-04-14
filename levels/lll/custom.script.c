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
#include "levels/lll/header.h"
extern u8 _lll_segment_ESegmentRomStart[]; 
extern u8 _lll_segment_ESegmentRomEnd[];
#include "levels/ttm/header.h"
const LevelScript level_lll_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ttm_segment_7SegmentRomStart, _ttm_segment_7SegmentRomEnd),
LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _mountain_mio0SegmentRomStart, _mountain_mio0SegmentRomEnd),
LOAD_RAW(0x1A, _ttmSegmentRomStart, _ttmSegmentRomEnd),
LOAD_RAW(0x0E, _lll_segment_ESegmentRomStart, _lll_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_ssl_skybox_mio0SegmentRomStart,_ssl_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group5_mio0SegmentRomStart,_group5_mio0SegmentRomEnd),
LOAD_RAW(12,_group5_geoSegmentRomStart,_group5_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_star_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(54, palm_tree_geo),
// LOAD_MODEL_FROM_GEO(86,0x05014630),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_6),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_lll_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,33,-5298,-1205,-6492),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_lll_1_[] = {
AREA(1,Geo_lll_1_0x21c1700),
TERRAIN(col_lll_1_0xe037668),
SET_BACKGROUND_MUSIC(0,7),
TERRAIN_TYPE(3),
JUMP_LINK(local_objects_lll_1_),
JUMP_LINK(local_warps_lll_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_1_[] = {
OBJECT_WITH_ACTS(0,-5298,-1205,-6492,0,33,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(55,3570,3693,3889,0,90,0,0xb0000, bhvCustomSMSRAngrySun,1),
OBJECT_WITH_ACTS(55,-115,1710,-931,0,0,0,0xc0000, bhvCustomSMSRAngrySun,62),
OBJECT_WITH_ACTS(0,3186,-1513,960,0,270,0,0xd0000, bhvLllRotatingBlockWithFireBars,60),
OBJECT_WITH_ACTS(0,3186,-1513,-1250,0,0,0,0xe0000, bhvLllRotatingBlockWithFireBars,60),
OBJECT_WITH_ACTS(194,5201,-608,880,0,0,0,0x0, bhvCirclingAmp,60),
OBJECT_WITH_ACTS(217,2661,2055,3793,0,0,327,0x0, bhvPushableMetalBox,3),
OBJECT_WITH_ACTS(217,2826,2310,3793,0,0,327,0x0, bhvPushableMetalBox,3),
OBJECT_WITH_ACTS(217,2826,2310,4101,0,0,327,0x0, bhvPushableMetalBox,3),
OBJECT_WITH_ACTS(217,2661,2055,4101,0,0,327,0x0, bhvPushableMetalBox,3),
OBJECT_WITH_ACTS(122,4338,4896,3941,0,0,0,0x0, bhvStar,1),
OBJECT_WITH_ACTS(104,-4826,-2091,-4532,0,184,0,0x1020000, bhvKoopa,2),
OBJECT_WITH_ACTS(23,-5491,-2092,-5099,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(23,-5754,-1929,-6463,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(23,-4098,-2092,-6633,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(23,-5191,-2092,-4477,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(23,-3860,-2092,-5727,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(23,-4906,-1929,-6757,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(0,-2704,1382,3180,0,0,0,0x0, bhvKoopaRaceEndpoint,2),
OBJECT_WITH_ACTS(215,5083,3138,-1272,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-2992,2185,4955,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-3850,1862,4305,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,5143,-2181,-4899,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,5137,3141,996,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,3080,1519,-2920,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,250,2135,4838,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-6037,-1991,-2589,0,0,359,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(0,-505,-1750,5539,0,0,0,0x3000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(56,5980,3255,-7884,0,0,0,0x0, bhvCustomSMSRYoshiCoin,63),
OBJECT_WITH_ACTS(56,3397,3141,-1280,0,0,0,0x0, bhvCustomSMSRYoshiCoin,63),
OBJECT_WITH_ACTS(56,5067,4007,3942,0,0,0,0x0, bhvCustomSMSRYoshiCoin,63),
OBJECT_WITH_ACTS(56,-4548,-2395,37,0,0,0,0x0, bhvCustomSMSRYoshiCoin,63),
OBJECT_WITH_ACTS(56,-5209,2826,5082,0,0,0,0x0, bhvCustomSMSRYoshiCoin,63),
OBJECT_WITH_ACTS(217,3181,-1530,-217,0,0,0,0x0, bhvPushableMetalBox,4),
OBJECT_WITH_ACTS(122,3181,-511,2262,0,0,0,0x2000000, bhvStar,4),
OBJECT_WITH_ACTS(194,5904,-608,880,0,0,0,0x0, bhvCirclingAmp,60),
OBJECT_WITH_ACTS(102,5576,-1429,-1454,0,0,0,0x0, bhvChainChomp,60),
OBJECT_WITH_ACTS(0,3396,3451,997,0,0,0,0x70000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(86,-3101,1110,-2320,0,0,0,0x0, bhvTweester,16),
OBJECT_WITH_ACTS(86,-6724,1495,-5271,0,0,0,0x0, bhvTweester,16),
OBJECT_WITH_ACTS(86,-2255,1315,-7318,0,0,0,0x0, bhvTweester,16),
OBJECT_WITH_ACTS(122,-1140,2557,-6770,0,0,0,0x4000000, bhvStar,63),
OBJECT_WITH_ACTS(0,-2736,-1063,5013,0,0,0,0x5000000, bhvHiddenStar,63),
OBJECT_WITH_ACTS(0,-5663,-1993,-2114,0,0,0,0x0, bhvPokey,63),
OBJECT_WITH_ACTS(0,4225,2212,-149,0,0,0,0x0, bhvPokey,63),
OBJECT_WITH_ACTS(0,-1716,1252,1006,0,0,0,0x0, bhvPokey,63),
OBJECT_WITH_ACTS(0,580,-1748,-6259,0,0,0,0x0, bhvPokey,63),
OBJECT_WITH_ACTS(0,1973,2022,-1869,0,0,0,0x0, bhvPokey,63),
OBJECT_WITH_ACTS(137,6458,2728,5927,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(194,-6056,-1993,-2589,0,0,0,0x0, bhvHomingAmp,63),
OBJECT_WITH_ACTS(0,1873,2023,-2976,0,0,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(194,1864,2022,-2977,0,0,0,0x0, bhvHomingAmp,63),
OBJECT_WITH_ACTS(187,-5413,-2091,-5611,0,0,0,0x0, bhvButterfly,63),
OBJECT_WITH_ACTS(207,-726,1250,782,0,315,0,0x0, bhvFloorSwitchHiddenObjects,63),
OBJECT_WITH_ACTS(217,-731,942,784,0,45,0,0x0, bhvPushableMetalBox,63),
OBJECT_WITH_ACTS(129,-302,1463,-408,0,38,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,62,1620,-698,0,38,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,425,1724,-945,0,38,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-7,1724,-1498,0,38,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-354,1620,-1217,0,38,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-733,1463,-924,0,38,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(116,-290,1663,-403,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,-731,1663,-924,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,429,1924,-940,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,5,1924,-1506,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,60,1820,-695,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,-352,1820,-1219,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(187,-4228,-2091,-6285,0,0,0,0x0, bhvButterfly,63),
OBJECT_WITH_ACTS(100,-4554,1216,3708,0,121,0,0x0, bhvCustomSMSRPiranhaPlantWild,63),
OBJECT_WITH_ACTS(100,-1881,-1997,-5774,0,269,0,0x0, bhvCustomSMSRPiranhaPlantWild,63),
OBJECT_WITH_ACTS(0,5396,83,3173,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(192,4462,2319,-2666,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(116,3645,1119,-3535,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,3227,319,-3927,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,3250,1119,-3150,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,4437,1919,-3549,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,4815,1919,-3947,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,4038,1119,-3932,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,4035,1919,-3138,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(0,1356,2135,3968,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-3254,1298,-655,270,9,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(116,2369,-1527,-1261,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,2381,-1527,-2048,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,3174,-1527,-2052,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,3971,-1527,-2069,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,3972,-1527,-1254,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(0,-4280,-2450,2452,0,330,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,496,-2398,3669,0,0,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(192,-405,-1993,2266,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(192,-6144,-1993,1942,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(194,-2802,-1297,6089,0,0,0,0x0, bhvHomingAmp,63),
OBJECT_WITH_ACTS(194,-2817,-1258,4333,0,0,0,0x0, bhvHomingAmp,63),
OBJECT_WITH_ACTS(0,5306,1568,-3184,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(192,-4220,-2091,-5277,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(192,-6950,1800,5424,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(137,-4086,-1804,-7000,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(104,-3607,-1974,-4229,0,0,0,0x0, bhvKoopa,63),
OBJECT_WITH_ACTS(104,-2128,1277,1525,0,0,0,0x0, bhvKoopa,63),
OBJECT_WITH_ACTS(0,-4579,1209,3708,0,0,0,0x0, bhvBowser,63),
OBJECT_WITH_ACTS(0,-1906,-2004,-5774,0,0,0,0x0, bhvBowser,63),
OBJECT_WITH_ACTS(54,-6544,-2134,-201,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(54,-634,-1997,-345,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(54,5539,2360,510,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(54,-2427,1294,486,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(54,-6972,1263,-3629,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(54,-7149,1714,4930,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(54,-587,-1997,-4774,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(54,2492,2021,-2262,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(0,5083,179,5447,0,0,0,0x0, bhvHidden1upTrigger,63),
OBJECT_WITH_ACTS(0,6092,179,5447,0,0,0,0x0, bhvHidden1upTrigger,63),
OBJECT_WITH_ACTS(0,5083,92,4845,0,0,0,0x0, bhvHidden1upTrigger,63),
OBJECT_WITH_ACTS(0,6092,92,4845,0,0,0,0x0, bhvHidden1upTrigger,63),
OBJECT_WITH_ACTS(212,5589,33,5162,0,0,0,0x40000, bhvHidden1up,63),
OBJECT_WITH_ACTS(0,-2116,-1094,5695,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-2261,-1094,4470,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-3202,-1094,4608,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-3065,-1094,5276,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-3631,-1094,5833,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-2116,-1094,5695,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-2261,-1094,4470,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-3202,-1094,4608,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-3065,-1094,5276,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-3631,-1094,5833,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-4031,-1945,620,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(192,-6468,-2031,5287,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(54,-5028,-2282,3292,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvStarDoor,63),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvStarDoor,63),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvStarDoor,63),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvStarDoor,63),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvStarDoor,63),
OBJECT_WITH_ACTS(0,-1965,-938,2994,0,338,0,0xb0000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(0,-3091,1935,-2327,0,0,0,0xc0000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(0,3793,-3974,-5695,0,0,0,0x20000, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_lll_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,22,1,12,0),
WARP_NODE(12,22,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,24,0),
WARP_NODE(241,26,1,25,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
