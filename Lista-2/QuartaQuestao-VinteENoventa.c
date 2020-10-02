#include <stdio.h>
#include <stdlib.h>

int main () {

    int valor; 

    printf ("Indique um valor:\n");
    scanf ("%d", &valor);

    if ((valor>=20) && (valor<=90)) {
            printf ("Correto! O valor indicado está entre 20 e 90!\n"); }
    else { 
        printf ("O valor indicado não confere, tente novamente!\n");
    }

    return 0;
}