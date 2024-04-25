/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 2: Arreglos o arrays, if-else, condiciones
    herramientas: funciones

*/
#include <stdio.h>
// FTP
int power(int base, int potencia);

int main()
{
    int result = 0;
    result = power(-2,6);
    printf("El resultado de la potencia es: %d\r\n", result);

    return 0;
}

// Functions
int power(int base, int potencia)
{
    int ret_val = 1;

    for(int i = 1; i <= potencia; i++) 
    {
        ret_val = ret_val * base;
    }

    return ret_val;
}