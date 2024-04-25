/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Reto: Gana a la máquina
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>
// FP, prototipo de función.
int bot_random_number_generator(int difficulty);
bool mayus = false;

int main() 
{
    bool loop = true;
    int char_to_guess = 93;
    int number_of_tries = 1;
    int bot_char = 0;
    int player_char = 0;
    int difficulty = 0;

    printf("Hola aprendiz de adivino, en la clase de hoy te enfrentaras al temido adivinabot. " 
            "Deberas adivinar la letra del abecedario que he pensado antes que el adivinabot.\r\n");
    printf("Antes de dar comienzo, selecciona la dificultad del bot entre facil(1), media(2) y dificil(3).\r\nDificultad: ");
    difficulty = getchar();
    while(getchar() != '\n');
    while (difficulty != '1' && difficulty != '2' && difficulty != '3') {
        printf("Dificultad introducida no valida, introduzca un valor entre 1 y 3 incluidos: ");
        difficulty = getchar();
       while(getchar() != '\n');
    }
    
    // Semilla del generador de números con el tiempo actual, para que el generador sea distinto siempre que se ejecute.
    srand(time(NULL));

    // Generación de letra aleatoria del abecedario en minúscula o mayúscula.
    // Debido a que las letras se encuentran entre el valor 65 y 122 incluidos y existen caracteres que no son letras entre 91 y 96, se ha decidido emplear este bucle.
    while((90 < char_to_guess) && (97 > char_to_guess)) {
        char_to_guess = (rand() % 57) + 65;
        // printf("Caracter en bucle: %d\r\n", char_to_guess);      // Print de prueba del código.
    }

    // Pequeña pista para el usuario, permite también que el bot conozca esto si establecemos el modo dificil del mismo.
    if(91 > char_to_guess) {
        printf("Ya he pensado una letra del abecedario y, como pista, te puedo decir que es mayuscula.\r\nDime una letra: ");
        mayus = true;
    } else {
        printf("Ya he pensado una letra del abecedario y, como pista, te puedo decir que es minuscula.\r\nDime una letra: ");
    }
    // printf("Caracter ASCII: %d, %c\r\n", char_to_guess, char_to_guess);         // Print de prueba para comprobar cual es la letra a adivinar.

    while(loop) {
        player_char = getchar();
        while(getchar() != '\n');
        // printf("Player char: %c\r\n", player_char);         // Print de prueba para comprobar letra de jugador.

        if (player_char == EOF) {
            printf("Juego finalizado, te rindes joven aprendiz? Solo has hecho %d intentos.\r\n", number_of_tries);
            loop = false;
        }
        else if (player_char == char_to_guess) {
            printf("Enhorabuena!! Has vencido al adivinabot en %d intentos.\r\nVeinte puntos para la casa Ritchie!!!\r\n", number_of_tries);
            loop = false;
        } else {
            printf("Has fallado, turno del adivinabot.\r\n");
            srand(number_of_tries);
            bot_char = bot_random_number_generator(difficulty);
            printf("Letra del bot: %c\r\n", bot_char);          // Se puede comentar o mantener si se prefiere conocer las letras que el bot genera o no.
            if (bot_char == char_to_guess) {
                printf("El adivinabot no falla, ha acertado en %d intentos.\r\n"
                        "Suerte la proxima joven aprendiz y no te desilusiones siempre te queda el tarot.\r\n", number_of_tries);
                loop = false;
            } else {
                printf("El adivinabot ha fallado. Estos cacharros ya no son lo que eran.\r\nEs tu turno: ");
            }
        }

        number_of_tries++;
    }
}

int bot_random_number_generator(int level) {
    int number = 92;

    if ('1'== level) {
        number = rand() % 255;
    } else if('2' == level) {
        while((90 < number) && (97 > number)) 
        {
            number = (rand() % 57) + 65;
        }
    } else {
        if(mayus) {
            number = (rand() % 25) + 65;
        }else {
            number = (rand() % 25) + 97;
        }
    }

    return number;
}