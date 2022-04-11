#include "macros.h"
#include "types.h"

#include "make_const_nonconst.h"

// 0x09000800
ALIGNED8 const Texture generic_09000800[] = {
#include "textures/level_tex/generic/bob_textures.00800_custom.rgba16.inc.c"
};

// 0x09002000
ALIGNED8 const Texture generic_09002000[] = {
#include "textures/level_tex/generic/bob_textures.02000_custom.rgba16.inc.c"
};

// 0x09006000
ALIGNED8 const Texture generic_09006000[] = {
#include "textures/level_tex/generic/bob_textures.06000_custom.rgba16.inc.c"
};

// 0x0900A800
ALIGNED8 const Texture generic_0900A800[] = {
#include "textures/level_tex/generic/bob_textures.0A800_custom.rgba16.inc.c"
};
