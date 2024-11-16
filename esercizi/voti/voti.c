/*
Scrivere un programma C che richiede all’utente 10 voti
(compresi tra 18 e 30, correggere gli errori) e li
memorizza all’interno di un array, quindi stampa l’array,
il voto massimo, minimo e medio.
*/

#include <stdio.h>

void main(){
    int voti [10];
    int voto;
    int media, min, max;

    //input dei voti
    for(int i=0; i<10; i++){
        printf("inserisci il voto: ");
        scanf("%d", &voto);
        voti[i]=voto;
    }

    //voto minimo
    for(int i=0; i<10; i++){
        if(voti[i] < min){
            min = voti[i];
        }
    }

    //voto massimo
    for(int i=0; i<10; i++){
        if(voti[i]>max){
            max = voti[i];
        }
    }

    //media dei voti
    for(int i=0; i<10; i++){
        media += voti[i];
    }

    for(int i=0; i<10; i++){
        printf("%d \n", voti[i]);
    }

    printf("la media dei voti è: %d \n", media);
    printf("il voto masismo è: %d \n", max);
    printf("il voto minimo è: %d \n", min);

}