function bhv_custom_koopa_the_quick_loop(obj)
    if obj.oKoopaMovementType >= KOOPA_BP_KOOPA_THE_QUICK_BASE then
        obj.oKoopaTheQuickRaceIndex = (gNetworkPlayers[0].currAreaIndex - 1)
    end
end

-- hook the behavior
id_bhvKoopa = hook_behavior(id_bhvKoopa, OBJ_LIST_PUSHABLE, false, nil, bhv_custom_koopa_the_quick_loop)

---------------------------------------------------

function bhv_custom_star_door_init(obj)
    obj.collisionData = smlua_collision_util_get("inside_castle_seg7_custom_collision_star_door")
    obj.oInteractType = INTERACT_DOOR
    obj.oInteractionSubtype = INT_SUBTYPE_STAR_DOOR
    obj.oFlags = (OBJ_FLAG_ACTIVE_FROM_AFAR | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    obj.hitboxRadius = 80
    obj.hitboxHeight = 100
    
    object_set_home(obj)
    
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
id_bhvStarDoor = hook_behavior(id_bhvStarDoor, OBJ_LIST_SURFACE, true, bhv_custom_star_door_init, bhv_custom_star_door_loop)

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
id_bhvYoshi = hook_behavior(id_bhvYoshi, OBJ_LIST_GENACTOR, true, bhv_custom_yoshi_init, bhv_custom_yoshi_loop)