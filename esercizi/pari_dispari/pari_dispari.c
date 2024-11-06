#include <stdio.h>

void main(){
    int valore = 0;
    int output;

    printf("inserisci un valore intero: ");
    scanf("%d", &valore);

    if(valore % 2 ==0){
        output = 0;
        printf("il numero e` pari\n");
    }else {
        output = 1;
        printf("il numero e` dispari\n");
    }
}