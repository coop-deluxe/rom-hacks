function get_star_count()
    local courseMax = 25
    local courseMin = 1
    return save_file_get_total_star_count(get_current_save_file_num() - 1, courseMin - 1, courseMax - 1)
end

function despawn_if_stars_below_count(obj, count)
    if get_star_count() < count then
        obj_mark_for_deletion(obj)
    end
end

function get_mario_from_global_index(index)
    local marioState = nil
    for i = 0, (MAX_PLAYERS - 1) do
        marioState = gMarioStates[i]
        if gNetworkPlayers[i].globalIndex == index then
            return marioState
        end
    end
    
    return gMarioStates[0]
end

function check_mario_attacking(obj, mario)
    local marioObject = mario.marioObj
    
    if not (obj_check_if_collided_with_object(obj, marioObject) == 0) then
        if abs_angle_diff(obj.oMoveAngleYaw, marioObject.oMoveAngleYaw) > 0x6000 then
            if mario.action == ACT_SLIDE_KICK then
                return 1
            end
            if mario.action == ACT_PUNCHING then
                return 1
            end
            if mario.action == ACT_MOVE_PUNCHING then
                return 1
            end
            if mario.action == ACT_SLIDE_KICK_SLIDE then
                return 1
            end
            if mario.action == ACT_JUMP_KICK then
                return 2
            end
            if mario.action == ACT_WALL_KICK_AIR then
                return 2
            end
        end
    end

    return 0
end

function check_local_mario_attacking(obj)
    return check_mario_attacking(obj, gMarioStates[0])
end

--------------

-- Replacement for native create_sound_spawner()
function create_sound_spawner(obj, soundId)
    soundObj = spawn_non_sync_object(id_bhvSoundSpawner, 0, 0, 0, 0, nil);
    if soundObj == nil then
        return
    end
    obj_copy_pos_and_angle(soundObj, obj)
    soundObj.oSoundEffectUnkF4 = soundId
end

--------------

-- Replacement for SET_HOME()
function object_set_home(obj)
    if not (obj.coopFlags & (COOP_OBJ_FLAG_LUA | COOP_OBJ_FLAG_NETWORK)) then
        obj.oHomeX = obj.oPosX;
        obj.oHomeY = obj.oPosY;
        obj.oHomeZ = obj.oPosZ;
    end
end

-- Replacement for DROP_TO_FLOOR()
function object_drop_to_floor(obj)
    local x = obj.oPosX;
    local y = obj.oPosY;
    local z = obj.oPosZ;

    local floorHeight = find_floor_height(x, y + 200, z);
    obj.oPosY = floorHeight;
    obj.oMoveFlags = (obj.oMoveFlags | OBJ_MOVE_ON_GROUND);
end