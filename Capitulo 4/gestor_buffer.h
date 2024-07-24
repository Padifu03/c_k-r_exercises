/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    librería para las funciones de lectura/escritura/ordenación de líneas
*/
#pragma once

#include <stdio.h>

#define ALLOCSIZE 10000 /* Allocation buffer maximum length */

char *alloc(int n);
void afree(char *p);