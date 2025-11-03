#include "calcul.h"

// minimalna hmotnost – vracia index
int minimal(const int pole[], const int pocet)
{
    if (pole == 0 || pocet <= 0) return -1;

    int i;
    int minIndex = 0;

    for (i = 0; i < pocet; i++) {
        if (pole[i] < 0) return -1; // zakazane hodnoty
        if (pole[i] < pole[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

// maximalna hmotnost – vracia hodnotu
int maximal(const int pole[], const int pocet)
{
    if (pole == 0 || pocet <= 0) return -1;

    int i;
    int max = pole[0];

    for (i = 0; i < pocet; i++) {
        if (pole[i] < 0) return -1;
        if (pole[i] > max) {
            max = pole[i];
        }
    }
    return max;
}

// sucet hmotnosti
int summary(const int pole[], const int pocet)
{
    if (pole == 0 || pocet <= 0) return -1;

    int i;
    int sum = 0;

    for (i = 0; i < pocet; i++) {
        if (pole[i] < 0) return -1;
        sum += pole[i];
    }
    return sum;
}

// priemer hmotnosti
double average(const int pole[], const int pocet)
{
    if (pole == 0 || pocet <= 0) return -1.0;

    int i;
    int sum = 0;

    for (i = 0; i < pocet; i++) {
        if (pole[i] < 0) return -1.0;
        sum += pole[i];
    }

    return (double)sum / pocet;
}

