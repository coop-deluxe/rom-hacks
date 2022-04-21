function bhv_custom_koopa_the_quick_loop(obj)
    if obj.oKoopaMovementType >= KOOPA_BP_KOOPA_THE_QUICK_BASE then
        obj.oKoopaTheQuickRaceIndex = (gNetworkPlayers[0].currAreaIndex - 1)
    end
end

-- hook the behavior
bhvKoopa = hook_behavior(id_bhvKoopa, OBJ_LIST_PUSHABLE, false, nil, bhv_custom_koopa_the_quick_loop)

---------------------------------------------------

function bhv_custom_star_door_init(obj)
    obj.collisionData = smlua_collision_util_get("inside_castle_seg7_custom_collision_star_door")
    obj.oInteractType = INTERACT_DOOR
    obj.oInteractionSubtype = INT_SUBTYPE_STAR_DOOR
    obj.oFlags = (OBJ_FLAG_ACTIVE_FROM_AFAR | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.hitboxRadius = 80
    obj.hitboxHeight = 100
    
    --object_set_home(obj)
    
    obj.oDrawingDistance = 20000
    bhv_door_init()
    obj.oIntangibleTimer = 0
end

function bhv_custom_star_door_loop(obj)
    bhv_star_door_loop()
    bhv_star_door_loop_2()
    load_object_collision_model()
end

-- hook the behavior
bhvStarDoor = hook_behavior(id_bhvStarDoor, OBJ_LIST_SURFACE, true, bhv_custom_star_door_init, bhv_custom_star_door_loop)

---------------------------------------------------

function bhv_custom_yoshi_init(obj)
    obj.oFlags = (OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_HOLDABLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oAnimations = gObjectAnimations.yoshi_seg5_anims_05024100
    obj.oInteractType = INTERACT_TEXT
    obj.hitboxRadius = 160
    obj.hitboxHeight = 150
    cur_obj_init_animation(0)
    bhv_bobomb_buddy_init()
    bhv_klepto_update()
    --network_init_object(obj, false, nil)
end

function bhv_custom_yoshi_loop(obj)
    obj.oIntangibleTimer = 0
    bhv_bobomb_buddy_loop()
end

-- hook the behavior
bhvYoshi = hook_behavior(id_bhvYoshi, OBJ_LIST_GENACTOR, true, bhv_custom_yoshi_init, bhv_custom_yoshi_loop)

---------------------------------------------------

function bully_custom_act_level_death(obj)
    if obj_lava_death() == 1 then
        spawn_mist_particles()
        local m = get_mario_from_global_index(obj.oBullyLastNetworkPlayerIndex)
        spawn_non_sync_object(id_bhvBowserKey, E_MODEL_BOWSER_KEY, m.pos.x, m.pos.y, m.pos.z, nil);
    end
end

function bhv_custom_big_bully_init(obj)
    obj.oFlags = (OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.oAnimations = gObjectAnimations.bully_seg5_anims_0500470C
    object_drop_to_floor(obj)
    --object_set_home(obj)
    obj.oIntangibleTimer = 0
    
    cur_obj_init_animation(0)
    bhv_big_bully_init()
end

function bhv_custom_bully_loop(obj)
    if obj.oAction == BULLY_ACT_LAVA_DEATH then
        obj.oBullyPrevX = obj.oPosX
        obj.oBullyPrevY = obj.oPosY
        obj.oBullyPrevZ = obj.oPosZ
        
        bully_custom_act_level_death(obj)
        
        set_object_visibility(obj, 3000)
    else
        bhv_bully_loop()
    end
end

-- hook the behavior
bhvBigBullyBoss = hook_behavior(id_bhvBigBully, OBJ_LIST_GENACTOR, true, bhv_custom_big_bully_init, bhv_custom_bully_loop)