
function bhv_breakable_rock_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("col_hmc_geo_000530_0x7020308")
    obj.oCollisionDistance = 500
    bhv_init_room()
    network_init_object(obj, false, nil)
end

function bhv_breakable_rock_loop(obj)
    bhv_breakable_box_loop()
    load_object_collision_model()
end

bhvCustomSMSRBreakableRock = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_breakable_rock_init, bhv_breakable_rock_loop)

--------------

function bhv_wooden_octagonal_platform_init(obj)
    obj.oFlags = (OBJ_FLAG_SET_FACE_ANGLE_TO_MOVE_ANGLE | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_hmc_geo_000570_0x7024350")
    bhv_ssl_moving_pyramid_wall_init()
end

function bhv_wooden_octagonal_platform_loop(obj)
    bhv_ssl_moving_pyramid_wall_loop()
    load_object_collision_model()
end

bhvCustomSMSRWoodenOctagonalPlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_wooden_octagonal_platform_init, bhv_wooden_octagonal_platform_loop)

--------------

function bhv_shyguy_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oAnimations = gObjectAnimations.flyguy_seg8_anims_08011A64

    cur_obj_set_home_once()

    -- SET_OBJ_PHYSICS
    obj.oWallHitboxRadius = 40
    obj.oGravity = -400 / 100
    obj.oBounciness = -50 / 100
    obj.oDragStrength = 1000 / 100
    obj.oFriction = 1000 / 100
    obj.oBuoyancy = 0 / 100

    bhv_goomba_init()
end

function bhv_shyguy_loop(obj)
    bhv_goomba_update()
end

bhvCustomSMSRShyGuy = hook_behavior(nil, OBJ_LIST_PUSHABLE, true, bhv_shyguy_init, bhv_shyguy_loop)

--------------

function bhv_breakable_window_init(obj)
    obj.oFlags = (OBJ_FLAG_ACTIVE_FROM_AFAR | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("wf_seg7_collision_small_bomp")
    obj.hitboxRadius = 200
    obj.hitboxHeight = 200
    obj.oIntangibleTimer = 0
    obj.oMoveAngleYaw = obj.oFaceAngleYaw - 0x4000
    network_init_object(obj, false, nil)
end

function bhv_breakable_window_loop(obj)
    bhv_tower_door_loop()
    load_object_collision_model()
end

bhvCustomSMSRBreakableWindow = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_breakable_window_init, bhv_breakable_window_loop)

--------------

function bhv_star_replica_init(obj)
    obj.oFlags = (OBJ_FLAG_HOLDABLE | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    bhv_init_room()
    bhv_collect_star_init()
    despawn_if_stars_below_count(obj, 121) -- 121 star check
end

function bhv_star_replica_loop(obj)
    bhv_collect_star_loop()
end

bhvCustomSMSRStarReplica = hook_behavior(nil, OBJ_LIST_LEVEL, true, bhv_star_replica_init, bhv_star_replica_loop)

--------------

function bhv_red_octagonal_platform_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    cur_obj_scale(32 / 100.0)
    bhv_rotating_octagonal_plat_init()
end

function bhv_red_octagonal_platform_loop(obj)
    bhv_rotating_octagonal_plat_loop()
    load_object_collision_model()
end

bhvCustomSMSRRedOctagonalPlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_red_octagonal_platform_init, bhv_red_octagonal_platform_loop)

--------------

function bhv_red_sinking_platform_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("col_rr_geo_0008C0_0x701ae78")
    obj.oPosY = obj.oPosY + -306
    cur_obj_set_home_once()
end

function bhv_red_sinking_platform_loop(obj)
    bhv_lll_sinking_rock_block_loop()
    bhv_lll_sinking_rock_block_loop() -- called twice
    load_object_collision_model()
end

bhvCustomSMSRRedSinkingPlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_red_sinking_platform_init, bhv_red_sinking_platform_loop)

--------------

function bhv_red_wave_platform_init(obj)
    obj.collisionData = smlua_collision_util_get("col_rr_geo_000678_0x701f870")
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    cur_obj_set_home_once()
    cur_obj_scale(91 / 100.0)
    bhv_horizontal_grindel_init()
end

function bhv_red_wave_platform_loop(obj)
    bhv_squishable_platform_loop()
    bhv_squishable_platform_loop() -- called twice
    load_object_collision_model()
end

bhvCustomSMSRRedWavePlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_red_wave_platform_init, bhv_red_wave_platform_loop)

--------------

function bhv_pushable_tomb_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("col_rr_geo_000690_0x7021438")
    obj.oCollisionDistance = 500
end

function bhv_pushable_tomb_loop(obj)
    bhv_pushable_loop()
    load_object_collision_model()
end

bhvCustomSMSRPushableTomb = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_pushable_tomb_init, bhv_pushable_tomb_loop)

--------------

function bhv_lamp_path_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("col_rr_geo_0006A8_0x70260f8")
end

function bhv_lamp_path_loop(obj)
    bhv_squarish_path_moving_loop()
end

bhvCustomSMSRLampPath = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_lamp_path_init, bhv_lamp_path_loop)

--------------

function bhv_rotating_donut_platform_init(obj)
    obj.oFlags = (OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_rr_geo_0006C0_0x70187b8")
    cur_obj_set_home_once()
end

function bhv_rotating_donut_platform_loop(obj)
    obj.oAngleVelYaw = 256
    obj.oMoveAngleYaw = obj.oMoveAngleYaw + 256
    load_object_collision_model()
end

bhvCustomSMSRRotatingDonutPlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_rotating_donut_platform_init, bhv_rotating_donut_platform_loop)

--------------

function bhv_wind_turbine_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("col_dorrie_geo_0x600cfd8")
end

function bhv_wind_turbine_loop(obj)
    bhv_ttc_spinner_update()
    bhv_ttc_spinner_update() -- called twice
    load_object_collision_model()
end

bhvCustomSMSRWindTurbine = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_wind_turbine_init, bhv_wind_turbine_loop)

--------------

function bhv_lights_on_switch_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oCollisionDistance = 8000
    bhv_animates_on_floor_switch_press_init()
end

function bhv_lights_on_switch_loop(obj)
    bhv_animates_on_floor_switch_press_loop()
end

bhvCustomSMSRLightsOnSwitch = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_lights_on_switch_init, bhv_lights_on_switch_loop)

--------------

function bhv_rotating_wooden_gear_init(obj)
    obj.oFlags = (OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_rr_geo_0007E8_0x7016960")
    cur_obj_set_home_once()
end

function bhv_rotating_wooden_gear_loop(obj)
    obj.oAngleVelYaw = 256
    obj.oMoveAngleYaw = obj.oMoveAngleYaw + 256
    load_object_collision_model()
end

bhvCustomSMSRRotatingWoodenGear = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_rotating_wooden_gear_init, bhv_rotating_wooden_gear_loop)

--------------

function bhv_peach_message_init(obj)
    obj.oFlags = (OBJ_FLAG_PERSISTENT_RESPAWN | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oAnimations = gObjectAnimations.peach_seg5_anims_0501C41C
    cur_obj_init_animation(6)
    obj.oInteractType = INTERACT_TEXT
    obj.hitboxRadius = 80
    obj.hitboxHeight = 100
    obj.oIntangibleTimer = 0
    bhv_init_room()
    bhv_toad_message_init()
end

function bhv_peach_message_loop(obj)
    bhv_toad_message_loop()
end

bhvCustomSMSRPeachMessage = hook_behavior(nil, OBJ_LIST_GENACTOR, true, bhv_peach_message_init, bhv_peach_message_loop)

--------------

function bhv_yoshi_message_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_HOLDABLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oAnimations = gObjectAnimations.yoshi_seg5_anims_05024100
    obj.oInteractType = INTERACT_TEXT
    obj.hitboxRadius = 160
    obj.hitboxHeight = 150
    cur_obj_init_animation(0)
    obj.oBobombBuddyRole = 0
    cur_obj_set_home_once()
    bhv_bobomb_buddy_init()
end

function bhv_yoshi_message_loop(obj)
    obj.oIntangibleTimer = 0
    bhv_bobomb_buddy_loop()
end

bhvCustomSMSRYoshiMessage = hook_behavior(nil, OBJ_LIST_GENACTOR, true, bhv_yoshi_message_init, bhv_yoshi_message_loop)

--------------

function bhv_static_message_init(obj)
    obj.oFlags = (OBJ_FLAG_PERSISTENT_RESPAWN | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oInteractType = INTERACT_TEXT
    obj.hitboxRadius = 80
    obj.hitboxHeight = 100
    obj.oIntangibleTimer = 0
    bhv_init_room()
    bhv_toad_message_init()
end

function bhv_static_message_loop(obj)
    bhv_toad_message_loop()
end

bhvCustomSMSRStaticMessage = hook_behavior(nil, OBJ_LIST_GENACTOR, true, bhv_static_message_init, bhv_static_message_loop)

--------------

function bhv_stone_cube_platform_init(obj)
    obj.oFlags = (OBJ_FLAG_SET_FACE_ANGLE_TO_MOVE_ANGLE | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_geo_bitdw_000510_0x700a9e8")
    bhv_ssl_moving_pyramid_wall_init()
end

function bhv_stone_cube_platform_loop(obj)
    bhv_ssl_moving_pyramid_wall_loop()
    load_object_collision_model()
end

bhvCustomSMSRStoneCubePlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_stone_cube_platform_init, bhv_stone_cube_platform_loop)

--------------

function bhv_star_door_wall_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("custom_collision_door_30_stars")
    obj.oCollisionDistance = 4000
end

function bhv_star_door_wall_loop(obj)
    if get_star_count() >= 30 then
        obj.activeFlags = ACTIVE_FLAG_DEACTIVATED
    end

    load_object_collision_model()
end

bhvCustomSMSR30StarDoorWall = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_star_door_wall_init, bhv_star_door_wall_loop)

--------------

function bhv_special_breakable_box_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("breakable_box_seg8_collision_08012D70")
    obj.oCollisionDistance = 500
    bhv_init_room()
    despawn_if_stars_below_count(obj, 121) -- 121 star check
end

function bhv_special_breakable_box_loop(obj)
    bhv_breakable_box_loop()
    load_object_collision_model()
end

bhvCustomSMSRSpecialBreakeableBox = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_special_breakable_box_init, bhv_special_breakable_box_loop)

--------------

function bhv_recovery_bubble_water_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.header.gfx.node.flags = obj.header.gfx.node.flags | GRAPH_RENDER_BILLBOARD
    cur_obj_scale(1280 / 100.0)
end

function bhv_recovery_bubble_water_loop(obj)
    bhv_recovery_heart_loop()
end

bhvCustomSMSRRecoveryBubbleWater = hook_behavior(nil, OBJ_LIST_LEVEL, true, bhv_recovery_bubble_water_init, bhv_recovery_bubble_water_loop)

--------------

function bhv_breakable_floor_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("col_jrb_geo_000930_0x70079e8")
    obj.oCollisionDistance = 500
    bhv_init_room()
end

function bhv_breakable_floor_loop(obj)
    bhv_breakable_box_loop()
    load_object_collision_model()
end

bhvCustomSMSRBreakableFloor = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_breakable_floor_init, bhv_breakable_floor_loop)

--------------

function bhv_boat_on_track_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    bhv_init_room()
    bhv_platform_on_track_init()
    obj.collisionData = smlua_collision_util_get("col_jrb_geo_000978_0x7009628")
end

function bhv_boat_on_track_loop(obj)
    bhv_platform_on_track_update()
    load_object_collision_model()
end

bhvCustomSMSRBoatOnTrack = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_boat_on_track_init, bhv_boat_on_track_loop)

--------------

function bhv_angry_sun_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    cur_obj_set_home_once()
    cur_obj_scale(28 / 100.0)
    obj.oInteractType = INTERACT_FLAME
    obj.hitboxRadius = 50
    obj.hitboxHeight = 25
    obj.hitboxDownOffset = 25
    obj.oIntangibleTimer = 0
end

function bhv_angry_sun_loop(obj)
    obj.oInteractStatus = 0
    bhv_butterfly_loop()
end

bhvCustomSMSRAngrySun = hook_behavior(nil, OBJ_LIST_LEVEL, true, bhv_angry_sun_init, bhv_angry_sun_loop)

--------------

function bhv_yoshi_coin_init(obj)
    obj.header.gfx.node.flags = obj.header.gfx.node.flags | GRAPH_RENDER_BILLBOARD
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    cur_obj_scale(20 / 100.0)
    bhv_init_room()
end

function bhv_yoshi_coin_loop(obj)
    bhv_red_coin_init()
    bhv_yellow_coin_loop()
    obj.oAnimState = obj.oAnimState + 1
end

bhvCustomSMSRYoshiCoin = hook_behavior(nil, OBJ_LIST_LEVEL, true, bhv_yoshi_coin_init, bhv_yoshi_coin_loop)

--------------

function bhv_piranha_plant_wild_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oAnimations = gObjectAnimations.piranha_plant_seg6_anims_0601C31C
    cur_obj_init_animation(0)
    obj.oInteractType = INTERACT_MR_BLIZZARD
    obj.hitboxRadius = 400
    obj.hitboxHeight = 400
end

function bhv_piranha_plant_wild_loop(obj)
end

bhvCustomSMSRPiranhaPlantWild = hook_behavior(nil, OBJ_LIST_GENACTOR, true, bhv_piranha_plant_wild_init, bhv_piranha_plant_wild_loop)

--------------

function bhv_moving_mushroom_init(obj)
    obj.oFlags = (OBJ_FLAG_SET_FACE_ANGLE_TO_MOVE_ANGLE | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_ttm_geo_0007A8_0x700bcd0")
    bhv_ssl_moving_pyramid_wall_init()
end

function bhv_moving_mushroom_loop(obj)
    bhv_ssl_moving_pyramid_wall_loop()
    load_object_collision_model()
end

bhvCustomSMSRMovingMushroom = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_moving_mushroom_init, bhv_moving_mushroom_loop)

--------------

function bhv_mips_message_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_HOLDABLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oAnimations = gObjectAnimations.mips_seg6_anims_06015634
    obj.oInteractType = INTERACT_TEXT
    obj.hitboxRadius = 100
    obj.hitboxHeight = 60
    cur_obj_init_animation(0)
    obj.oBobombBuddyRole = 0
    cur_obj_set_home_once()
    bhv_bobomb_buddy_init()
end

function bhv_mips_message_loop(obj)
    obj.oIntangibleTimer = 0
    bhv_bobomb_buddy_loop()
end

bhvCustomSMSRMipsMessage = hook_behavior(nil, OBJ_LIST_GENACTOR, true, bhv_mips_message_init, bhv_mips_message_loop)

--------------

function bhv_big_leaves_init(obj)
    obj.header.gfx.node.flags = obj.header.gfx.node.flags | GRAPH_RENDER_CYLBOARD
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.oInteractType = INTERACT_POLE
    obj.hitboxRadius = 80
    obj.hitboxHeight = 500
    obj.oIntangibleTimer = 0
    cur_obj_scale(48 / 100.0)
end

function bhv_big_leaves_loop(obj)
    bhv_pole_base_loop()
end

bhvCustomSMSRBigLeaves = hook_behavior(nil, OBJ_LIST_POLELIKE, true, bhv_big_leaves_init, bhv_big_leaves_loop)

--------------

function bhv_lily_pad_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("col_ttm_geo_000990_0x700f688")
    obj.oPosY = obj.oPosY + -306
end

function bhv_lily_pad_loop(obj)
    bhv_lll_sinking_rock_block_loop()
    bhv_lll_sinking_rock_block_loop() -- called twice
    load_object_collision_model()
end

bhvCustomSMSRLilyPad = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_lily_pad_init, bhv_lily_pad_loop)

--------------

function bhv_invisible_cannon_init(obj)
    obj.oFlags = (OBJ_FLAG_ACTIVE_FROM_AFAR | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oInteractType = INTERACT_CANNON_BASE
    obj.oPosY = obj.oPosY + -340
    cur_obj_set_home_once()
    obj.hitboxRadius = 150
    obj.hitboxHeight = 166
    obj.oIntangibleTimer = 0
end

function bhv_invisible_cannon_loop(obj)
    bhv_cannon_base_loop()
end

bhvCustomSMSRInvisibleCannon = hook_behavior(nil, OBJ_LIST_LEVEL, true, bhv_invisible_cannon_init, bhv_invisible_cannon_loop)

--------------

function bhv_tambourine_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("col_ddd_geo_0004A0_0x700cbf0")
end

function bhv_tambourine_loop(obj)
    bhv_ttc_spinner_update()
    load_object_collision_model()
end

bhvCustomSMSRTambourine = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_tambourine_init, bhv_tambourine_loop)

--------------

function bhv_small_bee_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.header.gfx.node.flags = obj.header.gfx.node.flags | GRAPH_RENDER_BILLBOARD
    cur_obj_set_home_once()
    bhv_init_room()
    cur_obj_scale(150 / 100.0)
end

function bhv_small_bee_loop(obj)
    bhv_fly_guy_update()
    bhv_fly_guy_update() -- called twice
    obj.oAnimState = obj.oAnimState + 1
end

bhvCustomSMSRSmallBee = hook_behavior(nil, OBJ_LIST_GENACTOR, true, bhv_small_bee_init, bhv_small_bee_loop)

--------------

function bhv_drum_stick_init(obj)
    obj.oFlags = (OBJ_FLAG_SET_FACE_ANGLE_TO_MOVE_ANGLE | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_ddd_geo_000478_0x7000540")
    bhv_ssl_moving_pyramid_wall_init()
end

function bhv_drum_stick_loop(obj)
    bhv_ssl_moving_pyramid_wall_loop()
    load_object_collision_model()
end

bhvCustomSMSRDrumStick = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_drum_stick_init, bhv_drum_stick_loop)

--------------

function bhv_star_moving_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    bhv_init_room()
    bhv_collect_star_init()
end

function bhv_star_moving_loop(obj)
    bhv_collect_star_loop()
    bhv_ssl_moving_pyramid_wall_loop()
end

bhvCustomSMSRStarMoving = hook_behavior(nil, OBJ_LIST_LEVEL, true, bhv_star_moving_init, bhv_star_moving_loop)

--------------

function bhv_falling_domino_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("col_ttm_geo_000DF4_0x702b870")
    cur_obj_set_home_once()
end

function bhv_falling_domino_loop(obj)
    bhv_volcano_trap_loop()
    load_object_collision_model()
end

bhvCustomSMSRFallingDomino = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_falling_domino_init, bhv_falling_domino_loop)

--------------

function bhv_lava_lift_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oPosY = obj.oPosY + -50
    obj.collisionData = smlua_collision_util_get("col_ttm_geo_000920_0x700a710")
end

function bhv_lava_lift_loop(obj)
    bhv_lll_moving_octagonal_mesh_platform_loop()
    load_object_collision_model()
end

bhvCustomSMSRLavaLift = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_lava_lift_init, bhv_lava_lift_loop)

--------------

function bhv_rotating_lava_platform_init(obj)
    obj.oFlags = (OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_lll_geo_000A78_0x701d68c")
    cur_obj_set_home_once()
end

function bhv_rotating_lava_platform_loop(obj)
    obj.oAngleVelYaw = 256
    obj.oMoveAngleYaw = obj.oMoveAngleYaw + 256
    load_object_collision_model()
end

bhvCustomSMSRRotatingLavaPlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_rotating_lava_platform_init, bhv_rotating_lava_platform_loop)

--------------

function bhv_small_swing_platform_init(obj)
    obj.collisionData = smlua_collision_util_get("rr_seg7_collision_pendulum")
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.oCollisionDistance = 2000
    cur_obj_scale(160 / 100.0)
    bhv_swing_platform_init()
end

function bhv_small_swing_platform_loop(obj)
    bhv_swing_platform_update()
    load_object_collision_model()
end

bhvCustomSMSRSmallSwingPlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_small_swing_platform_init, bhv_small_swing_platform_loop)

--------------

function bhv_sinking_donut_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("col_rr_geo_000920_0x70295ec")
    obj.oPosY = obj.oPosY + -306
    cur_obj_set_home_once()
end

function bhv_sinking_donut_loop(obj)
    bhv_lll_sinking_rock_block_loop()
    bhv_lll_sinking_rock_block_loop() -- called twice
    load_object_collision_model()
end

bhvCustomSMSRSinkingDonut = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_sinking_donut_init, bhv_sinking_donut_loop)

--------------

function bhv_floating_thwomp_init(obj)
    obj.collisionData = smlua_collision_util_get("thwomp_seg5_collision_0500B7D0")
    obj.oFlags = (OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oGraphYOffset = 5
    bhv_butterfly_init()
end

function bhv_floating_thwomp_loop(obj)
    bhv_butterfly_loop()
    load_object_collision_model()
end

bhvCustomSMSRFloatingThwomp = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_floating_thwomp_init, bhv_floating_thwomp_loop)

--------------

function bhv_tilting_pyramid_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_geo_bbh_0005F8_0x701fba8")
    cur_obj_set_home_once()
    bhv_platform_normals_init()
end

function bhv_tilting_pyramid_loop(obj)
    bhv_tilting_inverted_pyramid_loop()
    load_object_collision_model()
end

bhvCustomSMSRTiltingPyramid = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_tilting_pyramid_init, bhv_tilting_pyramid_loop)

--------------

function bhv_platform_lift_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = smlua_collision_util_get("col_geo_bbh_0005C8_0x701f700")
    obj.oArrowLiftUnk100 = 1
end

function bhv_platform_lift_loop(obj)
    bhv_arrow_lift_loop()
    load_object_collision_model()
end

bhvCustomSMSRPlatformLift = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_platform_lift_init, bhv_platform_lift_loop)

--------------

function bhv_rising_lava_init(obj)
    obj.oFlags = (OBJ_FLAG_SET_FACE_ANGLE_TO_MOVE_ANGLE | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_geo_bbh_0005B0_0x701f2d8")
    bhv_ssl_moving_pyramid_wall_init()
end

function bhv_rising_lava_loop(obj)
    bhv_ssl_moving_pyramid_wall_loop()
    load_object_collision_model()
end

bhvCustomSMSRRisingLava = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_rising_lava_init, bhv_rising_lava_loop)

--------------

function bhv_rising_tall_platform_init(obj)
    obj.oFlags = (OBJ_FLAG_SET_FACE_ANGLE_TO_MOVE_ANGLE | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_geo_bbh_000628_0x70200f0")
    bhv_ssl_moving_pyramid_wall_init()
end

function bhv_rising_tall_platform_loop(obj)
    bhv_ssl_moving_pyramid_wall_loop()
    load_object_collision_model()
end

bhvCustomSMSRRisingTallPlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_rising_tall_platform_init, bhv_rising_tall_platform_loop)

--------------

function bhv_sinking_platform_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_geo_bbh_000640_0x600d758")
    obj.oPosY = obj.oPosY + 5
    obj.oCollisionDistance = 2000
end

function bhv_sinking_platform_loop(obj)
    bhv_lll_sinking_square_platforms_loop()
    bhv_lll_sinking_square_platforms_loop() -- called twice
    load_object_collision_model()
end

bhvCustomSMSRSinkingPlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_sinking_platform_init, bhv_sinking_platform_loop)

--------------

function bhv_toxic_waste_platform_init(obj)
    obj.oFlags = (OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("col_hmc_geo_000548_0x7023478")
    obj.oPosY = obj.oPosY + -50
    cur_obj_set_home_once()
end

function bhv_toxic_waste_platform_loop(obj)
    bhv_lll_sinking_rock_block_loop()
    load_object_collision_model()
end

bhvCustomSMSRToxicWastePlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_toxic_waste_platform_init, bhv_toxic_waste_platform_loop)

--------------

function bhv_attracted_space_box_init(obj)
    obj.oFlags = (OBJ_FLAG_HOLDABLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("ssl_seg7_collision_tox_box")
    obj.oPosY = obj.oPosY + 256
    cur_obj_set_home_once()
end

function bhv_attracted_space_box_loop(obj)
    bhv_chuckya_loop()
    bhv_spindrift_loop()
    cur_obj_scale(64 / 100.0)
    load_object_collision_model()
end

bhvCustomSMSRAttractedSpaceBox = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_attracted_space_box_init, bhv_attracted_space_box_loop)

--------------

function bhv_space_box_init(obj)
    obj.oFlags = (OBJ_FLAG_HOLDABLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.collisionData = smlua_collision_util_get("ssl_seg7_collision_tox_box")
    obj.oPosY = obj.oPosY + 256
end

function bhv_space_box_loop(obj)
    bhv_spindrift_loop()
    cur_obj_scale(64 / 100.0)
    load_object_collision_model()
end

bhvCustomSMSRSpaceBox = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_space_box_init, bhv_space_box_loop)

--------------

function bhv_space_octagon_platform_init(obj)
    obj.collisionData = smlua_collision_util_get("ssl_seg7_collision_spindel")
    obj.oFlags = (OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    cur_obj_set_home_once()
    bhv_ttc_moving_bar_init()
end

function bhv_space_octagon_platform_loop(obj)
    bhv_ttc_moving_bar_update()
    load_object_collision_model()
end

bhvCustomSMSRSpaceOctagonPlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_space_octagon_platform_init, bhv_space_octagon_platform_loop)

--------------

function bhv_space_red_platform_init(obj)
    obj.collisionData = smlua_collision_util_get("ssl_seg7_collision_grindel")
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    cur_obj_set_home_once()
    cur_obj_scale(91 / 100.0)
    bhv_horizontal_grindel_init()
end

function bhv_space_red_platform_loop(obj)
    bhv_squishable_platform_loop()
    bhv_squishable_platform_loop() -- called twice
    load_object_collision_model()
end

bhvCustomSMSRSpaceRedPlatform = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_space_red_platform_init, bhv_space_red_platform_loop)

--------------

function bhv_bullet_mine_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_MOVE_XZ_USING_FVEL | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    cur_obj_set_home_once()
    obj.hitboxRadius = 50
    obj.hitboxHeight = 50
    obj.hitboxDownOffset = 50
    obj.oInteractType = INTERACT_DAMAGE
    obj.oDamageOrCoinValue = 3
    cur_obj_scale(256 / 100.0)
    obj.oIntangibleTimer = 0
    bhv_bullet_bill_init()
end

function bhv_bullet_mine_loop(obj)
    bhv_bullet_bill_loop()
end

bhvCustomSMSRBulletMine = hook_behavior(nil, OBJ_LIST_GENACTOR, true, bhv_bullet_mine_init, bhv_bullet_mine_loop)
