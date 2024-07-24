/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 4: Punteros.
    herramientas: punteros, arreglos, funciones, main.

    Ejercicio entregable titulado: Discurso loco.
    Se debe generar una máquina que de discursos locos a partir de nombre, verbos y adjetivos.
    Extra: Añadir un menú para implementar nuevas palabras.

    Para ello, voy a emplear 3 arreglos que contengan: nombres, verbos en presente simple y tercera persona del singular y adjetivos.
    
    Para llamar al ejecutable y añadir elementos se debe seguir la siguiente norma:
    - Para añadir un nombre usar -> nombre:"Nuevo nombre a añadir"
    - Para añadir un adjetivo usar -> adjetivo:"Nuevo adjetivo a añadir"
    - Para añadir un verbo usar -> verbo:"Nuevo verbo a añadir"

*/
#include "Discurso_loco.h"

// Función para obtener el tamaño real del arreglo
int Contar_Elementos(char *arr[]) {
    int contador = 0;

    while (arr[contador] != NULL && contador < BUFFER_LEN) {
        contador++;
    }

    return contador;
}

void Agregar_Elemento(char *arr[], const char *elemento) {
    int contador = Contar_Elementos(arr);

    if (contador < (BUFFER_LEN - 1 - strlen(elemento))) {
        arr[contador] = strdup(elemento); // Duplicar la cadena para almacenarla
        arr[contador + 1] = NULL; // Mantener el marcador de final
    }
}

void Generar_Discurso_Loco() {
    srand(time(NULL));

    int len_nombres = Contar_Elementos(nombres);
    int len_adjetivos = Contar_Elementos(adjetivos);
    int len_verbos = Contar_Elementos(verbos);

    int index_nombre1 = rand() % len_nombres;
    int index_adjetivo = rand() % len_adjetivos;
    int index_verbo = rand() % len_verbos;
    int index_nombre2 = rand() % len_nombres;

    printf("%s %s %s %s.\r\n", nombres[index_nombre1], adjetivos[index_adjetivo], verbos[index_verbo], nombres[index_nombre2]);
}

int main(int argc, char const *argv[])
{
    int caracter = 0;

    // Procesar los argumentos de la línea de comandos
    for (int i = 1; i < argc; i++) {
        if (strncmp(argv[i], "nombre:", 7) == 0) {
            Agregar_Elemento(nombres, argv[i] + 7);
        } else if (strncmp(argv[i], "adjetivo:", 9) == 0) {
            Agregar_Elemento(adjetivos, argv[i] + 9);
        } else if (strncmp(argv[i], "verbo:", 6) == 0) {
            Agregar_Elemento(verbos, argv[i] + 6);
        }
    }

    while((caracter = getchar()) != EOF) {
        if(caracter == '\n')
        {
            Generar_Discurso_Loco();
        } 
    }

    return 0;
}