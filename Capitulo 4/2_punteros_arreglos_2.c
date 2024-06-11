/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 4: Punteros.
    herramientas: punteros, arreglos
*/
// INCLUDES
#include <stdio.h>

// DEFINES
#define MAXLINE 1000 /* Tamaño máximo de línea. */

// FP
void mystrcpy(char *source, char *destination);
int mystrcmp(char *source, char *dest);

int main(int argc, char const *argv[])
{
    char origen[] = "Pepe tiene una moto verde.\0";
    char copia[MAXLINE] = {0};
    int dif = -1;

    printf("Origen antes: %s\r\n", origen);
    printf("Copia antes: %s\r\n", copia);

    dif = mystrcmp(copia, origen);
    printf("Diferencia entre cadenas, copia - origen: %i\r\n\r\n", dif);
    
    mystrcpy(copia, origen);
    printf("Copia despues: %s\r\n", copia);
    printf("Origen despues: %s\r\n", origen);
    
    dif = mystrcmp(copia, origen);
    printf("Diferencia entre cadenas, copia - origen: %i\r\n\r\n", dif);

    return 0;
}

void mystrcpy(char *source, char *destination)
{
    while((*source = *destination) != '\0') {
        source++;
        destination++;
    }
}

/**
 * Devuelve:
 * <0 si s < d
 * 0 si s = d
 * >0 si s > d
 * 
*/
int mystrcmp(char *source, char *dest)
{
    int ret_val = 0;
    for(; *source == *dest; source++, dest++)
    {
        if(*source == '\0')
        {
            return ret_val;
        }
    }

    ret_val = *source-*dest;
    
    return ret_val;
}