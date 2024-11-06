#include <stdio.h>

void main(){
    int a,b,c,delta;

    printf("inserisci il valore di a del polinomio: \n");
    scanf("%d", &a);

    if(a == 0){
        printf("il polinomio è di grado inferiore al secondo\n");

    }else{

        printf("inserisci il valore di b del polinomio: \n");
        scanf("%d", &b);

        printf("inserisci il valore di c del polinomio: \n");
        scanf("%d", &c);

        delta = (b*b) - (4*a*c);
        
        if(delta > 0){
            printf("il delta è: %d \n",delta);
        }else if(delta == 0){
            printf("il delta ha una sola soluzione \n");
        }else{
            printf("il delta è negativo, non ha soluzioni \n");
        }
    }
}