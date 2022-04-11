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
#include "levels/castle_grounds/header.h"
extern u8 _castle_grounds_segment_ESegmentRomStart[]; 
extern u8 _castle_grounds_segment_ESegmentRomEnd[];
#include "levels/wf/header.h"
const LevelScript level_castle_grounds_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd),
LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd),
LOAD_RAW(0x1A, _wfSegmentRomStart, _wfSegmentRomEnd),
LOAD_RAW(0x0E, _castle_grounds_segment_ESegmentRomStart, _castle_grounds_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                wf_geo_0007E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                wf_geo_000820),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                wf_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                wf_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                wf_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                wf_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,                wf_geo_0008E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                wf_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                wf_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE,                    wf_geo_000AE0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                wf_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,                wf_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM,             wf_geo_0009B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,                wf_geo_0009D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,                wf_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP,                    wf_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP,                    wf_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM,      wf_geo_000A58),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM,              wf_geo_000A98),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART,          wf_geo_000AB0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE,               wf_geo_000AC8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM,       wf_geo_000AF8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM,          wf_geo_000B10),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED,   wf_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT,          wf_geo_000B78),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT,           wf_geo_000B90),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD,                wf_geo_000BA8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR,                    wf_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED,         wf_geo_000BC8),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
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
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_grounds_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6797,1830,2710),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_grounds_1_[] = {
AREA(1,Geo_castle_grounds_1_0x1c81700),
TERRAIN(col_castle_grounds_1_0xe071d98),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_1_),
JUMP_LINK(local_warps_castle_grounds_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_1_[] = {
OBJECT_WITH_ACTS(0,5620,-156,5654,0,0,0,0x0, bhvBirdsSoundLoop,31),
OBJECT_WITH_ACTS(0,-3917,-208,-3104,0,0,0,0x10000, bhvBirdsSoundLoop,31),
OBJECT_WITH_ACTS(0,-3663,104,7008,0,0,0,0x20000, bhvBirdsSoundLoop,31),
OBJECT_WITH_ACTS(23,-4036,-614,-2969,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5624,-564,5653,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-3665,-214,6984,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(37,1897,-614,-1583,0,270,0,0x2170000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,1897,-614,-1431,0,90,0,0x2180000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(124,2694,6385,-1363,0,90,0,0x6d0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(212,3313,8625,-1507,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(23,-4063,-614,-3987,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-6694,1467,1276,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-7258,54,-5217,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-7503,688,-1464,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2013,-614,-308,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1285,-538,-4620,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-4235,-423,1466,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2568,-255,2642,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1778,-214,5223,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,6528,-557,-5869,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(124,-6363,1831,2922,0,225,0,0x4e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,5305,-566,5775,0,251,0,0x4d0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,-3417,-163,5073,0,180,0,0x3c0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-6713,2451,2610,0,270,0,0x90000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(35,5465,-614,-3681,0,315,0,0x8080000, bhvDoor,31),
OBJECT_WITH_ACTS(35,5478,-614,644,0,225,0,0x8080000, bhvDoor,31),
OBJECT_WITH_ACTS(100,-6488,546,5261,0,90,0,0x0, bhvMips,31),
OBJECT_WITH_ACTS(0,6395,-607,-1435,0,90,0,0x14000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,6395,-607,-1593,0,270,0,0x14000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(137,6028,-339,-3342,0,45,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,6663,495,1821,0,315,0,0x400000, bhvWarp,31),
OBJECT_WITH_ACTS(85,-6710,1831,2209,0,0,0,0xa10000, bhvYoshi,31),
OBJECT_WITH_ACTS(221,4275,2795,-1519,0,90,0,0x4c000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(128,7513,1052,-1513,0,0,0,0x7f0000, bhvCannon,31),
OBJECT_WITH_ACTS(221,-2086,-612,-2309,0,270,0,0x7d000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(0,3428,-612,-4852,90,345,0,0xc140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,3276,-612,-4903,0,345,0,0xc140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,3356,-260,-4881,0,165,0,0x150000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,3356,-260,-4881,0,165,0,0x160000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,3510,-502,1752,0,0,0,0x230000, bhvWarp,31),
OBJECT_WITH_ACTS(22,3703,6383,-1498,0,270,0,0xc60000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,3315,-323,1186,0,0,0,0x240000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,3315,-323,1186,0,0,0,0x250000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(187,-2274,-614,-1025,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-2017,-614,-751,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,5691,-562,6054,0,0,0,0x0, bhvTripletButterfly,31),
OBJECT_WITH_ACTS(187,-4128,-214,3188,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-4608,-212,3319,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-4385,-614,-2551,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-2219,0,-8442,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-2219,0,-8442,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-7544,782,-899,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-7545,277,-3947,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,1382,-537,657,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,1335,-614,-3667,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,489,-614,-2543,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,364,-537,-142,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,987,-614,-3186,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,4080,-614,302,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(84,-7459,1063,-1433,0,0,0,0x10000, bhvBird,31),
OBJECT_WITH_ACTS(84,-2649,104,2763,0,0,0,0x10000, bhvBird,31),
OBJECT_WITH_ACTS(0,7511,196,-6596,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,6746,-352,1759,0,45,0,0x81a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6603,-352,1892,0,45,0,0x81a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6705,-221,1839,0,45,0,0x1b0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,6705,-221,1839,0,45,0,0x1c0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-3416,-52,5069,0,0,0,0x1d0000, bhvLaunchStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-3416,-52,5069,0,0,0,0x1e0000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(0,7653,-614,-1519,0,0,0,0x260000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,7653,-510,-1519,0,90,0,0x270000, bhvLaunchStarCollectWarp,31),
OBJECT_WITH_ACTS(0,7653,-510,-1519,0,90,0,0x280000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(0,6604,-352,-4932,0,315,0,0x8290000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6729,-352,-4807,0,315,0,0x8290000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6671,-221,-4872,0,135,0,0x2a0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,6671,-221,-4872,0,135,0,0x2b0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(22,6958,-423,-5149,0,0,0,0x2c0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,6967,-313,-5152,0,45,0,0x2d0000, bhvLaunchStarCollectWarp,31),
OBJECT_WITH_ACTS(0,6967,-313,-5152,0,45,0,0x2e0000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(221,2950,-614,-4799,0,347,0,0x61000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(116,4198,-360,1786,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2404,-413,1829,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-6715,2456,2612,0,90,0,0x800000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-6718,2123,2624,0,90,0,0xc90000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,2038,7291,5398,0,270,0,0xf50000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,3254,-938,5862,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,105,-937,3865,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(137,2695,6645,-1625,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(116,3315,2585,-2843,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3315,2574,-158,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,5576,-354,-3568,0,315,180,0x0, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-6013,-521,1952,0,0,0,0x0, bhvMadPiano,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_1_[] = {
WARP_NODE(201,16,1,201,0),
WARP_NODE(37,24,1,10,0),
WARP_NODE(26,5,1,10,0),
WARP_NODE(27,5,1,10,0),
WARP_NODE(28,5,1,10,0),
WARP_NODE(29,12,1,10,0),
WARP_NODE(30,12,1,10,0),
WARP_NODE(240,16,1,201,0),
WARP_NODE(241,16,1,201,0),
WARP_NODE(31,12,1,10,0),
WARP_NODE(32,9,1,10,0),
WARP_NODE(33,9,1,10,0),
WARP_NODE(34,9,1,10,0),
WARP_NODE(38,17,1,10,0),
WARP_NODE(39,17,1,10,0),
WARP_NODE(40,17,1,10,0),
WARP_NODE(41,4,1,10,0),
WARP_NODE(42,4,1,10,0),
WARP_NODE(43,4,1,10,0),
WARP_NODE(44,27,1,10,0),
WARP_NODE(45,27,1,10,0),
WARP_NODE(46,27,1,10,0),
WARP_NODE(128,6,1,10,0),
WARP_NODE(198,29,1,14,0),
WARP_NODE(245,16,1,245,0),
WARP_NODE(255,6,1,10,0),
WARP_NODE(255,6,1,10,0),
WARP_NODE(255,6,1,10,0),
WARP_NODE(255,6,1,10,0),
WARP_NODE(64,5,1,2,0),
WARP_NODE(10,9,1,10,0),
WARP_NODE(9,16,1,9,0),
WARP_NODE(31,16,1,31,0),
WARP_NODE(0,16,1,0,0),
WARP_NODE(60,12,1,1,0),
WARP_NODE(23,26,1,1,0),
WARP_NODE(24,26,1,0,0),
WARP_NODE(242,31,1,10,0),
WARP_NODE(20,9,1,10,0),
WARP_NODE(21,9,1,10,0),
WARP_NODE(22,9,1,10,0),
WARP_NODE(35,24,1,10,0),
WARP_NODE(36,24,1,10,0),
WARP_NODE(37,24,1,10,0),
RETURN()
};
