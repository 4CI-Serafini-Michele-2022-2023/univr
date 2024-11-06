#include <stdio.h>
/*

Scrivere un programma C che chiede all’utente un
valore che rappresenta il peso in Kg e un valore
che rappresenta l’Altezza in metri e calcola l’indice
di massa corporeo, BMI = peso/ altezza^2

*/

void main(){
    float peso = 0;
    float altezza = 0;
    float indice = 0;

    do{
        printf("inserisci il peso in kg: ");
        scanf("%f", &peso);

        printf("inserisci l'altezza in metri: ");
        scanf("%f", &altezza);
    }while(peso < 0 || altezza < 0);

    indice = peso / (altezza*altezza);
    printf("l'indice di massa corporea è: %f \n ", indice);
}