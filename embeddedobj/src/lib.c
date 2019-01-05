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

eobj new_obj(void) {

	eobj object = (eobj) malloc(sizeof(struct _object));
	bzero(object, sizeof(struct _object));

	return object;

}

void del_obj(eobj object) {
	free(object);
	object = NULL;
}

void dump_state(eobj object) {

	if(object == NULL) {
		return;
	}

	if(isalpha(object->private_char)) {
		printf("value of private string == NaA\n");
	} else {
		printf("value of private character == %c\n", object->private_char);
	}
	if(isnan((float) object->private_integer)) {
		printf("value of private int == NaN\n");
	} else {
		printf("value of private int == %d\n", object->private_integer);
	}
	if(isnan(object->private_float)) {
		printf("value of private float == NaN\n");
	} else {
		printf("value of private float == %f\n", object->private_float);
	}
	if(isnan(object->private_double)) {
		printf("value of private double == NaN\n");
	} else {
		printf("value of private double == %lf\n", object->private_double);
	}
	if(object->private_string == NULL) {
		printf("value of private string == (NULL)\n");
	} else {
		printf("value of private string == %s\n", object->private_string);
	}
}

void set_character(eobj object, char Char) {
	if(object == NULL) {
		return;
	}
	object->private_char = Char;
}

void set_integer(eobj object, int Integer) {
	if(object == NULL) {
		return;
	}
	object->private_integer = Integer;
}

void set_float(eobj object, float Float) {
	if(object == NULL) {
		return;
	}
	object->private_float = Float;
}

void set_double(eobj object, double Double) {
	if(object == NULL) {
		return;
	}
	object->private_double = Double;
}

void set_string(eobj object, char *String) {
	if(object == NULL) {
		return;
	}
	object->private_string = String;
}

char get_character(eobj object) {
	return (object->private_char);
}

int get_integer(eobj object) {
	return (object->private_integer);
}

float get_float(eobj object) {
	return (object->private_float);
}

double get_double(eobj object) {
	return (object->private_double);
}

char * get_string(eobj object) {
	return (object->private_string);
}

