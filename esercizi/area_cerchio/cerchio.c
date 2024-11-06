#include <stdio.h>
/*
Scrivere un programma che chiede all'utente il
raggio di un cerchio. L'algoritmo calcola e
visualizza l'area di tale cerchio.
*/

void main(){
    float raggio = 0;
    float area = 0;

    do
    {
        printf("inserisci il raggio del cerchio: ");
        scanf("%f", &raggio);
    } while (raggio < 0);

    area = (raggio*2) * 3.14;
    printf("l'area del cerchio è: %f \n", area);
}