#include <stdio.h>
#include <stdbool.h>

void main() {
    int numeri_primi[15];
    int count = 0;

    bool is_prime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    for (int num = 2; num < 50; num++) {
        if (is_prime(num)) {
            numeri_primi[count] = num;
            count++;
        }
        if (count >= 15) {
            break;
        }
    }

    printf("Numeri primi minori di 50:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numeri_primi[i]);
    }
    printf("\n");
}
