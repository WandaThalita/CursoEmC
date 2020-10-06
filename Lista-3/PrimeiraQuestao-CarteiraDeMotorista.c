#include <stdio.h>
#include <stdlib.h>

int main (){

    int idade;
    float nota;

    printf ("Preencha os dados a seguir e descubra se conseguiu a carteira de motorista!\n");
    printf ("Infome sua idade:\n");
    scanf ("%d", &idade);
    printf ("Informe sua nota:\n");
    scanf ("%f", &nota);

    if ((idade >= 18) && (nota >= 7)) {
      printf ("você conseguiu a carteira de motorista!\n"); }
    else {
      printf ("você não conseguiu!\n");
    }

return 0;

}