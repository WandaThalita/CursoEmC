#include <stdio.h>
#include <stdlib.h>

int main () {

float KmPorViagem;
float LitroPorKmRodado;
float ConsumoMedioNaViagem;

printf ("-----Calcular o Consumo Medio da Viagem Desejada-----\n");
printf ("Insira a distancia que sera pecorrida:\n");
scanf ("%f", &KmPorViagem);
printf ("Insira o litro de combutível que sera gasto por km rodado:\n");
scanf ("%f", &LitroPorKmRodado);

ConsumoMedioNaViagem = (KmPorViagem/LitroPorKmRodado);

printf ("Consumo medio da viagem sera:%f\n", ConsumoMedioNaViagem);

return 0;

}

