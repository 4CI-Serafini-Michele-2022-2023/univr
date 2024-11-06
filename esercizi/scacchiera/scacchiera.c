#include <stdio.h>

void main() {
    int rx, ry, qx, qy;

    printf("Inserisci le coordinate del Re (x y): ");
    scanf("%d %d", &rx, &ry);

    printf("Inserisci le coordinate della Regina (x y): ");
    scanf("%d %d", &qx, &qy);

    if (rx < 1 || rx > 8 || ry < 1 || ry > 8 || qx < 1 || qx > 8 || qy < 1 || qy > 8) {
        printf("Coordinate non valide. Entrambi i pezzi devono essere sulla scacchiera.\n");
    }

    if (rx == qx && ry == qy) {
        printf("Il Re e la Regina non possono occupare la stessa posizione.\n");
    }

    if (rx == qx || ry == qy || (rx > qx && ry > qy) || (rx < qx && ry < qy) || (rx > qx && ry < qy) || (rx < qx && ry > qy)) {
        printf("La Regina può mangiare il Re.\n");
        if (rx == qx) {
            printf("La Regina deve muoversi verticalmente di %d caselle ", ry - qy);
            if (ry > qy) {
                printf("verso l'alto.\n");
            } else {
                printf("verso il basso.\n");
            }
        } else if (ry == qy) {
            printf("La Regina deve muoversi orizzontalmente di %d caselle ", rx - qx);
            if (rx > qx) {
                printf("verso destra.\n");
            } else {
                printf("verso sinistra.\n");
            }
        } else {
            printf("La Regina deve muoversi in diagonale di ");
            if (rx > qx && ry > qy) {
                printf("%d caselle in alto a destra.\n", rx - qx);
            } else if (rx < qx && ry < qy) {
                printf("%d caselle in basso a sinistra.\n", qx - rx);
            } else if (rx > qx && ry < qy) {
                printf("%d caselle in basso a destra.\n", rx - qx);
            } else {
                printf("%d caselle in alto a sinistra.\n", qx - rx);
            }
        }
    } else {
        printf("La Regina non può mangiare il Re.\n");
    }

}