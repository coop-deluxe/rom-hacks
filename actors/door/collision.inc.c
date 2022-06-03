const Collision custom_collision_door_30_stars[] = {
    COL_INIT(),
    COL_VERTEX_INIT(8),
    COL_VERTEX(100, -250, -200), 
    COL_VERTEX(100,  150,  200), 
    COL_VERTEX(100, -250,  200), 
    COL_VERTEX(100,  150, -200), 
    COL_VERTEX(-99,  350, -200), 
    COL_VERTEX(-99, -250, -200),
    COL_VERTEX(-99,  350,  200),
    COL_VERTEX(-99, -250,  200),
    COL_TRI_INIT(SURFACE_VERY_SLIPPERY, 8),
    COL_TRI(0, 1, 2), 
    COL_TRI(1, 0, 3), 
    COL_TRI(0, 4, 3), 
    COL_TRI(4, 0, 5), 
    COL_TRI(4, 1, 3), 
    COL_TRI(1, 4, 6), 
    COL_TRI(7, 1, 6), 
    COL_TRI(1, 7, 2), 
    COL_TRI_STOP(),
    COL_END(),
};

// 0x07078E14 - 0x07078E80
const Collision inside_castle_seg7_custom_collision_star_door[] = {
    COL_INIT(),
    COL_VERTEX_INIT(0x8),
    COL_VERTEX(-80, 0, -20),
    COL_VERTEX(-80, 256, 20),
    COL_VERTEX(-80, 256, -20),
    COL_VERTEX(80, 256, 20),
    COL_VERTEX(80, 256, -20),
    COL_VERTEX(80, 0, -20),
    COL_VERTEX(-80, 0, 20),
    COL_VERTEX(80, 0, 20),
    COL_TRI_INIT(SURFACE_DEFAULT, 8),
    COL_TRI(2, 3, 4),
    COL_TRI(2, 1, 3),
    COL_TRI(5, 2, 4),
    COL_TRI(5, 0, 2),
    COL_TRI(6, 3, 1),
    COL_TRI(6, 7, 3),
    COL_TRI(5, 6, 0),
    COL_TRI(5, 7, 6),
    COL_TRI_STOP(),
    COL_END(),
};
