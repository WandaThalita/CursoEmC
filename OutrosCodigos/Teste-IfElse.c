#include <stdio.h>
#include <stdlib.h>

int main () {

    int valor;

    printf ("Insira um valor:\n");
    scanf ("%d", &valor);

    if ((valor%5)==0) {
        
        if ((valor%3)==0) { 
        printf ("O seu valor é divisível por 3 e por 5. Você acertou!\n"); }
        else {
        printf ("O seu valor não é divisível por 3. Tente novamente!\n");}
    }
    else {
        printf ("O valor não é divisível por 5. Tente novamente!\n");
    }

    return 0;
}