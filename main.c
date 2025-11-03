#include <stdio.h>
#include "calcul.h"

int main() {
    int n;
    int i;

    printf("Zadaj pocet predmetov: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Zly pocet predmetov.\n");
        return 0;
    }

    int pole[n];

    printf("Zadaj hmotnosti:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &pole[i]);
    }

    printf("minimal index: %d\n", minimal(pole, n));
    printf("max value: %d\n", maximal(pole, n));
    printf("summary: %d\n", summary(pole, n));
    printf("average: %.2f\n", average(pole, n));

    return 0;
}
