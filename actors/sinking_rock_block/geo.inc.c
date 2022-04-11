// 0x0E000DD0
const GeoLayout lll_geo_sinking_rock[] = {
   GEO_CULLING_RADIUS(600),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_sinking_rock),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
