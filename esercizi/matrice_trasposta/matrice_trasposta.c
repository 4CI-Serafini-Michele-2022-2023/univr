#include <stdio.h>

void main(){
    int lung;
    int input;

    printf("inserisci quando è lunga la matrice: ");
    scanf("%d", &lung);

    int matrice[lung][lung];

    for(int i=0; i<lung; i++){
        for (int k=0; k<lung; k++){
            printf("inserisci un numero: ");
            scanf("%d", &input);
            matrice[i][k] = input;
        }
    }

    for(int i=0; i<lung; i++){
        for (int k=0; k<lung; k++){
            printf("%d", matrice[k][i]);
        }
    }
    printf("\n");
}