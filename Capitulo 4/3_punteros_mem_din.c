/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 4: Punteros.
    herramientas: punteros, memoria dinámica.
    Librería obtenida del libro de K&R.
*/
#include "stddef.h"

#define ALLOCSIZE   1000000

static char allocbuf[ALLOCSIZE];
static char *pallocbuf = allocbuf;

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