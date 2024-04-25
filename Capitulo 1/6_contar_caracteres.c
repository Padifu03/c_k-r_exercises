/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Programa de flujo de datos de entrada y salida
    
    capitulo 1: variables, expresiones e iteraciones
    modificaciones: contar caracteres
*/
#include <stdio.h>

// contar caracteres de entrada
int main() 
{
    unsigned long num_caracters = 0;

    while(getchar() != EOF) {  
        ++num_caracters;
    }

    printf("Numero de caracteres introducidos: %lu\r\n", num_caracters);
}