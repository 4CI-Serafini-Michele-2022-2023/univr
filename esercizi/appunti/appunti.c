"dato un numero >0 letto da tastiera verificare se tutte le sue cifre sono presenti in un array"

#include <stdio.h>
#define N 5

int main(){
    int cifre[N] = {3,3,0,7,4};
    int n, resto, presente, presenti=1;

    do{
        scanf("%d", &n);
    }while(n<=0 && presenti = =1);

    while(n>0){
        resto = n%10;
        for(int i=0; i<N; i++){
            if(cifre[i] == resto){
                presente = 1;
            }
        }
        if(presente == 0){
            presenti = 0;
        }
    }
}