#include <stdio.h>

void main(){
    int anno;

    do{
        printf("inserisci l'anno: \n");
        scanf("%d", &anno);
    }while(anno < 0);

    if(anno % 4 == 0 && anno % 400 ==0 || anno % 100 != 0){
        printf("l'anno è bisestile");
    }else{
        printf("l'anno non è bisestile");
    }
}