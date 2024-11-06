#include <stdio.h>

/*
Scrivere un programma in C che chiede all'utente
un valore che rappresenta una temperatura in
gradi celsius, converte il valore in gradi Fahrenheit
e visualizza il risultato. NOTA: la formula per la
conversione è gradi_F = gradi_C x 1.8 + 32
*/

void main(){
	float celsius = 0;
	float far = 0;
	printf("inserisci la temperatura in gradi celsius: ");
	scanf("%f", &celsius);
	far = celsius * 1.8 + 32;
	printf("la temperatura in gradi fahrenheit è: %f \n ", far);
}
