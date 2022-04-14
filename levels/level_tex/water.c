#include "macros.h"
#include "types.h"

#include "make_const_nonconst.h"

// 0x09000000
ALIGNED8 const Texture water_09000000[] = {
#include "../../textures/water/jrb_textures.00000_custom.rgba16.inc.c"
};

// 0x0900A800
ALIGNED8 const Texture water_0900A800[] = {
#include "../../textures/water/jrb_textures.0A800_custom.rgba16.inc.c"
};
