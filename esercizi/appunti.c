/*
scrivere un programma che richiede all'utente un numero intero maggiore di 1. il programma 
continua a richiedere l'input finchè la condizione non è verificata. il programma verifica se il numero è primo
e visualizza il messaggio
*/
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d è un numero primo.\n", num);
    } else {
        printf("%d non è un numero primo.\n", num);
    }

    return 0;
}