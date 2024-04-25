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
    int num_crlf = 0;
    int spaces = 0;
    int c = 0;

    while((c = getchar()) != EOF) {  
        if(c == '\n') {
            ++num_crlf;
        }
    }

    printf("Numero de lineas introducidas: %d\r\n", num_crlf);
}