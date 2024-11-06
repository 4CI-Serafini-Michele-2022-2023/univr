#include <stdio.h>
/*
Scrivere in linguaggio C un programma per calcolare il
numero di bottigliette d’acqua che si possono comprare
alla macchinetta. Il programma, dopo aver chiesto
all’utente i soldi a disposizione, stampa a video il numero
di bottigliette che possono essere acquistate e il resto da
ricevere dopo l’acquisto. Il prezzo di ciascuna bottiglietta è
di 40 centesimi. Si supponga che la cifra a disposizione sia
positiva e che la macchinetta abbia in giacenza un numero
illimitato di bottigliette. Per erogare il resto, la
macchinetta utilizza pezzi da 20, 10, 5 e 1 centesimi: il
programma dovrà calcolare il numero di monete di resto di
ciascun taglio, prediligendo l’utilizzo di monete di taglio
maggiore (ad esempio, se il resto è di 0.37 €, il programma
dovrà restituire: 1*20 cent, 1*10 cent, 1*5 cent, 2*1 cent).
Suggerimento: moltiplicare il valore della cifra a
disposizione per 100 per ottenere il numero di centesimi ed
eseguire il cast del valore ad int.
*/

#include <stdio.h>

void main(){
    float soldi;
    int bottigliette, resto, centesimi, monete[4] = {20, 10, 5, 1};

    printf("inserisci quanti soldi hai (in euro): ");
    scanf("%f", &soldi);

    centesimi = soldi * 100;
    bottigliette = centesimi / 40;
    resto = centesimi % 40;

    printf("i tuoi soldi in centesimi sono: %d \n", centesimi);
    printf("le bottigliette che puoi comprare sono: %d \n", bottigliette);
    printf("il resto dovuto è di: %d \n", resto);

    for(int i = 0; i < 4; i++){
        int num_monete = resto / monete[i];
        resto %= monete[i];
        printf("%d monete da %d centesimi\n", num_monete, monete[i]);
    }

}
