#include <stdio.h>
#include <stdlib.h>

int main () {

 char genero;

printf ("Se identifique ao utilizar o banheiro:\n");
printf ("Digite F se o seu gênero for Feminino, M se for Masculino e O para Outros:\n");
scanf ("%c", &genero);

if (genero=='F'){
    printf ("Dirija-se ao banheiro feminino!\n");}
else {
    if (genero=='M') {
        printf ("Dirija-se ao banheiro masculino!\n");}
    else {
        if (genero=='O') {
            printf ("Dirija-se ao banheiro unissex!\n");}
            printf ("Não foi possível identificar, tente novamente!\n");
    }
     }

return 0;

}
