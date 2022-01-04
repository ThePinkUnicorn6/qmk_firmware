#pragma once

#include "quantum.h"
// Each layer gets a name for readability
enum layer_names {
    WIN_BASE    = 0,
    WIN_FN      = 1,
    MAC_BASE    = 2,
    MAC_FN      = 3,
};

// readability
#define XXX KC_NO

#define LAYOUT( \
         k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k0g,                     \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f, k1g, k1h, k1i, k1j, k1k, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, k2g, k2h, k2i, k2j, k2k, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,      k3d,                k3h, k3i, k3j,      \
    k40,      k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b,      k4d,      k4f,      k4h, k4i, k4j, k4k, \
    k50, k51, k52,           k55,                     k5a, k5b, k5c, k5d, k5e, k5f, k5g, k5h,      k5j       \
) \
{ \
    {XXX, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k0g, XXX, XXX, XXX, XXX}, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f, k1g, k1h, k1i, k1j, k1k}, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, k2g, k2h, k2i, k2j, k2k}, \
    {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, XXX, k3d, XXX, XXX, XXX, k3h, k3i, k3j, XXX}, \
    {k40, XXX, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, XXX, k4d, XXX, k4f, XXX, k4h, k4i, k4j, k4k}, \
    {k50, k51, k52, XXX, XXX, k55, XXX, XXX, XXX, XXX, k5a, k5b, k5c, k5d, k5e, k5f, k5g, k5h, XXX, k5j, XXX}  \
}
