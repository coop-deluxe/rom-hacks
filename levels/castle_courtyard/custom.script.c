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
#include "levels/castle_courtyard/header.h"
extern u8 _castle_courtyard_segment_ESegmentRomStart[]; 
extern u8 _castle_courtyard_segment_ESegmentRomEnd[];
#include "levels/castle_grounds/header.h"

const LevelScript level_castle_courtyard_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd),
    LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
    LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
    LOAD_MIO0(0xA,_SkyboxCustom39812800_skybox_mio0SegmentRomStart,_SkyboxCustom39812800_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
    LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
    LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
    LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           castle_grounds_geo_0006F4),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE,  bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE,    warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR,  castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR,   metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL,  castle_grounds_geo_00070C),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG,         castle_grounds_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724),
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
    LOAD_MODEL_FROM_GEO(41, metal_door_geo),
    // LOAD_MODEL_FROM_GEO(88,0x0500c778),
    // LOAD_MODEL_FROM_DL(132,0x08025f08,4),
    // LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
    // LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
    // LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
    // LOAD_MODEL_FROM_DL(164,0x04032a18,4),
    // LOAD_MODEL_FROM_DL(201,0x080048e0,4),
    // LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_12),
    JUMP_LINK(script_func_global_16),
    JUMP_LINK(local_area_castle_courtyard_1_),
    FREE_LEVEL_POOL(),
    MARIO_POS(1,0,-989,1389,-2671),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};

const LevelScript local_area_castle_courtyard_1_[] = {
    AREA(1,Geo_castle_courtyard_1_0x2541700),
    TERRAIN(col_castle_courtyard_1_0xe084408),
    SET_BACKGROUND_MUSIC(0,45), // New music in new slot.
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_castle_courtyard_1_),
    JUMP_LINK(local_warps_castle_courtyard_1_),
    END_AREA(),
    RETURN()
};

const LevelScript local_objects_castle_courtyard_1_[] = {
    OBJECT_WITH_ACTS(37,-1066,712,-3705,0,0,0,0x0, bhvDoorWarp,31),
    OBJECT_WITH_ACTS(37,-914,712,-3705,0,180,0,0x10000, bhvDoorWarp,31),
    OBJECT_WITH_ACTS(34,-3141,1512,-1246,0,90,0,0x0, bhvDoor,31),
    OBJECT_WITH_ACTS(36,1162,1512,-1244,0,270,0,0x41e0000, bhvDoor,31),
    OBJECT_WITH_ACTS(36,2886,-3385,-2107,0,0,0,0x41e0000, bhvDoor,31),
    OBJECT_WITH_ACTS(22,-4280,1613,-1243,0,90,0,0x20000, bhvWarpPipe,31),
    OBJECT_WITH_ACTS(22,2295,-3285,6302,0,180,0,0x30000, bhvWarpPipe,31),
    OBJECT_WITH_ACTS(37,-1065,1512,1190,0,0,0,0x1070000, bhvDoorWarp,31),
    OBJECT_WITH_ACTS(37,-913,1512,1190,0,180,0,0x1070000, bhvDoorWarp,31),
    OBJECT_WITH_ACTS(0,-990,2083,-1353,0,0,0,0x640000, bhvPoleGrabbing,31),
    OBJECT_WITH_ACTS(144,-1301,1925,-1177,0,0,0,0x10000, bhvFlame,31),
    OBJECT_WITH_ACTS(144,-1301,1925,-1540,0,0,0,0x10000, bhvFlame,31),
    OBJECT_WITH_ACTS(144,-990,1925,-1000,0,0,0,0x10000, bhvFlame,31),
    OBJECT_WITH_ACTS(144,-680,1925,-1177,0,0,0,0x10000, bhvFlame,31),
    OBJECT_WITH_ACTS(144,-680,1925,-1538,0,0,0,0x10000, bhvFlame,31),
    OBJECT_WITH_ACTS(144,-990,1925,-1720,0,0,0,0x10000, bhvFlame,31),
    OBJECT_WITH_ACTS(0,-379,1592,562,0,180,0,0x140000, bhvSignOnWall,31),
    OBJECT_WITH_ACTS(37,-1065,3712,1190,0,0,0,0xa0000, bhvDoorWarp,31),
    OBJECT_WITH_ACTS(37,-913,3712,1190,0,180,0,0xa0000, bhvDoorWarp,31),
    OBJECT_WITH_ACTS(0,-989,3711,300,0,180,0,0x80000, bhvFlyingWarp,31),
    OBJECT_WITH_ACTS(0,-989,1510,300,0,180,0,0x90000, bhvFlyingWarp,31),
    OBJECT_WITH_ACTS(116,438,1116,-1506,0,0,0,0x0, bhvOneCoin,31),
    OBJECT_WITH_ACTS(116,-2415,1116,-1506,0,0,0,0x0, bhvOneCoin,31),
    OBJECT_WITH_ACTS(0,340,938,-33,0,45,0,0xa040000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,340,990,-33,0,45,0,0x50000, bhvPaintingStarCollectWarp,31),
    OBJECT_WITH_ACTS(0,340,990,-33,0,45,0,0x60000, bhvPaintingDeathWarp,31),
    OBJECT_WITH_ACTS(0,-2315,990,-33,0,315,0,0xa0b0000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,-2315,990,-33,0,315,0,0xc0000, bhvPaintingStarCollectWarp,31),
    OBJECT_WITH_ACTS(0,-2315,990,-33,0,315,0,0xd0000, bhvPaintingDeathWarp,31),
    OBJECT_WITH_ACTS(221,-2485,713,-2111,0,83,0,0x31000000, bhvToadMessage,31),
    OBJECT_WITH_ACTS(0,-990,3036,-1353,0,0,0,0xe0000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,-989,1389,-2671,0,180,0,0xf0000, bhvAirborneStarCollectWarp,31),
    OBJECT_WITH_ACTS(0,-989,1389,-2671,0,0,0,0x100000, bhvDeathWarp,31),
    OBJECT_WITH_ACTS(0,2730,1614,-1133,0,0,0,0xa110000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,2730,1614,-1356,0,0,0,0xa110000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,2730,1817,-1244,0,90,0,0x120000, bhvPaintingStarCollectWarp,31),
    OBJECT_WITH_ACTS(0,2730,1817,-1244,0,90,0,0x130000, bhvPaintingDeathWarp,31),
    OBJECT_WITH_ACTS(221,1410,1512,-2210,0,8,0,0x33000000, bhvToadMessage,31),
    OBJECT_WITH_ACTS(0,7085,-3177,3904,0,0,0,0x19140000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,6273,-3073,3904,0,90,0,0x150000, bhvAirborneStarCollectWarp,31),
    OBJECT_WITH_ACTS(0,6273,-3073,3904,0,90,0,0x160000, bhvDeathWarp,31),
    OBJECT_WITH_ACTS(0,2884,-3229,-3461,0,0,0,0xf170000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,2884,-3073,-3461,0,180,0,0x180000, bhvPaintingStarCollectWarp,31),
    OBJECT_WITH_ACTS(0,2884,-3073,-3461,0,180,0,0x190000, bhvPaintingDeathWarp,31),
    OBJECT_WITH_ACTS(0,-1833,-3373,-1246,0,180,0,0x28000000, bhvStarDoor,31),
    OBJECT_WITH_ACTS(0,-1991,-3373,-1214,0,0,0,0x28000000, bhvStarDoor,31),
    OBJECT_WITH_ACTS(0,-1917,-3333,-1476,0,0,0,0x1a0000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,-1915,-3073,-337,0,180,0,0x1b0000, bhvAirborneStarCollectWarp,31),
    OBJECT_WITH_ACTS(0,-1915,-3073,-337,0,180,0,0x1c0000, bhvDeathWarp,31),
    OBJECT_WITH_ACTS(0,760,-1706,1533,0,0,0,0x1d0000, bhvWarp,31),
    OBJECT_WITH_ACTS(22,1518,511,5708,0,270,0,0x1e0000, bhvWarpPipe,31),
    OBJECT_WITH_ACTS(0,3884,-2500,2789,0,0,0,0xa1f0000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,4487,-3110,1911,0,180,0,0xf200000, bhvWarp,31),
    OBJECT_WITH_ACTS(221,-2862,511,5708,0,90,0,0x3f000000, bhvToadMessage,31),
    OBJECT_WITH_ACTS(0,1485,-2763,-600,0,0,180,0x210000, bhvWarpPipe,31),
    OBJECT_WITH_ACTS(0,1488,-3385,1056,0,0,0,0xa220000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,5487,-3385,3309,0,0,0,0xa220000, bhvWarp,31),
    OBJECT_WITH_ACTS(221,4800,-3385,728,0,345,0,0x52000000, bhvToadMessage,31),
    OBJECT_WITH_ACTS(137,-1713,-3120,4506,0,0,0,0x10000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(207,-1137,-3986,4506,0,270,0,0x0, bhvFloorSwitchHiddenObjects,31),
    OBJECT_WITH_ACTS(129,-847,-3948,4506,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-662,-3681,4506,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-472,-3411,4506,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-258,-3137,4506,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(0,-2578,3854,-1872,0,75,0,0xa230000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,-2517,3854,-2090,0,75,0,0xa230000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,-2305,4063,-1913,0,254,0,0x240000, bhvAirborneStarCollectWarp,31),
    OBJECT_WITH_ACTS(0,-2305,4063,-1913,0,254,0,0x250000, bhvDeathWarp,31),
    OBJECT_WITH_ACTS(0,-989,4062,-3598,0,0,0,0x14260000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,-989,4102,-3005,0,180,0,0x270000, bhvAirborneStarCollectWarp,31),
    OBJECT_WITH_ACTS(0,-989,4102,-3005,0,180,0,0x280000, bhvDeathWarp,31),
    OBJECT_WITH_ACTS(0,541,3874,173,0,45,0,0x14290000, bhvWarp,31),
    OBJECT_WITH_ACTS(0,503,4082,137,0,45,0,0x2a0000, bhvPaintingStarCollectWarp,31),
    OBJECT_WITH_ACTS(0,503,4082,137,0,45,0,0x2b0000, bhvPaintingDeathWarp,31),
    OBJECT_WITH_ACTS(124,-1409,3711,-577,0,0,0,0x480000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(56,-3495,4070,-3253,0,0,0,0x0, bhvCustomHiddenAt120Stars,31),
    OBJECT_WITH_ACTS(128,-989,4137,-1365,0,0,0,0x3f0000, bhvCannon,31),
    OBJECT_WITH_ACTS(56,-3495,4070,-3475,0,0,0,0x0, bhvCustomHiddenAt120Stars,31),
    OBJECT_WITH_ACTS(56,-3293,4070,-3475,0,0,0,0x0, bhvCustomHiddenAt120Stars,31),
    OBJECT_WITH_ACTS(56,-3293,4070,-3253,0,0,0,0x0, bhvCustomHiddenAt120Stars,31),
    OBJECT_WITH_ACTS(0,-983,6563,-2163,0,0,0,0x282c0000, bhvWarp,31),
    OBJECT_WITH_ACTS(124,-3944,1512,-893,0,90,0,0x400000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(221,688,3811,-2066,0,276,0,0x42000000, bhvToadMessage,31),
    OBJECT_WITH_ACTS(137,3093,-3122,4506,0,0,0,0x30000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(0,-2949,-3906,3749,0,0,0,0x0, bhvFish3,31),
    OBJECT_WITH_ACTS(0,171,-3906,3752,0,0,0,0x0, bhvFish3,31),
    OBJECT_WITH_ACTS(0,4546,-3906,3828,0,0,0,0x0, bhvFish3,31),
    OBJECT_WITH_ACTS(0,1631,-3906,-3,0,0,0,0x0, bhvFish3,31),
    OBJECT_WITH_ACTS(0,-1921,-3385,694,0,0,0,0x0, bhvGoombaTripletSpawner,31),
    OBJECT_WITH_ACTS(0,-3259,-2500,1067,0,90,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(129,3141,-3385,7174,0,0,0,0x30000, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(129,7899,-3385,3119,0,0,0,0x30000, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(129,2849,-3385,7172,0,0,0,0x0, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(129,1436,-3385,7136,0,0,0,0x10000, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(0,2848,-3385,890,0,0,0,0x0, bhvGoombaTripletSpawner,31),
    OBJECT_WITH_ACTS(137,7787,-2166,2823,0,0,0,0x70000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(137,-119,4772,74,0,45,0,0x70000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(129,3353,-3385,-3160,0,0,0,0x10000, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(116,3220,-2802,-401,0,0,0,0x0, bhvOneCoin,31),
    OBJECT_WITH_ACTS(116,3390,-3003,204,0,0,0,0x0, bhvOneCoin,31),
    OBJECT_WITH_ACTS(0,1171,1662,-1242,0,180,0,0x0, bhvCustomSMSR30StarDoorWall,31),
    OBJECT_WITH_ACTS(0,2887,-3233,-2131,0,270,0,0x0, bhvCustomSMSR30StarDoorWall,31),
    RETURN()
};

const LevelScript local_warps_castle_courtyard_1_[] = {
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(0,0,0,0,0),
    WARP_NODE(39,36,1,10,0),
    WARP_NODE(40,36,1,10,0),
    WARP_NODE(41,13,1,10,0),
    WARP_NODE(42,13,1,10,0),
    WARP_NODE(43,13,1,10,0),
    WARP_NODE(44,6,1,10,0),
    WARP_NODE(45,0,0,0,0),
    WARP_NODE(46,0,0,0,0),
    WARP_NODE(47,0,0,0,0),
    WARP_NODE(48,0,0,0,0),
    WARP_NODE(49,0,0,0,0),
    WARP_NODE(50,0,0,0,0),
    WARP_NODE(23,22,1,10,0),
    WARP_NODE(24,22,1,10,0),
    WARP_NODE(25,22,1,10,0),
    WARP_NODE(26,19,1,10,0),
    WARP_NODE(27,19,1,10,0),
    WARP_NODE(28,19,1,10,0),
    WARP_NODE(29,26,1,30,0),
    WARP_NODE(30,26,1,33,0),
    WARP_NODE(31,26,1,32,0),
    WARP_NODE(32,26,1,33,0),
    WARP_NODE(33,26,1,10,0),
    WARP_NODE(34,26,1,33,0),
    WARP_NODE(35,11,1,10,0),
    WARP_NODE(36,11,1,10,0),
    WARP_NODE(37,11,1,10,0),
    WARP_NODE(38,36,1,10,0),
    WARP_NODE(21,7,1,10,0),
    WARP_NODE(22,7,1,10,0),
    WARP_NODE(7,26,1,8,0),
    WARP_NODE(8,26,1,7,0),
    WARP_NODE(9,26,1,10,0),
    WARP_NODE(10,26,1,9,0),
    WARP_NODE(11,10,1,10,0),
    WARP_NODE(12,10,1,10,0),
    WARP_NODE(13,10,1,10,0),
    WARP_NODE(14,20,1,10,0),
    WARP_NODE(15,20,1,10,0),
    WARP_NODE(16,20,1,10,0),
    WARP_NODE(17,23,1,10,0),
    WARP_NODE(18,23,1,10,0),
    WARP_NODE(19,23,1,10,0),
    WARP_NODE(20,7,1,10,0),
    WARP_NODE(240,16,1,201,0),
    WARP_NODE(241,16,1,201,0),
    WARP_NODE(0,16,1,24,0),
    WARP_NODE(1,16,1,23,0),
    WARP_NODE(2,26,1,3,0),
    WARP_NODE(3,26,1,2,0),
    WARP_NODE(4,8,1,10,0),
    WARP_NODE(5,8,1,10,0),
    WARP_NODE(6,8,1,10,0),
    RETURN()
};
