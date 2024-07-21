/*
    Cabecera del ejercicio entregable

    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 4: Punteros.
    herramientas: punteros, arreglos, funciones, main.

    Ejercicio entregable titulado: Discurso loco.
    Se debe generar una máquina que de discursos locos a partir de nombre, verbos y adjetivos.
    Extra: Añadir un menú para implementar nuevas palabras.

    Para ello, voy a emplear 3 arreglos que contengan: nombres, verbos en presente simple y tercera persona del singular y adjetivos.
    Finalmente, para generar una frase simplemente pulse ENTER
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Definiciones de macros
#define BUFFER_LEN  1024

// Variables relativas a los nombres
char *nombres[BUFFER_LEN] = {
    "un gato en patines",
    "Lola Lolita la TikToker",
    "Paco de mastermind el mago",
    "Ibai Llanos el rey de Twitch",
    "Pedro Sanchez el bailarin",
    "Nate Gentile el hacker",
    "un perro con sombrero",
    "Ritchie el legendario",
    "Pablo Motos el saltarin",
    "un rinoceronte cantante",
    "Manolo Lama el comentarista",
    "Pablo Escobar el barista",
    "Kernighan el sabio",
    NULL
};
int cantidad_nombres = 13;

// Variables relativas a adjetivos
char *adjetivos[BUFFER_LEN] = {
    "elegante como un duque",
    "enfadado como un huracan",
    "amarillento como un platano",
    "enfadado como un volcan",
    "enloquecido como un mono",
    "aburrido como una ostra",
    "animado como una fiesta",
    "contento como un chiquillo en navidad",
    "sorprendido como un pez fuera del agua",
    NULL
};

char *verbos[BUFFER_LEN] = {
    "baila con un tutu con",
    "corre como una gacela detras de",
    "salta como un canguro con"
    "duerme como un tronco y fantasea con",
    "grita como un loco persiguiendo a",
    "canta como una estrella de rock junto a",
    "pinta como un artista a",
    "cocina como un chef con",
    "escribe como un poeta un poema romantico a",
    NULL
};

// Funcion que permite contar los elementos de un arreglo según el valor NULL.
int Contar_Elementos(char *arr[]);

// Funcion que añade un elemento a los arreglos según el tipo de parámetro de entrada. NOTA: Leer los comentarios del inicio del archivo.
void Agregar_Elemento(char *arr[], const char *elemento);

// Generación del discurso loco.
void Generar_Discurso_Loco();