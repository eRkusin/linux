#include <stdio.h>
#include "calcul.h"

int main() {
    int n;
    printf("Zadaj pocet predmetov: ");
    scanf("%d", &n);

    int pole[n];
    printf("Zadaj hmotnosti:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &pole[i]);
    }

    printf("Minimalny predmet (poradie): %d\n", minimal(pole, n));
    printf("Maximalna hmotnost: %d\n", maximal(pole, n));
    printf("Celkova hmotnost: %d\n", summary(pole, n));
    printf("Priemerna hmotnost: %.2f\n", average(pole, n));

    return 0;
}
