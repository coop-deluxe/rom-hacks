// 0x0E000B38
const GeoLayout lll_geo_rotate_firebars[] = {
   GEO_CULLING_RADIUS(500),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_rotate_firebars),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
