/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Capítulo 2: Arreglos o arrays, if-else, condiciones
    herramientas: arreglos

*/
#include <stdio.h>
#include <string.h>

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    memset(ndigit, 0, sizeof(ndigit));

    while((c=getchar()) != EOF) 
    {
        if(c >= '0' && c <= '9')  {
            ++ndigit[c - '0'];
        } else if(c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        } else {
            ++nother;
        }
    }
    printf("Digitos = ");
    for(i = 0; i <= 9; i++) {
        printf("numero %d: %d,", i, ndigit[i]);
    }
    printf(" espacios en blanco = %d, otros = %d\r\n", nwhite, nother);
    
    return 0;
}
