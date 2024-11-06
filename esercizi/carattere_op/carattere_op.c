/*
Scrivere un programma C che chiede all’utente
due numeri interi n1 e n2 e un carattere op
(appartenente all’insieme {‘+’,’-’,’*’,’/’}). Il
programma calcola e stampa a video il risultato
dell’operazione corrispondente a op applicata ai
numeri n1 e n2.
*/



#include <stdio.h>

void main(){
    int num1, num2;
    char op;

        printf("inserisci il primo numero intero: ");
        scanf("%d", &num1);

        printf("inserisci il secondo numero intero: ");
        scanf("%d", &num2);
        getchar();

    printf("inserisci il simbolo dell'operazione che vuoi fare: (+ - * /) ");
    scanf("%c", &op);

    if(op == '+'){
        printf("il risultato di %d + %d e`: %d \n", num1, num2, num1 + num2);
    }else if(op == '-'){
        printf("il risultato di %d - %d e`: %d \n", num1, num2, num1 - num2);
    }else if(op == '*'){
        printf("il risultato di %d * %d e`: %d \n", num1, num2, num1 * num2);
    }else if(op == '/'){
        printf("il risultato di %d / %d e`: %d \n", num1, num2, num1 / num2);
    }else {
        printf("operazione non valida");
    }

}