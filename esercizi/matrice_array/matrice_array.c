#include <stdio.h>

void main(){
    int matrice[4][6];
    int array[24];
    int input;

    for(int i=0; i<4; i++){
        for (int k=0; k<6; k++){
            printf("inserisci un numero: ");
            scanf("%d", &input);
            matrice[i][k] = input;
        }
    }
    int cont=0;
    for(int i=0; i<4; i++){
        for(int k=0; k<6; k++){
            array[cont]=matrice[i][k];
            cont++;
        }
    }
    printf("\n");

    for(int i=0; i<24; i++){
        printf("%d", array[i]);
    }
    printf("\n");
}