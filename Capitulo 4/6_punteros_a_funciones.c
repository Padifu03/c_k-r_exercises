/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 4: Punteros.
    herramientas: punteros, arreglos, funciones, main.
*/

#include <stdio.h>
#include <string.h>
#include "libreria_lineas.h"
#include "gestor_buffer.h"  

#define MAXLINES 5000
char *lineptr[MAXLINES];

int main(int argc, char *argv[])
{
	int nlines;
	int numeric = 0;

	if(argc>1 && strcmp(argv[1],"-n")==0) {
        numeric=1;
    }
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsortGen(lineptr, 0, nlines-1, (int (*)(void *, void *)) (numeric ? numcmp : mystrcmp));

		writelines(lineptr, nlines);
		
        return 0;
    } else {
        printf("Entrada demasiado grande para ser ordenada\n");
        return 1;
    }   

    return 0;	
}