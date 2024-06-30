/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 4: Punteros.
    herramientas: punteros, memoria dinámica, arreglos.
*/
#include <stdio.h>
#include <string.h>
#include "libreria_lineas.h"

#define MAXLINES 5000 /* Máxima cantidad de líneas a ordenar*/

char *p_lines[MAXLINES] = {NULL};

int main(int argc, char const *argv[])
{
    int num_lines = 0;

    if((num_lines = readlines(p_lines, MAXLINES)) >= 0) {
        qsort(p_lines, 0, num_lines-1);
        writelines(p_lines, num_lines);
        printf("Funcionamiento correcto\r\n");
    } else {
        printf("Error: Entrada sobredimensionada para ser ordenada\r\n");
        return -1;
    }
    
    return 0;
}
