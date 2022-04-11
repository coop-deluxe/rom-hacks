// 0x0E000F00
const GeoLayout star_door_geo[] = {
   GEO_CULLING_RADIUS(400),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, star_door_DL),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
