#include "macros.h"
#include "types.h"

#include "make_const_nonconst.h"

// 0x09000000
ALIGNED8 const Texture sky_09000000[] = {
#include "textures/level_tex/sky/rr_textures.00000_custom.rgba16.inc.c"
};

// 0x09001800
ALIGNED8 const Texture sky_09001800[] = {
#include "textures/level_tex/sky/rr_textures.01800_custom.rgba16.inc.c"
};

// 0x09005800
ALIGNED8 const Texture sky_09005800[] = {
#include "textures/level_tex/sky/rr_textures.05800_custom.rgba16.inc.c"
};

// 0x09007000
ALIGNED8 const Texture sky_09007000[] = {
#include "textures/level_tex/sky/rr_textures.07000_custom.rgba16.inc.c"
};
