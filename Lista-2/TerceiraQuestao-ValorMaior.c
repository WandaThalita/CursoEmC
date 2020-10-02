#include <stdio.h>
#include <stdlib.h>

int main () {

    int valor1;
    int valor2;
    int maior; 

    printf ("Insira o primeiro valor:\n");
    scanf ("%d", &valor1);
    printf ("Insira o segundo valor:\n");
    scanf ("%d", &valor2);

    if (valor1>valor2){
        (maior = valor1);
        printf ("O valor maior é: %d\n", maior); }
    else {
        (maior = valor2);
        printf ("O valor maior é: %d\n", maior);}
    
    return 0;

    }


