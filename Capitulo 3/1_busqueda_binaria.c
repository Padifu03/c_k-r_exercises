/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 3: Control de flujo.
    herramientas: funciones, arreglos

    Ejercicio: Busqueda binaria, algoritmo "Bin search".
*/
#include <stdio.h>
#include <stdint.h>

// Function Prototype
int Bin_Search(int number_to_find, int list[], int list_len);

int main()
{
    int orderer_list[] = {1,6,90,120,220,469,875,675};
    int num = 200;
    int finded_position = -1;
    
    finded_position = Bin_Search(num, orderer_list, sizeof(orderer_list)/sizeof(orderer_list[0]));
    if(finded_position != -1) {
        printf("Numero %d encontrado en la posicion: %d\r\n", num, finded_position);
    } else {
        printf("Numero no encontrado");
    }

    return 0;
}

int Bin_Search(int number_to_find, int list[], int list_len)
{
    int return_value = -1;
    int low_limit = 0;
    int high_limit = list_len-1;
    int mid_point = (high_limit + low_limit)/2;

    while(low_limit <= high_limit) {
        mid_point = (high_limit + low_limit)/2;
        if(number_to_find < list[mid_point])
        {
            high_limit = mid_point - 1;
        } else if(number_to_find > list[mid_point]) {
            low_limit = mid_point + 1;
        } else {
            return_value = mid_point;
            break;
        }
    }

    return return_value;
}