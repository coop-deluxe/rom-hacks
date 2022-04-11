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

#include "levels/sa/header.h"
const LevelScript level_sa_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _sa_segment_7SegmentRomStart, _sa_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(208, star_door_geo),
LOAD_MODEL_FROM_GEO(37,  key_door_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
LOAD_MODEL_FROM_GEO(55, lll_geo_sinking_rock),
LOAD_MODEL_FROM_GEO(58, lll_geo_rotate_firebars),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_sa_1_),
JUMP_LINK(local_area_sa_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sa_1_[] = {
AREA(1,Geo_sa_1_0x19001700),
TERRAIN(col_sa_1_0xe00a898),
SET_BACKGROUND_MUSIC(0,24),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_sa_1_),
JUMP_LINK(local_warps_sa_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_1_[] = {
OBJECT_WITH_ACTS(0,51,-1480,-639,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,107,2163,-1995,0,-154,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(124,-667,-246,-212,0,49,0,0x60000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1800,1205,-2105,0,315,0,0x70000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(212,599,-188,166,0,-151,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-572,0,40,0,-49,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,0,-1563,104,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2195,431,-1573,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-371,1319,1059,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1950,497,1687,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,1843,-1657,1818,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(137,-562,416,-1242,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,52,-3906,-922,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(22,0,-4375,781,0,0,0,0xb0000, bhvWarpPipe,31),
RETURN()
};
const LevelScript local_warps_sa_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,16,1,2,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,66,0),
WARP_NODE(241,6,1,67,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_sa_2_[] = {
AREA(2,Geo_sa_2_0x19001700),
TERRAIN(col_sa_2_0xe057700),
SET_BACKGROUND_MUSIC(0,0x31),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_sa_2_),
JUMP_LINK(local_warps_sa_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_2_[] = {
OBJECT_WITH_ACTS(0,6048,140,-5564,0,-90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(124,4636,-197,-6031,0,-297,0,0x330000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,4639,-197,-5073,0,-233,0,0x320000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-4987,344,4835,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(212,-4357,-197,-6474,0,-151,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(215,-676,-33,1667,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5156,-573,-1875,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6783,506,-2638,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2500,5,-3177,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3281,555,6406,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,417,-220,-4583,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,417,-220,3646,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4531,-25,5260,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,2504,-365,1771,0,0,0,0x1080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,104,-417,-3173,0,0,0,0x2080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2906,1077,4125,0,26,0,0x3080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6445,378,3603,0,48,0,0x4080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3302,-763,-3571,0,0,0,0x5080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(23,3290,-122,6409,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,2229,-160,-4861,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1393,-160,-6123,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-6544,-272,-6864,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1861,-272,6835,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,7184,-122,-2996,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-3141,-272,4886,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,2647,-355,-6835,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2414,-272,-4072,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,1949,-272,6718,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(212,378,1687,-3898,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,407,1105,-582,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-2588,0,2327,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,2508,1861,2268,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,7765,-64,-5904,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(116,4624,-243,-5555,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-175,-93,-3198,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-6602,-214,-7242,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1571,-18,1978,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1483,524,-4011,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,407,1256,2967,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,442,731,5333,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,407,-102,-524,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-5729,-139,5700,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,6486,-64,-2269,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(137,-2036,-781,-3834,0,0,0,0x6080000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_sa_2_[] = {
WARP_NODE(10,9,2,10,0),
WARP_NODE(11,9,2,12,0),
WARP_NODE(12,9,2,11,0),
WARP_NODE(13,9,2,14,0),
WARP_NODE(14,9,2,13,0),
WARP_NODE(240,6,2,8,0),
WARP_NODE(241,6,2,9,0),
WARP_NODE(0,9,2,10,0),
WARP_NODE(1,9,2,10,0),
WARP_NODE(2,9,2,10,0),
WARP_NODE(3,9,2,10,0),
WARP_NODE(4,9,2,10,0),
WARP_NODE(5,9,2,10,0),
WARP_NODE(6,9,2,10,0),
RETURN()
};
