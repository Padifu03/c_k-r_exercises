/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 2: Arreglos o arrays, if-else, condiciones
    herramientas: funciones, arreglos
    
    Entrega: Juego de espías
*/
#include <stdio.h>
// Librería de GCC para copiar memoria. En este caso, empleo el memcpy()
# include <string.h>
// Librería de GCC para trabajar con tipos de caracteres.
#include <ctype.h>

// DEFINES
#define MAX_TEXT_SIZE   1000                    // Tamaño máximo del texto.

// VARIABLES
char message[] = "Hola Mastermind, esto es un mensaje con cifrado Cesar.\0";             // Mensaje original.     
int caesar_module = 16;                          // Módulo de cifrado César.
char processed_message[MAX_TEXT_SIZE];          // Mensaje procesado.

// FP
void Caesar_Cypher(int module, char *message, int message_size);
void Caesar_Decypher(int module, char *message, int message_size);

int main()
{
    printf("Este es un test de uso del Cifrado Cesar!\r\n");
    printf("Mensaje original: %s\r\nModulo del cifrado Cesar: %d\r\n", message, caesar_module);
    Caesar_Cypher(caesar_module, message, sizeof(message));
    printf("Mensaje cifrado: %s\r\n", message);
    Caesar_Decypher(caesar_module, message, sizeof(message));
    printf("Mensaje descifrado: %s\r\n", message);

    return 0;
}

void Caesar_Cypher(int module, char *message, int message_size) 
{
    for(int i = 0; message[i] != '\0'; i++) {
        if(isalnum(message[i])) {
            if(islower(message[i])) {
                message[i] = (message[i] - 'a' + module) % 27 + 'a';
            }
            else if (isupper(message[i])) {
                message[i] = (message[i] - 'A' + module) % 27 + 'A';
            }
            else if (isdigit(message[i])) {
                message[i] = (message[i] - '0' + module) % 10 + '0';
            }
        }
    }
}

void Caesar_Decypher(int module, char *message, int message_size) 
{
    for(int i = 0; message[i] != '\0'; i++) {
        if(isalnum(message[i])) {
            if(islower(message[i])) {
                message[i] = (message[i] - 'a' - module + 27) % 27 + 'a';
            }
            else if (isupper(message[i])) {
                message[i] = (message[i] - 'A' - module + 27) % 27 + 'A';
            }
            else if (isdigit(message[i])) {
                message[i] = (message[i] - '0' - module + 27) % 10 + '0';
            }
        }
    }
}