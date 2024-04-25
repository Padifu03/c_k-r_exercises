/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Programa de flujo de datos de entrada y salida
    
    capitulo 1: variables, expresiones, iteraciones y decisiones
    modificaciones: contar palabras, sentencia if else, define
*/
#include <stdio.h>

// contar lineas
int main() 
{
    int nw = 0;
    int nc = 0;
    int nlf = 0;
    int c = 0;

    while((c = getchar()) != EOF) {
        ++nc;

        if(c == '\n') {
            ++nlf;
        }

        if (' ' == c || '\n' == c || '\r' == c || '\t' == c) {
            ++nw;
        }
    }

    printf("Numero de caracteres introducidos: %d\r\n", nc);
    printf("Numero de lineas introducidas: %d\r\n", nlf);
    printf("Numero de palabras introducidas: %d\r\n", nw);
}