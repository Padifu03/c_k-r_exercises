/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 4: Punteros.
    herramientas: punteros, memoria dinámica, arreglos, main.
*/
#include <stdio.h>
#include <string.h>
#include "libreria_lineas.h"
#include "gestor_buffer.h"

#define MAXLINE 1000

int main(int argc, char const *argv[])
{
    char line[MAXLINE];
    int found = 0;

    if(argc != 2)
    {
        printf("Uso inadecuado de 5_busqueda_patron patron. Debes introducir un patrón de entrada para después buscarlo.\r\n");
    } else {
        printf("Que es lo primero: %i, %s\r\n", argc, argv[0]);
        while(mygetline(line, MAXLINE) > 0)
        {
            if(strstr(line, argv[1]) != NULL)
            {
                printf("Has encontrado el patron: %s\r\n", line);
                found++;
            }
        }
        printf("Número de veces encontrado: %i\r\n", found);
    }

    return found;
}
