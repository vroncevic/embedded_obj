/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * embeddedobj.h
 * Copyright (C) 2016 Vladimir Roncevic <elektron.ronca@gmail.com>
 * 
 * embeddedobj is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * embeddedobj is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __EMBEDDEDOBJ_H
#define __EMBEDDEDOBJ_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct _object {
	char private_char;
	int private_integer;
	float private_float;
	double private_double;
	char * private_string;
};

typedef struct _object * eobj;

eobj new_obj(void);
void del_obj(eobj);
void dump_state(eobj);

void set_character(eobj, char);
void set_integer(eobj, int);
void set_float(eobj, float);
void set_double(eobj, double);
void set_string(eobj, char *);

char get_character(eobj);
int get_integer(eobj);
float get_float(eobj);
double get_double(eobj);
char * get_string(eobj);

#endif

