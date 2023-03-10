/* Simulation code for the d10v processor.
   Copyright (C) 2009-2023 Free Software Foundation, Inc.

   This file is part of simulators.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef SIM_MAIN_H
#define SIM_MAIN_H

#include "sim-basics.h"

typedef long int           word;
typedef unsigned long int  uword;

#include "sim-base.h"
#include "bfd.h"

#include "d10v_sim.h"

struct _sim_cpu {

  sim_cpu_base base;
};

#endif
