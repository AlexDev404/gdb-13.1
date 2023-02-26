## Fragment to pass common settings into arch subdir builds.
## NB: This should eventually be merged into sim/Makefile.am once there are no
## subdir configure scripts.
#
#   Copyright (C) 1993-2023 Free Software Foundation, Inc.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

AM_V = $(V)

EXEEXT = .exe

LN_S = cp -pR

CC = gcc
C_DIALECT = 
CC_FOR_BUILD = gcc
CFLAGS_FOR_BUILD = -O2 -gdwarf-4 -g3
CPPFLAGS_FOR_BUILD = $(CPPFLAGS)
CFLAGS = -O2 -gdwarf-4 -g3    
CPPFLAGS = 
LDFLAGS =  -Wl,--stack,12582912

AR = ar --plugin d:/usr/bin/../libexec/gcc/mingw32/9.2.0/liblto_plugin-0.dll --plugin d:/usr/bin/../libexec/gcc/mingw32/9.2.0/liblto_plugin-0.dll
AR_FLAGS = rc
RANLIB = ranlib --plugin d:/usr/bin/../libexec/gcc/mingw32/9.2.0/liblto_plugin-0.dll --plugin d:/usr/bin/../libexec/gcc/mingw32/9.2.0/liblto_plugin-0.dll
DTC = 

LIBTOOL = $(SHELL) $(top_builddir)/libtool
AM_V_lt = $(am__v_lt_$(V))
am__v_lt_ = $(am__v_lt_$(AM_DEFAULT_VERBOSITY))
am__v_lt_0 = --silent
am__v_lt_1 = 

DEPMODE = depmode=gcc3
DEPDIR = .deps

SDL_CFLAGS = 
TERMCAP_LIB = -lncurses
READLINE_LIB = ../readline/readline/libreadline.a
READLINE_CFLAGS = -I$(READLINE_SRC)/..

COMMON_LIBS = -lncurses 
WARN_CFLAGS =  -Wall -Wdeclaration-after-statement -Wpointer-arith -Wno-unused -Wunused-value -Wunused-function -Wno-switch -Wno-char-subscripts -Wempty-body -Wunused-but-set-parameter -Wno-error=maybe-uninitialized -Wmissing-declarations -Wmissing-prototypes -Wdeclaration-after-statement -Wmissing-parameter-type -Wpointer-sign -Wold-style-declaration -Wno-format
WERROR_CFLAGS = -Werror

# Maintainer support, enable with --enable-maintainer-mode.
# Once all subdirs are moved to automake, we can drop this custom logic and
# switch back to using # directly.
MAINT = ; @true
# The following line is commented depending upon --enable-maintainer-mode.
#MAINT =

# cgen support, enable with --enable-cgen-maint
CGEN_MAINT = ; @true
# The following line is commented in or out depending upon --enable-cgen-maint.
#CGEN_MAINT =
CGENDIR = $(srcdir)/../../cgen

SIM_INLINE = -DDEFAULT_INLINE=0

SIM_HW_CFLAGS = -DWITH_HW=1 -DHAVE_DV_SOCKSER
SIM_HW_SOCKSER = dv-sockser.o
SIM_HW_OBJS = $(SIM_COMMON_HW_OBJS) $(SIM_HW_DEVICES:%=dv-%.o) $(SIM_HW_SOCKSER)
#SIM_HW_OBJS =
