/* ================== Overrides ==================  */

const BehaviorScript bhvSMSRBigBully[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvBigBully),
    OR_INT(oFlags, (OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_ANIMATIONS(oAnimations, bully_seg5_anims_0500470C),
    SCALE(/*Unused*/ 0, /*Field*/ 144),
    DROP_TO_FLOOR(),
    SET_HOME(),
    CALL_NATIVE(bhv_big_bully_init),
    BEGIN_LOOP(),
        SET_INT(oIntangibleTimer, 0),
        CALL_NATIVE(bhv_bully_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRBigChillBully[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvBigChillBully),
    OR_INT(oFlags, (OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_ANIMATIONS(oAnimations, chilly_chief_seg6_anims_06003994),
    //SCALE(/*Unused*/ 0, /*Field*/ 176),
    SCALE(/*Unused*/ 0, /*Field*/ 144),
    DROP_TO_FLOOR(),
    SET_HOME(),
    SET_INT(oBullySubtype, 0x0010),
    CALL_NATIVE(bhv_big_bully_init),
    BEGIN_LOOP(),
        SET_INT(oIntangibleTimer, 0),
        CALL_NATIVE(bhv_bully_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRChainChomp[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvChainChomp),
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_ACTIVE_FROM_AFAR | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    DROP_TO_FLOOR(),
    LOAD_ANIMATIONS(oAnimations, chain_chomp_seg6_anims_06025178),
    ANIMATE(0),
    SET_OBJ_PHYSICS(/*Wall hitbox radius*/ 0, /*Gravity*/ -400, /*Bounciness*/ -50, /*Drag strength*/ 0, /*Friction*/ 1000, /*Buoyancy*/ 200, /*Unused*/ 0, 0),
    HIDE(),
    SET_HOME(),
    SET_FLOAT(oGraphYOffset, 240),
    SCALE(/*Unused*/ 0, /*Field*/ 168),
    //SPAWN_CHILD_WITH_PARAM(/*Bhv param*/ 0, /*Model*/ MODEL_WOODEN_POST, /*Behavior*/ bhvWoodenPost),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_chain_chomp_update),
    END_LOOP(),
};

const BehaviorScript bhvSMSRHiddenStarTrigger[] = {
    BEGIN(OBJ_LIST_LEVEL),
    ID(id_bhvHiddenStarTrigger),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    SET_HITBOX(200, 200),
    SET_INT(oIntangibleTimer, 0),
    CALL_NATIVE(bhv_custom_hidden_star_trigger_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_custom_hidden_star_trigger_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRHiddenStar[] = {
    BEGIN(OBJ_LIST_LEVEL),
    ID(id_bhvHiddenStar),
    OR_INT(oFlags, (OBJ_FLAG_PERSISTENT_RESPAWN | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    CALL_NATIVE(bhv_custom_hidden_star_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_custom_hidden_star_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRRacingPenguin[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvRacingPenguin),
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_ACTIVE_FROM_AFAR | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_ANIMATIONS(oAnimations, penguin_seg5_anims_05008B74),
    ANIMATE(3),
    SET_OBJ_PHYSICS(/*Wall hitbox radius*/ 30, /*Gravity*/ -399, /*Bounciness*/ 0, /*Drag strength*/ 0, /*Friction*/ 0, /*Buoyancy*/ 200, /*Unused*/ 0, 0),
    SCALE(/*Unused*/ 0, /*Field*/ 256),
    CALL_NATIVE(bhv_racing_penguin_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_racing_penguin_update),
    END_LOOP(),
};

const BehaviorScript bhvSMSRStarDoor[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvStarDoor),
    OR_INT(oFlags, (OBJ_FLAG_ACTIVE_FROM_AFAR | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_COLLISION_DATA(inside_castle_seg7_custom_collision_star_door),
    SET_INTERACT_TYPE(INTERACT_DOOR),
    SET_INTERACT_SUBTYPE(INT_SUBTYPE_STAR_DOOR),
    SET_HITBOX(80, 100),
    SET_HOME(),
    SET_FLOAT(oDrawingDistance, 20000),
    CALL_NATIVE(bhv_door_init),
    SET_INT(oIntangibleTimer, 0),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_star_door_loop),
        CALL_NATIVE(bhv_star_door_loop_2),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRThwomp2[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvThwomp2),
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_COLLISION_DATA(thwomp_seg5_collision_0500B92C),
    DROP_TO_FLOOR(),
    ADD_FLOAT(oPosY, 1),
    SET_HOME(),
    SCALE(/*Unused*/ 0, /*Field*/ 297),
    SET_FLOAT(oDrawingDistance, 4000),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_grindel_thwomp_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRYoshi[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvYoshi),
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_HOLDABLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_ANIMATIONS(oAnimations, yoshi_seg5_anims_05024100),
    SET_INTERACT_TYPE(INTERACT_TEXT),
    SET_HITBOX(160, 150),
    ANIMATE(0),
    CALL_NATIVE(bhv_bobomb_buddy_init),
    //CALL_NATIVE(unknown_custom_yoshi_func),
    BEGIN_LOOP(),
        SET_INT(oIntangibleTimer, 0),
        CALL_NATIVE(bhv_bobomb_buddy_loop),
    END_LOOP(),
};

/* ================ New Behaviors ================  */

const BehaviorScript bhvSMSRBreakableRock[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_hmc_geo_000530_0x7020308),
    SET_FLOAT(oCollisionDistance, 500),
    CALL_NATIVE(bhv_init_room),
    CALL_NATIVE(bhv_breakable_rock_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_breakable_box_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRWoodenOctagonalPlatform[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_SET_FACE_ANGLE_TO_MOVE_ANGLE | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_COLLISION_DATA(col_hmc_geo_000570_0x7024350),
    CALL_NATIVE(bhv_ssl_moving_pyramid_wall_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_ssl_moving_pyramid_wall_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRShyGuy[] = {
    BEGIN(OBJ_LIST_PUSHABLE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_ANIMATIONS(oAnimations, flyguy_seg8_anims_08011A64),
    SET_HOME(),
    SET_OBJ_PHYSICS(/*Wall hitbox radius*/ 40, /*Gravity*/ -400, /*Bounciness*/ -50, /*Drag strength*/ 1000, /*Friction*/ 1000, /*Buoyancy*/ 0, /*Unused*/ 0, 0),
    CALL_NATIVE(bhv_goomba_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_goomba_update),
    END_LOOP(),
};

const BehaviorScript bhvSMSRBreakableWindow[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_ACTIVE_FROM_AFAR | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_COLLISION_DATA(wf_seg7_collision_small_bomp),
    SET_INT(oIntangibleTimer, 0),
    SET_HITBOX(200, 200),
    ADD_INT(oMoveAngleYaw, -0x4000),
    CALL_NATIVE(bhv_breakable_window_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_breakable_window_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRStarReplica[] = {
    BEGIN(OBJ_LIST_LEVEL),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_HOLDABLE | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    CALL_NATIVE(bhv_init_room),
    CALL_NATIVE(bhv_collect_star_init),
    CALL_NATIVE(bhv_star_replica_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_collect_star_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRRedOctagonalPlatform[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    SCALE(/*Unused*/ 0, /*Field*/ 32),
    CALL_NATIVE(bhv_rotating_octagonal_plat_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_rotating_octagonal_plat_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRRedSinkingPlatform[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_rr_geo_0008C0_0x701ae78),
    ADD_FLOAT(oPosY, -306),
    SET_HOME(),
    CALL_NATIVE(bhv_red_sinking_platform_init),
    BEGIN_LOOP(),
        CALL_NATIVE(sinking_perform_sink_check),
        CALL_NATIVE(sinking_perform_sink_check), // Called twice
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRRedWavePlatform[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_rr_geo_000678_0x701f870),
    SET_HOME(),
    SCALE(/*Unused*/ 0, /*Field*/ 91),
    CALL_NATIVE(bhv_horizontal_grindel_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_squishable_platform_loop),
        CALL_NATIVE(bhv_squishable_platform_loop), // Called twice
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRPushableTomb[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_rr_geo_000690_0x7021438),
    SET_FLOAT(oCollisionDistance, 500),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_pushable_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRLampPath[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_rr_geo_0006A8_0x70260f8),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_squarish_path_moving_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRRotatingDonutPlatform[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_COLLISION_DATA(col_rr_geo_0006C0_0x70187b8),
    SET_HOME(),
    BEGIN_LOOP(),
        SET_INT(oAngleVelYaw, 256),
        ADD_INT(oMoveAngleYaw, 256),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRWindTurbine[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_dorrie_geo_0x600cfd8),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_ttc_spinner_update),
        CALL_NATIVE(bhv_ttc_spinner_update),  // Called twice
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRLightsOnSwitch[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    SET_FLOAT(oCollisionDistance, 8000),
    CALL_NATIVE(bhv_lights_on_switch_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_lights_on_switch_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRRotatingWoodenGear[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_COLLISION_DATA(col_rr_geo_0007E8_0x7016960),
    SET_HOME(),
    BEGIN_LOOP(),
        SET_INT(oAngleVelYaw, 256),
        ADD_INT(oMoveAngleYaw, 256),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRPeachMessage[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_PERSISTENT_RESPAWN | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_ANIMATIONS(oAnimations, peach_seg5_anims_0501C41C),
    ANIMATE(6),
    SET_INTERACT_TYPE(INTERACT_TEXT),
    SET_HITBOX(80, 100),
    SET_INT(oIntangibleTimer, 0),
    CALL_NATIVE(bhv_init_room),
    CALL_NATIVE(bhv_toad_message_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_toad_message_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRYoshiMessage[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_HOLDABLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_ANIMATIONS(oAnimations, yoshi_seg5_anims_05024100),
    SET_INTERACT_TYPE(INTERACT_TEXT),
    SET_HITBOX(160, 150),
    ANIMATE(0),
    SET_INT(oBobombBuddyRole, 0),
    SET_HOME(),
    CALL_NATIVE(bhv_bobomb_buddy_init),
    BEGIN_LOOP(),
        SET_INT(oIntangibleTimer, 0),
        CALL_NATIVE(bhv_bobomb_buddy_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRStaticMessage[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_PERSISTENT_RESPAWN | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    SET_INTERACT_TYPE(INTERACT_TEXT),
    SET_HITBOX(80, 100),
    SET_INT(oIntangibleTimer, 0),
    CALL_NATIVE(bhv_init_room),
    CALL_NATIVE(bhv_toad_message_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_toad_message_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRStoneCubePlatform[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_SET_FACE_ANGLE_TO_MOVE_ANGLE | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_COLLISION_DATA(col_geo_bitdw_000510_0x700a9e8),
    CALL_NATIVE(bhv_ssl_moving_pyramid_wall_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_ssl_moving_pyramid_wall_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSR30StarDoorWall[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(custom_collision_door_30_stars),
    SET_FLOAT(oCollisionDistance, 4000),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_star_door_wall_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRSpecialBreakeableBox[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA_EXT(breakable_box_seg8_collision_08012D70),
    SET_FLOAT(oCollisionDistance, 500),
    CALL_NATIVE(bhv_init_room),
    CALL_NATIVE(bhv_special_breakable_box_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_breakable_box_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRRecoveryBubbleWater[] = {
    BEGIN(OBJ_LIST_LEVEL),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    BILLBOARD(),
    SCALE(/*Unused*/ 0, /*Field*/ 1280),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_recovery_heart_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRBreakableFloor[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_jrb_geo_000930_0x70079e8),
    SET_FLOAT(oCollisionDistance, 500),
    CALL_NATIVE(bhv_init_room),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_breakable_box_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRBoatOnTrack[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    CALL_NATIVE(bhv_init_room),
    CALL_NATIVE(bhv_platform_on_track_init),
    LOAD_COLLISION_DATA(col_jrb_geo_000978_0x7009628),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_platform_on_track_update),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRAngrySun[] = {
    BEGIN(OBJ_LIST_LEVEL),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    SET_HOME(),
    SCALE(/*Unused*/ 0, /*Field*/ 28),
    SET_INTERACT_TYPE(INTERACT_FLAME),
    SET_HITBOX_WITH_OFFSET(50, 25, 25),
    SET_INT(oIntangibleTimer, 0),
    BEGIN_LOOP(),
        SET_INT(oInteractStatus, 0),
        CALL_NATIVE(bhv_butterfly_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRYoshiCoin[] = {
    BEGIN(OBJ_LIST_LEVEL),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    BILLBOARD(),
    SCALE(/*Unused*/ 0, /*Field*/ 20),
    CALL_NATIVE(bhv_init_room),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_red_coin_init),
        CALL_NATIVE(bhv_yellow_coin_loop),
        ADD_INT(oAnimState, 1),
    END_LOOP(),
};

const BehaviorScript bhvSMSRPiranhaPlantWild[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_ANIMATIONS(oAnimations, piranha_plant_seg6_anims_0601C31C),
    ANIMATE(0),
    SET_INTERACT_TYPE(INTERACT_MR_BLIZZARD),
    SET_HITBOX(400, 400),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_piranha_plant_wild_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRMovingMushroom[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_SET_FACE_ANGLE_TO_MOVE_ANGLE | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_COLLISION_DATA(col_ttm_geo_0007A8_0x700bcd0),
    CALL_NATIVE(bhv_ssl_moving_pyramid_wall_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_ssl_moving_pyramid_wall_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRMipsMessage[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_HOLDABLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_ANIMATIONS(oAnimations, mips_seg6_anims_06015634),
    SET_INTERACT_TYPE(INTERACT_TEXT),
    SET_HITBOX(/*Radius*/ 100, /*Height*/ 60),
    ANIMATE(0),
    SET_INT(oBobombBuddyRole, 0),
    SET_HOME(),
    CALL_NATIVE(bhv_bobomb_buddy_init),
    BEGIN_LOOP(),
        SET_INT(oIntangibleTimer, 0),
        CALL_NATIVE(bhv_bobomb_buddy_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRWigglerHead[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    DROP_TO_FLOOR(),
    LOAD_ANIMATIONS(oAnimations, wiggler_seg5_anims_0500EC8C),
    SET_HOME(),
    SET_OBJ_PHYSICS(/*Wall hitbox radius*/ 60, /*Gravity*/ -400, /*Bounciness*/ 0, /*Drag strength*/ 1000, /*Friction*/ 1000, /*Buoyancy*/ 200, /*Unused*/ 0, 0),
    HIDE(),
    SCALE(/*Unused*/ 0, /*Field*/ 400),
    SET_FLOAT(oWigglerFallThroughFloorsHeight, 5000),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_wiggler_update),
        CALL_NATIVE(bhv_wiggler_update), // STAR ROAD calls this twice
    END_LOOP(),
};

const BehaviorScript bhvSMSRBigLeaves[] = {
    BEGIN(OBJ_LIST_POLELIKE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    SET_INTERACT_TYPE(INTERACT_POLE),
    SET_HITBOX(/*Radius*/ 80, /*Height*/ 500),
    SET_INT(oIntangibleTimer, 0),
    SCALE(/*Unused*/ 0, /*Field*/ 48),
    CALL_NATIVE(bhv_big_leaves_init),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_pole_base_loop),
    END_LOOP(),
};

const BehaviorScript bhvSMSRLilyPad[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    LOAD_COLLISION_DATA(col_ttm_geo_000990_0x700f688),
    ADD_FLOAT(oPosY, -306),
    SET_HOME(),
    CALL_NATIVE(bhv_lily_pad_init),
    BEGIN_LOOP(),
        CALL_NATIVE(sinking_perform_sink_check),
        CALL_NATIVE(sinking_perform_sink_check), // STAR ROAD calls this twice
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvSMSRInvisibleCannon[] = {
    BEGIN(OBJ_LIST_LEVEL),
    ID(id_bhvNewId), // id_bhvNewId signifies a new behavior.
    OR_INT(oFlags, (OBJ_FLAG_ACTIVE_FROM_AFAR | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)),
    SET_INTERACT_TYPE(INTERACT_CANNON_BASE),
    ADD_FLOAT(oPosY, -340),
    SET_HOME(),
    SET_HITBOX(/*Radius*/ 150, /*Height*/ 166),
    SET_INT(oIntangibleTimer, 0),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_cannon_base_loop),
    END_LOOP(),
};
