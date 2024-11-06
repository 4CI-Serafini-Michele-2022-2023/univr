/*
Scrivere un programma in C che richiede
all’utente di inserire ore e minuti, calcola l’ora a
San Francisco (9 ore indietro) e a Teheran (+3:30)
e la stampa a video in formato «0-24 h : min». Se a
Teheran è già il giorno successivo o a San
Francisco ancora quello precedente, il programma
corregge l’ora e avvisa l’utente con un opportuno
messaggio a schermo.
*/

#include <stdio.h>

void main() {
    int ore, minuti;
    int oreSF, minutiSF;
    int oreTeheran, minutiTeheran;

    int diffSF = -9;
    int diffTeheranOre = 3;
    int diffTeheranMin = 30;

    printf("Inserisci ora corrente (0-24): ");
    scanf("%d", &ore);
    printf("Inserisci minuti correnti (0-59): ");
    scanf("%d", &minuti);

    oreSF = ore + diffSF;
    minutiSF = minuti;
    if (oreSF < 0) {
        oreSF += 24;
        printf("A San Francisco è ancora il giorno precedente.\n");
    }

    oreTeheran = ore + diffTeheranOre;
    minutiTeheran = minuti + diffTeheranMin;
    if (minutiTeheran >= 60) {
        minutiTeheran -= 60;
        oreTeheran += 1;
    }
    if (oreTeheran >= 24) {
        oreTeheran -= 24;
        printf("A Teheran è già il giorno successivo.\n");
    }

    printf("Ora a San Francisco: %02d:%02d\n", oreSF, minutiSF);
    printf("Ora a Teheran: %02d:%02d\n", oreTeheran, minutiTeheran);

}
