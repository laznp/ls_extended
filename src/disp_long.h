/*
	Copyright (c) 2019, Electrux
	All rights reserved.
	Using the BSD 3-Clause license for the project,
	main LICENSE file resides in project's root directory.
	Please read that file and understand the license terms
	before using or altering the project.
*/

#ifndef DISP_LONG_H
#define DISP_LONG_H

#include <stdlib.h>

#include "vec.h"
#include "ls.h"

void disp_long( vec_t * locs, const struct winsize * ws, const max_lens_t * maxlens, const size_t flags );

#endif // DISP_LONG_H