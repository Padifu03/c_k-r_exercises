/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 2: Arreglos o arrays, if-else, condiciones
    herramientas: funciones, arreglos

*/
#include <stdio.h>
#include <string.h>

// DEFINES
#define MAX_LINE 1000 /* tamaño máximo de la línea de entrada. */

// PFP
/* Dado un arreglo de caracteres, lo cumplimenta con una linea escrita por monitor y regresa su longitud. */
int Get_Line(char *line, int limit);

int main()
{
    int len = 0;                        /* longitud de linea actual. */
    int max = 0;                        /* maxima longitud vista hasta la fecha. */    
    char line[MAX_LINE] = {};           /* linea actual. */
    char longest[MAX_LINE] = {};        /* linea mas larga. */

    while((len = Get_Line(line, MAX_LINE)) > 0) {
        if(len > max) {
            max = len;
            memccpy(longest, line,'\0', MAX_LINE);
        }
    }
    if(max > 0) {
        printf("Mayor linea, con longitud %d: %s",max, longest);
    }

    return 0;
}

// Functions
int Get_Line(char *line, int limit) 
{
    int line_len = 0;
    int c = 0;
    int i = 0;

    for(i = 0; (i < (limit-1)) && ((c = getchar()) != EOF) && (c != '\n'); i++) {
        line[i] = c;
    }
    if(c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    line_len = i;

    return line_len;
}