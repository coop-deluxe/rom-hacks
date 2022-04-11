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

#include "levels/castle_courtyard/header.h"

const LevelScript level_castle_courtyard_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(208, star_door_geo),
LOAD_MODEL_FROM_GEO(37,  key_door_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_courtyard_1_),
JUMP_LINK(local_area_castle_courtyard_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x19001700),
TERRAIN(col_castle_courtyard_1_0xe029798),
SET_BACKGROUND_MUSIC(0,33),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,-3446,-696,5347,0,0,0,0x00400000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-3446,-696,5347,0,0,0,0x000a0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-3446,-696,5347,0,0,0,0x0, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,2882,-286,1807,0,63,0,0x10000, bhvLaunchStarCollectWarp,31),
OBJECT_WITH_ACTS(0,2876,-280,1778,0,80,0,0x20000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(124,-6037,79,5766,0,0,0,0x580000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,5284,-742,6206,0,-151,0,0x30000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(124,-1902,1131,-3951,0,218,0,0x590000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,-1717,-457,837,0,0,0,0x50000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,792,-744,-2107,0,0,0,0x60000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-532,1652,-6525,0,0,0,0xf0b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,5512,0,2729,0,0,0,0xf0c0000, bhvWarp,31),
OBJECT_WITH_ACTS(221,-3020,1033,6261,0,0,0,0x52000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(100,644,712,-1924,0,0,0,0x0, bhvMips,31),
OBJECT_WITH_ACTS(208,713,-729,-1400,0,0,0,0xa000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,870,-729,-1400,0,180,0,0xa000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,2079,-729,-4793,0,0,0,0x1e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,2237,-729,-4793,0,180,0,0x1e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(37,-3390,-880,5785,0,180,0,0x2000000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-3542,-880,5785,0,0,0,0x2000000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-3384,-573,-5624,0,0,0,0xf0e0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-948,-156,-5916,0,0,0,0xf0d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,4716,-1146,-5975,0,0,0,0xf600000, bhvWarp,31),
OBJECT_WITH_ACTS(201,-490,-769,-2309,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,5029,-722,-4269,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(221,3673,1139,-5486,0,0,0,0x4c000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(137,792,-381,857,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(221,-5033,-869,6398,0,0,0,0x35000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-5970,-869,5462,0,0,0,0x36000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,2105,-869,3841,0,0,0,0x3c000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-1391,-575,1663,0,0,0,0x3d000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,5248,-218,1664,0,0,0,0x3e000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,3380,-692,-2850,0,0,0,0x3f000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(124,1047,-707,-981,0,0,0,0x570000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,5625,-697,6146,0,180,0,0x700000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,5371,260,2295,0,69,0,0x280000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-1190,-104,898,0,-90,0,0x2a0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-3725,0,-5694,0,90,0,0x2c0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,5166,-313,6101,0,90,0,0x2e0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,826,0,-1071,0,-180,0,0x300000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-516,-156,-6029,0,-90,0,0x320000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,3859,-469,-6125,0,0,0,0x340000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-238,2031,-6184,0,-135,0,0x360000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,5371,260,2295,0,69,0,0x290000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(0,-1190,-104,898,0,-90,0,0x2b0000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(0,-3725,0,-5694,0,90,0,0x2d0000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(0,4987,-365,5851,0,-90,0,0x2f0000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(0,826,0,-1071,0,-180,0,0x310000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(0,-516,-156,-6029,0,-90,0,0x330000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(0,3859,-469,-6125,0,0,0,0x350000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(0,-238,2031,-6184,0,-135,0,0x370000, bhvLaunchDeathWarp,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(40,0,0,0,0),
WARP_NODE(41,0,0,0,0),
WARP_NODE(42,0,0,0,0),
WARP_NODE(43,0,0,0,0),
WARP_NODE(44,0,0,0,0),
WARP_NODE(45,0,0,0,0),
WARP_NODE(46,0,0,0,0),
WARP_NODE(47,0,0,0,0),
WARP_NODE(48,0,0,0,0),
WARP_NODE(49,0,0,0,0),
WARP_NODE(50,0,0,0,0),
WARP_NODE(51,0,0,0,0),
WARP_NODE(52,0,0,0,0),
WARP_NODE(53,0,0,0,0),
WARP_NODE(54,0,0,0,0),
WARP_NODE(55,0,0,0,0),
WARP_NODE(0x40,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(10,0,0,10,0),
WARP_NODE(0x60,7,1,10,0),
WARP_NODE(11,8,1,10,0),
WARP_NODE(12,9,1,10,0),
WARP_NODE(13,22,1,10,0),
WARP_NODE(14,12,1,10,0),
WARP_NODE(240,26,1,1,0),
WARP_NODE(241,26,1,2,0),
WARP_NODE(0,31,1,0,0),
WARP_NODE(1,26,1,10,0),
WARP_NODE(2,26,1,10,0),
WARP_NODE(3,28,1,10,0),
WARP_NODE(4,8,1,10,0),
WARP_NODE(5,24,1,10,0),
WARP_NODE(6,17,1,10,0),
RETURN()
};
const LevelScript local_area_castle_courtyard_2_[] = {
AREA(2,Geo_castle_courtyard_2_0x19001700),
TERRAIN(col_castle_courtyard_2_0xe030f80),
SET_BACKGROUND_MUSIC(0,0x30),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_2_),
JUMP_LINK(local_warps_castle_courtyard_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_2_[] = {
OBJECT_WITH_ACTS(0,5481,-523,6290,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,5481,-523,6290,0,0,0,0x400000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,2198,-447,1436,0,-154,0,0x160000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-5627,137,3491,0,-150,0,0xd010000, bhvWarp,31),
OBJECT_WITH_ACTS(0,3961,-591,-5519,0,90,0,0xd170000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-4799,-1367,-5929,0,-171,0,0xf1a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1354,-52,-5882,0,0,0,0xf070000, bhvWarp,31),
OBJECT_WITH_ACTS(0,894,1771,-6455,0,-38,0,0xd080000, bhvWarp,31),
OBJECT_WITH_ACTS(22,-3869,1229,-5221,0,0,0,0x90000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-860,772,-1527,0,0,0,0x190000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-466,-765,-1802,0,0,0,0x180000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(208,-556,-765,-947,0,0,0,0xa000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,-400,-765,-945,0,180,0,0xa000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,-2021,-765,-4618,0,9,0,0x1e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,-1866,-765,-4644,0,189,0,0x1e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(100,-4778,1229,-772,0,0,0,0x0, bhvMips,31),
OBJECT_WITH_ACTS(120,-1443,-682,-1898,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(37,4016,-922,6689,0,0,0,0x21c0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,4170,-922,6689,0,180,0,0x21c0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(221,4754,-922,5587,0,-66,0,0x1e000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,129,-922,6273,0,-26,0,0x2a000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,5629,-922,-6530,0,-54,0,0x20000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-5501,-225,2284,0,0,0,0x21000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-2638,-765,-3989,0,-57,0,0x22000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-1641,1229,-6465,0,-84,0,0x23000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-5279,-765,7194,0,93,0,0x52000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(195,-2284,-765,-6594,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(201,869,-773,-1978,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(124,-225,-765,-708,0,0,0,0x240000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,2670,-322,1512,0,180,0,0x200000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-5294,32,3098,0,304,0,0x1f0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,4538,-643,-5569,0,271,0,0x210000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-793,-611,-584,0,180,0,0x220000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-3227,-579,-6354,0,178,0,0x240000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,910,-225,-6235,0,91,0,0x250000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,159,901,-1036,0,89,0,0x230000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-173,1608,-6410,0,180,0,0x260000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-3240,1415,-5658,0,180,0,0x270000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,4037,-740,6142,0,0,0,0x280000, bhvInstantActiveWarp,31),
OBJECT_WITH_ACTS(0,2702,-322,1480,0,180,0,0x2a0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-5308,0,3088,0,300,0,0x290000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,4503,-643,-5565,0,271,0,0x2b0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-804,-611,-611,0,180,0,0x2c0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-3268,-547,-6293,0,180,0,0x2e0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,868,-225,-6244,0,88,0,0x2f0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,161,901,-1029,0,89,0,0x2d0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-161,1576,-6433,0,180,0,0x300000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-3240,1448,-5636,0,180,0,0x310000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(22,2766,1229,-3989,0,0,0,0x1b0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-804,-774,5533,0,0,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,2413,1383,-4407,0,180,0,0x1e0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(124,-1702,-765,2398,0,357,0,0x250000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,2411,1383,-4402,0,180,0,0x320000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(124,-4894,-225,3585,0,142,0,0xf0000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_2_[] = {
WARP_NODE(1,9,2,10,0),
WARP_NODE(13,24,2,10,0),
WARP_NODE(3,12,2,10,0),
WARP_NODE(4,17,2,10,0),
WARP_NODE(5,28,2,10,0),
WARP_NODE(6,7,2,10,0),
WARP_NODE(7,22,2,10,0),
WARP_NODE(8,8,2,10,0),
WARP_NODE(9,23,2,10,0),
WARP_NODE(12,29,2,10,0),
WARP_NODE(11,6,2,10,0),
WARP_NODE(0,26,2,10,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(21,26,2,10,0),
WARP_NODE(22,24,2,10,0),
WARP_NODE(23,12,2,10,0),
WARP_NODE(24,17,2,10,0),
WARP_NODE(25,28,2,10,0),
WARP_NODE(26,7,2,10,0),
WARP_NODE(27,29,2,10,0),
WARP_NODE(28,31,2,10,0),
WARP_NODE(29,26,2,10,0),
WARP_NODE(30,26,2,10,0),
WARP_NODE(31,26,2,10,0),
WARP_NODE(32,26,2,10,0),
WARP_NODE(33,26,2,10,0),
WARP_NODE(34,26,2,10,0),
WARP_NODE(35,26,2,10,0),
WARP_NODE(36,26,2,10,0),
WARP_NODE(37,26,2,10,0),
WARP_NODE(38,26,2,10,0),
WARP_NODE(39,26,2,10,0),
WARP_NODE(40,26,2,10,0),
WARP_NODE(41,26,2,10,0),
WARP_NODE(42,26,2,10,0),
WARP_NODE(43,26,2,10,0),
WARP_NODE(44,26,2,10,0),
WARP_NODE(45,26,2,10,0),
WARP_NODE(46,26,2,10,0),
WARP_NODE(47,26,2,10,0),
WARP_NODE(48,26,2,10,0),
WARP_NODE(49,26,2,10,0),
WARP_NODE(50,26,2,10,0),
WARP_NODE(0x40,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(10,9,2,10,0),
WARP_NODE(11,9,2,12,0),
WARP_NODE(12,9,2,11,0),
WARP_NODE(13,9,2,14,0),
WARP_NODE(2,24,2,10,0),
WARP_NODE(240,6,2,50,0),
WARP_NODE(241,26,2,241,0),
WARP_NODE(3,12,2,10,0),
WARP_NODE(4,17,2,10,0),
WARP_NODE(5,28,2,10,0),
WARP_NODE(6,7,2,10,0),
WARP_NODE(12,29,2,10,0),
WARP_NODE(11,31,2,10,0),
WARP_NODE(6,9,2,10,0),
RETURN()
};
