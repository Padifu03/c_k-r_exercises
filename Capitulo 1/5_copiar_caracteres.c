/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Programa de flujo de datos de entrada y salida
    
    capitulo 1: variables, expresiones e iteraciones
    herramientas: getchar, putchar
*/
#include <stdio.h>

// copia la entrada a la salida
int main() 
{
    char caracter;

    caracter = getchar();
    while(caracter != EOF) {  
        putchar(caracter);
        caracter = getchar();
    }
}