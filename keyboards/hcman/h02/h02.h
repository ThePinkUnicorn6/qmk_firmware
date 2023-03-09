#pragma once

#include "quantum.h"


// readability
#define ____ KC_NO

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012,             K014, K015, K016,             \
	                                                                                                                        \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213,       K214, K215, K216,             \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313,       K314, K315, K316,             \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411,       K413,                                     \
	K500,       K502, K503, K504, K505, K506, K507, K508, K509, K510, K511,       K513,             K516,                   \
	K600, K601, K602,                   K604,                   K606, K607, K608, K609,       K616, K617, K618              \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  ____,                K014,  K015,  K016,  ____,  ____ }, \
	{ ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,                ____,  ____,  ____,  ____,  ____ }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,                K214,  K215,  K216,  ____,  ____ }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,                K314,  K315,  K316,  ____,  ____ }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  ____,  K413,                ____,  ____,  ____,  ____,  ____ }, \
	{ K500,  ____,  K502,  K503,  K504,  K505,  K506,  K507,  K508,  K509,  K510,  K511,  ____,  K513,         ____,  ____,  K516,  ____,  ____        }, \
	{ K600,  K601,  K602,  ____,  K604,  ____,  K606,  K607,  K608,  K609,  ____,  ____,  ____,  ____,  ____,  ____,  K616,  K617,  K618               }  \
}

