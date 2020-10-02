#include <stdio.h>
#include <stdlib.h>

int main () {

    int valor;

    printf ("Insira um valor:\n");
    scanf ("%d", &valor);

    if (valor>=0) {
        printf ("O valor absoluto é: %d \n", valor);}
    else {
        valor = (-valor); 
        printf ("O valor absoluto é: %d\n", valor);}
    
return 0;

}