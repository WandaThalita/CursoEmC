#include <stdio.h>

int main () {

int NumeroDeIngredientesSecos = 3;
int NumeroDeIngredientesMolhados = 3;
int NumeroDeTigelas = 2;
int NumeroDeTalheres = 2;
int NumeroDePratos = 1;
int NumeroDeFormas = 1;
int TempoPreaquecer = 15;
int TempoAssar = 40;
int TempoEsfriar = 30;
int TempoParaNAOAbrirOForno = 30; 

float ColherMediaComManteiga = 2.0;
float ColherMediaComFarinhaDeTrigo = 2.5;
float TemperaturaDoForno = 120.0;

printf ("----- RECEITA DE BOLO SIMPLES -----\n");
printf ("Ingredientes Secos: açucar, fermento em po, farinha de trigo\n");
printf ("Ingredientes Molhados: manteiga, ovos, leite\n");
printf ("Tigelas: recipienta para os ingredientes secos, recipiente para os ingredientes molhados\n");
printf ("Talheres: espatula, faca\n");
printf ("Pratos: um prato do tamanho da forma\n");
printf ("Formas: redonda com furo ravena\n");
printf ("Misturar os ingredientes secos no recipiente para os ingredientes secos\n");
printf ("Misturar os ingredientes molhados no recipiente para os ingredientes molhados\n");
printf ("Depositar a mistura dos ingredientes molhados no recipiente da mistura dos ingredientes secos\n");
printf ("Misturar os ingredientes secos nos molhados com uma espatula ate ficar homogenio\n");
printf ("Enquanto a massa descansa, ligar e preaquecer o forno por %f graus durante %d minutos \n", TemperaturaDoForno, TempoPreaquecer);
printf ("Untar a forma com %f colheres de manteiga e %f colheres de farinha de trigo \n", ColherMediaComManteiga, ColherMediaComFarinhaDeTrigo);
printf ("Abrir o forno\n");
printf ("Levar a massa ao forno\n");
printf ("Fechar o forno\n");
printf ("Assar o bolo por %f graus durante %d minutos \n", TemperaturaDoForno, TempoAssar);
printf ("Dica: nao abrir o forno durante os primeiros %d minutos, caso contrario, o bolo pode solar \n", TempoParaNAOAbrirOForno);
printf ("Desligar o forno\n");
printf ("Abrir o forno e retirar a forma com o bolo\n");
printf ("Deixar o bolo esfriar por %d minutos \n", TempoEsfriar);
printf ("Pegar a faca e passar nas laterais da forma até o bolo soltar\n");
printf ("Apos soltar as laterais do bolo, pegar um prato e virar a forma nele com cuidado ate o bolo sair inteiro\n");
printf ("Pronto, esta feito o bolo simples e gostosinho!\n");

return 0;

}