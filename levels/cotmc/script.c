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

#include "levels/cotmc/header.h"
const LevelScript level_cotmc_entry[] = {
INIT_LEVEL(),
JUMP_AREA(0,2,level_cotmc_entry+10),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
JUMP_AREA(0,1,level_cotmc_entry+13),
LOAD_MIO0(0xA,_bidw_skybox_mio0SegmentRomStart,_bidw_skybox_mio0SegmentRomEnd),
LOAD_MIO0(0x07, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),

ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(208, star_door_geo),
LOAD_MODEL_FROM_GEO(37,  key_door_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_cotmc_1_),
JUMP_LINK(local_area_cotmc_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_cotmc_1_[] = {
AREA(1,Geo_cotmc_1_0x19001700),
TERRAIN(col_cotmc_1_0xe013808),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_cotmc_1_),
JUMP_LINK(local_warps_cotmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_cotmc_1_[] = {
OBJECT_WITH_ACTS(0,-1021,450,3020,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,283,596,-1840,0,-154,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(137,2472,33,-2770,0,-153,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-2500,1493,811,0,107,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-1347,-2305,-1031,0,-151,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,697,-365,-2192,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-3084,1615,-2379,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,662,521,-887,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-2313,-365,2963,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1296,-521,2729,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-575,-312,12,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1962,-260,-1930,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1548,729,-3132,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1944,52,1912,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2744,313,542,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1514,938,-1,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(116,-1333,-417,-1072,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(212,975,729,580,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-922,260,1673,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(100,2754,990,-794,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-977,1250,731,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(0,1736,-313,717,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(223,1416,-468,1847,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,433,833,2675,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-2627,156,1985,0,0,0,0x110000, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_cotmc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,46,0),
WARP_NODE(241,26,1,47,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_cotmc_2_[] = {
AREA(2,Geo_cotmc_2_0x19001700),
TERRAIN(col_cotmc_2_0xe0336b8),
SET_BACKGROUND_MUSIC(0,0x2B),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_cotmc_2_),
JUMP_LINK(local_warps_cotmc_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_cotmc_2_[] = {
OBJECT_WITH_ACTS(0,1094,307,-4427,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-7177,499,-5335,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,5899,3649,-3388,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,887,-1268,-4748,0,107,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-6405,927,3597,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,3327,7911,-406,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(85,-4167,-720,6771,0,0,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,571,1248,5311,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-1927,290,-6198,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3385,707,-2760,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-936,-1979,115,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,323,-1771,-996,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3021,365,-1302,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-990,365,1615,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,288,-1354,6911,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4219,625,6406,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,469,625,-4479,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4740,-460,6823,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,5990,1042,-1771,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,2604,545,1875,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1416,628,-1666,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5208,208,-5104,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1094,442,5781,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,990,442,4271,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(223,-7344,134,-5313,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,5852,3284,-3391,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,-3468,-773,6506,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1625,831,5152,0,0,0,0x0, bhvFireSpitter,31),
RETURN()
};
const LevelScript local_warps_cotmc_2_[] = {
WARP_NODE(10,9,2,10,0),
WARP_NODE(11,9,2,12,0),
WARP_NODE(12,9,2,11,0),
WARP_NODE(13,9,2,14,0),
WARP_NODE(14,9,2,13,0),
WARP_NODE(240,26,2,35,0),
WARP_NODE(241,26,2,45,0),
WARP_NODE(0,9,2,10,0),
WARP_NODE(1,9,2,10,0),
WARP_NODE(2,9,2,10,0),
WARP_NODE(3,9,2,10,0),
WARP_NODE(4,9,2,10,0),
WARP_NODE(5,9,2,10,0),
WARP_NODE(6,9,2,10,0),
RETURN()
};
