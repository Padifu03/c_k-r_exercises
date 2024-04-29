/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 3: Control de flujo.
    herramientas: funciones, arreglos

    Ejercicio: Busca patrones en una frase.
*/
#include <stdio.h>

// Defines
#define MAX_LINE 1000

// Functions prototypes
/* Obtiene una linea de caracteres, lo añade a "line" y regresa su longitud. */
int Get_Line(char *line, int limit);
/*  Dado un patron en "search_for", busca en la fuente "source" dicho patrón y retorna el índice de dicho patrón en caso de existir.
    En caso contrario, devuelve -1.
*/
int Str_Index(char source[], char search_for[]);

// Variables
char pattern [] = "es";
char my_line[MAX_LINE] = {0};
int found = 0;

// Main loop
int main()
{
    while(Get_Line(my_line, MAX_LINE) > 0) {
        if (Str_Index(my_line, pattern) >= 0) {
            printf("Patron \"%s\" encontrado en: %s", pattern, my_line);
            found++;
        }
    }

    return found;
}

// Functions
int Get_Line(char *line, int limit) 
{
    int line_len = 0;
    int c = 0;
    int i = 0;

    while (--limit > 0 && (c = getchar()) != EOF && c != '\n')
    {
        line[i++] = c; 
    }

    if(c == '\n') {
        line[i] = c;
    }

    line[++i] = '\0';
    line_len = i;

    return line_len;
}

int Str_Index(char source[], char search_for[])
{
    int index = -1;
    int i = 0;
    int j = 0;
    int k = 0;

    for (i = 0; source[i] !='\0' && index == -1; i++)
    {
        for(j = i, k = 0; search_for[k] != '\0' && source[j] == search_for[k]; j++, k++);

        if (k > 0 && search_for[k] == '\0')
        {
            index = i;
        }
    }

    return index;
}