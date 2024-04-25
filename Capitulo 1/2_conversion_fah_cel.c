/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Programa de conversión de Fahrenheit a Celsius
    capitulo 1: variables, expresiones e iteraciones
*/
#include <stdio.h>

// imprime la tabla de F-C para fahr = 20,..., 300

int main()
{
    int upper = 300;    /* Límite superior de la tabla de temperaturas */
    int lower = 0;      /* Límite inferior de la tabla de temperaturas */
    int step = 20;       /* Paso de la tabla de temperaturas */
    int fahr = lower;       /* Temperatura en grados fahrenheit */
    int celsius = 0;    /* Temperatura en grados celsius */ 

    printf("Hola mundo, iniciando conversion Celsius - Fahrenheit...\r\n");   
    printf("Tabla de conversion:\r\n");
    printf("Temperatura en Fahr(F)    Temperatura en Celsius(C)\r\n");
    while(fahr <= upper) {
        celsius = 5 *(fahr - 32)/9;
        printf("        %3d                       %6d\r\n", fahr, celsius);
        fahr += step;
    }
    printf("---------------------------------------------\r\n");
    
    return 0;
}
