#include <stdio.h>
#include <stdlib.h>

int main () {

int PrecoPizzaDlamaria = 25;
int QuantidadeDePizzaSalgada;
int QuantidadeDePizzaDoce;
int QuantidadeDePizza;
int ValorTotal;

printf ("----Promocao Dlamaria Pizza G por %d reais \n", PrecoPizzaDlamaria);
printf ("Insira a quantidade de pizza salgada:\n");
scanf ("%d", &QuantidadeDePizzaSalgada);
printf ("Insira a quantidade de pizza doce:\n");
scanf ("%d", &QuantidadeDePizzaDoce);

QuantidadeDePizza = (QuantidadeDePizzaSalgada+QuantidadeDePizzaDoce);

printf ("Entao, quantidade de pizza sera:%d\n", QuantidadeDePizza);

ValorTotal = (PrecoPizzaDlamaria*QuantidadeDePizza);

printf ("O valor total a ser pago sera:%d reais\n", ValorTotal); 

return 0;

}
