// 0x0E000470
const GeoLayout grate_door_geo[] = {
   GEO_CULLING_RADIUS(800),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, grate_door_model),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
