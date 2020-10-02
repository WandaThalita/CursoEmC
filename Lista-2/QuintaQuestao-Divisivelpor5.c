#include <stdio.h>
#include <stdlib.h>

int main () {

    int valor;

    printf ("Insira um valor:\n");
    scanf ("%d", &valor);

    if ((valor%5)==0) {
        printf ("O seu valor é divisível por 5!\n"); 
    }
    else {
        printf ("O seu valor não é divisível por 5!\n");
    }

return 0;

}