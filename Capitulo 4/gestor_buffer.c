/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 4: Punteros.
    herramientas: punteros, memoria dinámica, arreglos.
*/
#include "gestor_buffer.h"

// PRIVATE VARIABLES
static char allocbuf[ALLOCSIZE];
static char *pallocbuf = allocbuf;

// FUNCTIONS & METHODS
char *alloc(int n)
{
    int ret_val = NULL;
    if((allocbuf + ALLOCSIZE - pallocbuf) >= n)
    {
        pallocbuf += n;
        ret_val = pallocbuf - n;
    }

    return ret_val;
}

void afree(char *pointer)
{
    if ((pointer >= allocbuf) && (pointer < (allocbuf + ALLOCSIZE)))
    {
        pallocbuf = pointer;
    }
}