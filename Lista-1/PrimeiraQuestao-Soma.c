#include <stdio.h>
#include <stdlib.h>

int main () {

int tortadefrango;
int tortadoce;
int totaldetortas;

printf ("Quantidade de torta de frango:\n");
scanf ("%d", &tortadefrango);
printf ("Quantidade de torta doce:\n");
scanf ("%d", &tortadoce);

totaldetortas = (tortadefrango+tortadoce);

printf ("O total de tortas foi:%d\n", totaldetortas);

return 0;

}
