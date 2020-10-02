#include <stdio.h>
#include <stdlib.h>

int main () {

    int valor;

    printf ("Insira um valor:\n");
    scanf ("%d", &valor);

    if ((valor%2)==0) {
        printf ("O seu valor é par!\n");}
    else {
        printf ("O seu valor é ímpar!\n");
    }

return 0;

}