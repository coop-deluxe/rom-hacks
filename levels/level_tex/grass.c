#include "macros.h"
#include "types.h"

#include "make_const_nonconst.h"

// 0x09008000
ALIGNED8 const Texture grass_09008000[] = {
#include "textures/level_tex/grass/wf_textures.08000_custom.rgba16.inc.c"
};
