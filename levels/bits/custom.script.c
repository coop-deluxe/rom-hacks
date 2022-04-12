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
#include "levels/bits/header.h"
extern u8 _bits_segment_ESegmentRomStart[]; 
extern u8 _bits_segment_ESegmentRomEnd[];
#include "levels/bitdw/header.h"
const LevelScript level_bits_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd),
LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
LOAD_RAW(0x1A, _bitdwSegmentRomStart, _bitdwSegmentRomEnd),
LOAD_RAW(0x0E, _bits_segment_ESegmentRomStart, _bits_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom35225280_skybox_mio0SegmentRomStart,_SkyboxCustom35225280_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       geo_bitdw_0003C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       geo_bitdw_0003D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,       geo_bitdw_0003F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,       geo_bitdw_000408),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,       geo_bitdw_000420),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,       geo_bitdw_000438),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,       geo_bitdw_000450),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,       geo_bitdw_000468),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,       geo_bitdw_000480),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,       geo_bitdw_000498),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,       geo_bitdw_0004B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,       geo_bitdw_0004C8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,       geo_bitdw_0004E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,       geo_bitdw_0004F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,       geo_bitdw_000510),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE,         warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM,   geo_bitdw_000558),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SEESAW_PLATFORM,   geo_bitdw_000540),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SLIDING_PLATFORM,  geo_bitdw_000528),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_FERRIS_WHEEL_AXLE, geo_bitdw_000570),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_BLUE_PLATFORM,     geo_bitdw_000588),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME4,  geo_bitdw_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME3,  geo_bitdw_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME2,  geo_bitdw_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME1,  geo_bitdw_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE,         geo_bitdw_000600),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, custom_castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, custom_castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, custom_castle_door_3_star_geo),
LOAD_MODEL_FROM_GEO(37, custom_key_door_geo),
LOAD_MODEL_FROM_GEO(38, custom_castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bits_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,3376,-2003,-5471),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bits_1_[] = {
AREA(1,Geo_bits_1_0x20e1700),
TERRAIN(col_bits_1_0xe02e440),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bits_1_),
JUMP_LINK(local_warps_bits_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bits_1_[] = {
OBJECT_WITH_ACTS(0,3376,-2003,-5471,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(56,-3619,-390,6601,0,0,0,0x3ce0000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(56,-1593,190,-3980,0,180,0,0x3ce0000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(56,-2228,190,-3158,0,90,0,0x3820000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(56,-2228,1289,-3158,0,90,0,0x3820000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(0,-5551,-192,-2274,0,180,0,0x0, bhvWaterBombSpawner,31),
OBJECT_WITH_ACTS(0,-5538,-65,-3038,0,0,0,0x0, bhvWaterBombSpawner,31),
OBJECT_WITH_ACTS(0,-5229,-8,-4002,0,0,0,0x0, bhvWaterBombSpawner,31),
OBJECT_WITH_ACTS(55,1476,2490,-4980,0,90,0,0x0, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(55,1873,2589,-3582,0,0,0,0x0, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(137,2780,3422,-3782,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-1613,2107,6581,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(129,-4935,-1547,2341,0,27,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-949,32,6463,0,11,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-1476,632,7311,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-1364,1871,6350,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(212,5491,0,3683,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-4466,68,-3972,0,0,0,0x0, bhvWaterBombSpawner,31),
OBJECT_WITH_ACTS(206,3153,-2176,-2210,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-5696,-404,2322,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-1014,736,7150,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-634,2295,-4989,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,1873,3295,-2089,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(192,3097,-2680,-3295,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,4225,-1628,2900,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-4935,-1547,2775,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,-5551,-8,-3673,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,5502,-1213,2310,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,5651,-1687,2460,0,270,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,5365,-950,2465,0,90,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,5500,-661,2592,0,180,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,5636,-361,2470,0,270,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,5502,30,2332,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(54,-5824,-521,220,0,0,0,0x0, bhvSquarishPathMoving,31),
OBJECT_WITH_ACTS(54,-5210,-521,834,0,0,0,0x20000, bhvSquarishPathMoving,31),
OBJECT_WITH_ACTS(16,-5522,-585,536,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(54,-5824,-294,-1140,0,0,0,0x0, bhvSquarishPathMoving,31),
OBJECT_WITH_ACTS(54,-5210,-294,-526,0,0,0,0x20000, bhvSquarishPathMoving,31),
OBJECT_WITH_ACTS(16,-5522,-358,-824,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(57,4532,-1880,-927,0,90,0,0x10000, bhvFerrisWheelAxle,31),
OBJECT_WITH_ACTS(57,4532,-1880,454,0,90,0,0x10000, bhvFerrisWheelAxle,31),
OBJECT_WITH_ACTS(137,4232,-1220,-3308,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,5560,-958,-4490,0,0,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(0,1881,3191,-1480,0,0,0,0x730000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(223,2850,-297,2532,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,2148,477,2546,0,270,0,0x40000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,4227,-1828,-2220,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,1879,3804,217,0,0,0,0xa0e0000, bhvWarp,31),
OBJECT_WITH_ACTS(116,-4715,-1047,6793,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-4533,-747,6395,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-4321,-447,6794,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-4919,-1347,6406,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(223,-2477,32,6600,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-2222,1356,-4385,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-2237,2424,-3984,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(206,-2227,2295,-5014,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(0,2775,2591,-4776,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(122,5500,707,2479,0,0,0,0x5410000, bhvCustomSMSRStarReplica,31),
OBJECT_WITH_ACTS(180,-5528,-1495,6593,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(116,-1341,395,-3980,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,1864,4518,-337,0,0,0,0x650000, bhvDeathWarp,31),
RETURN()
};
const LevelScript local_warps_bits_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,34,1,10,0),
WARP_NODE(240,6,1,3,0),
WARP_NODE(241,6,1,4,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(101,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
