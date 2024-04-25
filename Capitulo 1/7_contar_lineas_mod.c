/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Programa de flujo de datos de entrada y salida
    
    capitulo 1: variables, expresiones e iteraciones
    modificaciones: contar lineas, sentencia if
*/
#include <stdio.h>

// contar lineas
int main() 
{
    int lf = 0;
    int spaces = 0;
    int tab = 0;
    int c = 0;

    while((c = getchar()) != EOF) {  
        if(c == '\n') {
            ++lf;
        }
        else if (c == ' ') {
            ++spaces;
        }
        else if (c == '\t') {
            ++tab;
        }
    }
    
    printf("Numero de lineas introducidas: %d\r\n", lf);
    printf("Numero de espacios introducidos: %d\r\n", spaces);
    printf("Numero de tabulaciones introducidas: %d\r\n", tab);
}