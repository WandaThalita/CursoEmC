#include <stdio.h> 
#include <stdlib.h>

int main () {

    float nota1;
    float nota2;
    float nota3;
    float SomaDasNotas;
    float NumeroDeProvas = 3;
    float MediaDasNotas;

    printf ("Insira a nota de cada prova: \n");
    scanf ("%f", &nota1);
    scanf ("%f", &nota2);
    scanf ("%f", &nota3);
    printf ("Os valores das provas foram: %f,%f e %f\n", nota1, nota2, nota3);

    SomaDasNotas = (nota1 + nota2 + nota3);
    MediaDasNotas = (SomaDasNotas/NumeroDeProvas);

    printf ("A media das notas sera: %f \n", MediaDasNotas);



    return 0;
    
     }

