#include <stdio.h>
#include <stdlib.h>

int main () {

int IntervaloDosExpedientes; 
int TempoMinutos = 60;
int IntervaloDeTempoHora;
int IntervaloDeTempoMinutos;

printf ("-----Para quem trabalha ou exerce alguma atividade em dois turnos-----\n");
printf ("Informe, em segundos, o intervalo entre os dois expedientes:\n");
scanf ("%d", &IntervaloDosExpedientes);

IntervaloDeTempoMinutos= (IntervaloDosExpedientes/TempoMinutos);

printf ("O intervalo de tempo em segundos revertido em minutos sera: %d\n", IntervaloDeTempoMinutos);

IntervaloDeTempoHora= (IntervaloDeTempoMinutos/TempoMinutos);

printf ("O intervalo de tempo em minutos revertido em hora sera:%d\n", IntervaloDeTempoHora);

return 0;

}