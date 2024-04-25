/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 3: Arreglos o arrays, if-else, condiciones
    herramientas: funciones, arreglos

    Ejercicio: Ordenación shellshort.
*/
#include <stdio.h>

// Function prototype.
void Shellshort(int array[], int len);

int main(int argc, char const *argv[])
{
    int lista[] = {3,1,675,90,6,120,469,220,875};
    int lista_len = sizeof(lista) / sizeof(lista[0]);

    printf("Lista sin ordenar:\r\n");
    for(int i = 0; i<lista_len; i++) printf("%d ", lista[i]);
    Shellshort(lista, lista_len);
    printf("\r\nLista ordenada con Shellshort:\r\n");
    for(int i = 0; i<lista_len; i++) printf("%d ", lista[i]);
    return 0;
}

void Shellshort(int array[], int len) {
    int gap;

    for(gap = len/2; gap > 0; gap/=2)
    {
        for(int i = gap; i < len; i++)
        {
            for(int j = i - gap;(j>=0)&&(array[j] > array[j+gap]) ; j-=gap)
            {
                int temp = array[j];
                array[j] = array[j+gap];
                array[j+gap] = temp;
            }
        }
    }
}