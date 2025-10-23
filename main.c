#include <stdio.h>
#include "calcul.h"

int main() {
    int n;
    printf("Zadaj pocet predmetov: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Neplatny pocet!\n");
        return 1;
    }

    int pole[n];
    int i;
    printf("Zadaj hmotnosti predmetov:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &pole[i]);
    }

    printf("\n--- Vysledky ---\n");
    printf("Poradie najlahsieho predmetu: %d\n", minimal(pole, n));
    printf("Najvacsia hmotnost: %d\n", maximal(pole, n));
    printf("Suma hmotnosti: %d\n", summary(pole, n));
    printf("Priemerna hmotnost: %.2f\n", average(pole, n));

    return 0;
}

