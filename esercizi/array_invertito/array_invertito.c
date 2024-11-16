/*
Scrivere un programma che dato un array
di caratteri
lungo 10 (con i valori letti da standard input) lo stampa,
lo stampa invertito, sostituisce ogni vocale minuscola con
un ’*’.
*/

#include <stdio.h>
void main(){
    char array[10];
    char input;

    for(int i=0; i<10; i++){
        printf("inserisci un carattere: ");
        scanf(" %c", &input);
        array[i] = input;
    }

    printf("\n");
    printf("\n");

    for(int i=10; i>0; i--){
        printf("%c", array[i]);
    }

    printf("\n");
    printf("\n");

    for(int i=0; i<10; i++){
        if(array[i]=='a' || array[i]=='e' || array[i]=='i' || array[i]=='o' || array[i]=='u'){
            array[i] = '*';
        }
    }

    printf("\n");
    printf("\n");

    for(int i=0; i<10; i++){
        printf("%c", array[i]);
    }
}