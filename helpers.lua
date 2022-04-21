function get_star_count()
    local courseMax = 25
    local courseMin = 1
    return save_file_get_total_star_count(get_current_save_file_num() - 1, courseMin - 1, courseMax - 1)
end

function despawn_if_stars_below_121(obj)
    if get_star_count() < 121 then
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