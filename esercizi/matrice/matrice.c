#include <stdio.h>

void main(){
    int matrice[3][4]=
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int cont=0;
    int x;

    printf("inserisci un valore di x: ");
    scanf("%d", &x);

    for(int i=0; i<3; i++){
        for(int k=0; k<4; k++){
            if(x == matrice[i][k]){
                cont++;
            }
        }
    }
    printf("x è comparso nella matrice %d volte \n", cont);
}