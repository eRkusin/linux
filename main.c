#include <stdio.h>
#include "calcul.h"

int main()
{
    int pole[] = {5, 10, 3, 8};
    int n = 4;

    printf("minimal index: %d\n", minimal(pole, n));
    printf("max value: %d\n", maximal(pole, n));
    printf("summary: %d\n", summary(pole, n));
    printf("average: %.2f\n", average(pole, n));

    return 0;
}

