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

int main(int argc, char const *argv[])
{
    char origen[] = "Pepe tiene una moto verde.\0";
    char copia[MAXLINE] = {0};
    
    printf("Origen antes: %s\r\n", origen);
    printf("Copia antes: %s\r\n", copia);
    
    mystrcpy(copia, origen);

    printf("Copia despues: %s\r\n", copia);
    printf("Origen despues: %s\r\n", origen);

    return 0;
}

void mystrcpy(char *source, char *destination)
{
    int i = 0;

    while((source[i] = destination[i]) != '\0')
    {
        i++;
    }
    /*Código similar:
    while((*source = *destination) != '\0')
    {
        source++;
        destination++;
    }
    */
}