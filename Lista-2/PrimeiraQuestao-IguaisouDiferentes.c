#include <stdio.h>
#include <stdlib.h>

int main () {

    int valor1;
    int valor2;

    printf ("Insira o primeiro valor:\n");
    scanf ("%d", &valor1);
    printf ("Insira o segundo valor:\n");
    scanf ("%d", &valor2);

    if (valor1!=valor2){
        printf ("Os valores são diferentes!\n");}
    else {
        printf ("Os valores são iguais!\n");
    }

return 0;

}