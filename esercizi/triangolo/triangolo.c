#include <stdio.h>

void main(){
    float num1, num2, num3;

        printf("inserisci la dimensione del primo lato\n");
        scanf("%f", &num1);

        printf("inserisci la dimensione del secondo lato\n");
        scanf("%f", &num2);

        printf("inserisci la dimensione del terzo lato\n");
        scanf("%f", &num3);

    if(num1, num2, num3 < 0 && (num1 + num2) > num3){
        printf("ERRORE \n");
    }

    if(num1 == num2 == num3){
        printf("il triangolo è equilatero");
    }else if(num1 != num2 != num3){
        printf("il triangolo è scaleno");
    }else{
        printf("il triangolo è isoscele");
    }
}