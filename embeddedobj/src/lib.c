/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * lib.c
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

#include "embeddedobj.h"

eobj newobj() {
	eobj object = (eobj)malloc(sizeof(struct _object));
	bzero(object, sizeof(struct _object));
	return object;
}

void delobj(eobj object) {
	free(object);
}

void dumpState(eobj object) {
	if(object == NULL) return;
	if(isalpha(object->privateChar)) {
		printf("value of private string == NaA\n");
	} else {
		printf("value of private character == %c\n", object->privateChar);
	}
	if(isnan(object->privateInteger)) {
		printf("value of private int == NaN\n");
	} else {
		printf("value of private int == %d\n", object->privateInteger);
	}
	if(isnan(object->privateFloat)) {
		printf("value of private float == NaN\n");
	} else {
		printf("value of private float == %f\n", object->privateFloat);
	}
	if(isnan(object->privateDouble)) {
		printf("value of private double == NaN\n");
	} else {
		printf("value of private double == %lf\n", object->privateDouble);
	}
	if(object->privateString == NULL) {
		printf("value of private string == (NULL)\n");
	} else {
		printf("value of private string == %s\n", object->privateString);
	}
}

void setCharacter(eobj object, char Char) {
	if(object == NULL) return;  
	object->privateChar = Char;
}

void setInteger(eobj object, int Integer) {
	if(object == NULL) return;  
	object->privateInteger = Integer;
}

void setFloat(eobj object, float Float) {
	if(object == NULL) return;  
	object->privateFloat = Float;
}

void setDouble(eobj object, double Double) {
	if(object == NULL) return;  
	object->privateDouble = Double;
}

void setString(eobj object, char *String) {
	if(object == NULL) return;
	object->privateString = String;
}

char getCharacter(eobj object) {
	return (object->privateChar);
}

int getInteger(eobj object) {
	return (object->privateInteger);
}

float getFloat(eobj object) {
	return (object->privateFloat);
}

double getDouble(eobj object) {
	return (object->privateDouble);
}

char * getString(eobj object) {
	return (object->privateString);
}

