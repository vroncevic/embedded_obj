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
	char privateChar;
	int privateInteger;
	float privateFloat;
	double privateDouble;
	char * privateString;
};

typedef struct _object * eobj;

eobj newobj(void);
void delobj(eobj);
void dumpState(eobj);

void setCharacter(eobj, char);
void setInteger(eobj, int);
void setFloat(eobj, float);
void setDouble(eobj, double);
void setString(eobj, char *);

char getCharacter(eobj);
int getInteger(eobj);
float getFloat(eobj);
double getDouble(eobj);
char * getString(eobj);

#endif

