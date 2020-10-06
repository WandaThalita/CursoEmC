#include <stdio.h>
#include <stdlib.h> 

int main () {

    char genero;

    printf ("-----Identificação de Gênero-----\n");
    printf ("Digite 'F' se o seu gênero for Feminino, 'M' se for Masculino e 'O', ou a letra que preferir, para Outros:\n\n");
    scanf ("%c",&genero);
    
    if ((genero == 'F')  || (genero == 'M')) {
      printf ("Você é cis genero!\n"); }
    else {
      printf ("Você é não-binarie!\n");}
    
    return 0;
    
    }