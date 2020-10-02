#include <stdio.h>
#include <stdlib.h>

int main () {

int AnoDeNascimento;
int Idade;
int AnoAtual;

printf ("-----Calcular Idade------\n");
printf ("Insira o ano do seu nascimento:\n");
scanf ("%d", &AnoDeNascimento);
printf ("Insira o ano atual:\n");
scanf ("%d", &AnoAtual);

Idade = (AnoAtual-AnoDeNascimento);

printf ("A sua idade e: %d \n", Idade);

return 0;

}