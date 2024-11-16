#include <stdio.h>

void main(){
	int a, b, somma;
	do{
		printf("inserisci a: \n");
		scanf("%d", &a);

		printf("inserisci b: \n");
		scanf("%d", &b);

	}while(a == b && a < 0 || b < 0);

	somma = a + b;
	int num, resto;
    while(a && b >0){
        resto=num%10;
        printf("%d\n", &resto);
        num=num/10;
    }
}
