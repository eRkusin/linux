#include "calcul.h"

// Funkcia vo vstupnom poli najde prvok s minimalnou hmotnostou
int minimal(const int pole[], const int pocet)
{
    if (pocet <= 0 || pole == 0)
        return -1;

    int i;
    int min_index = 0;
    for (i = 1; i < pocet; i++)
    {
        if (pole[i] < pole[min_index])
        {
            min_index = i;
        }
    }
    return min_index + 1;
}

// Funkcia vo vstupnom poli najde prvok s maximalnou hmotnostou
int maximal(const int pole[], const int pocet)
{
    if (pocet <= 0 || pole == 0)
        return -1;

    int i;
    int max = pole[0];
    for (i = 1; i < pocet; i++)
    {
        if (pole[i] > max)
        {
            max = pole[i];
        }
    }
    return max;
}

// Funkcia zisti celkovu hmotnost predmetov v krabici
int summary(const int pole[], const int pocet)
{
    if (pocet <= 0 || pole == 0)
        return -1;

    int i;
    int sum = 0;
    for (i = 0; i < pocet; i++)
    {
        sum += pole[i];
    }
    return sum;
}

// Funkcia vypocita priemernu hmotnost predmetov v krabici
double average(const int pole[], const int pocet)
{
    if (pocet <= 0 || pole == 0)
        return -1.0;

    int sum = summary(pole, pocet);
    if (sum == -1)
        return -1.0;

    return (double)sum / pocet;
}

