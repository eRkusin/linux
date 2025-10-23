#include "calcul.h"

// Funkcia vo vstupnom poli najde prvok s minimalnou hmotnostou
// Vstup: pole - vstupne pole hmotnosti predmetov
//        pocet - pocet predmetov
// Navratova hodnota: index prvku pola s minimalnou hmotnostou
//                    (ak je viac prvkov, tak vrati prvy vyskyt)
// Ak nie je mozne vypocitat, funkcia vrati hodnotu -1
int minimal(const int pole[], const int pocet)
{
    if (pocet <= 0 || pole == 0)
        return -1;

    int min_index = 0;
    for (int i = 1; i < pocet; i++)
    {
        if (pole[i] < pole[min_index])
        {
            min_index = i;
        }
    }
    // vraciame poradie, teda index + 1
    return min_index + 1;
}

// Funkcia vo vstupnom poli najde prvok s maximalnou hmotnostou
// Vstup: pole - vstupne pole hmotnosti predmetov
//        pocet - pocet predmetov
// Navratova hodnota: maximalna hmotnost predmetu
// Ak nie je mozne vypocitat, funkcia vrati hodnotu -1
int maximal(const int pole[], const int pocet)
{
    if (pocet <= 0 || pole == 0)
        return -1;

    int max = pole[0];
    for (int i = 1; i < pocet; i++)
    {
        if (pole[i] > max)
        {
            max = pole[i];
        }
    }
    return max;
}

// Funkcia zisti celkovu hmotnost predmetov v krabici
// Vstup: pole - vstupne pole hmotnosti predmetov
//        pocet - pocet predmetov
// Navratova hodnota: celkova hmotnost predmetov v krabici
// Ak nie je mozne vypocitat, funkcia vrati hodnotu -1
int summary(const int pole[], const int pocet)
{
    if (pocet <= 0 || pole == 0)
        return -1;

    int sum = 0;
    for (int i = 0; i < pocet; i++)
    {
        sum += pole[i];
    }
    return sum;
}

// Funkcia vypocita priemernu hmotnost predmetov v krabici
// Vstup: pole - vstupne pole hmotnosti predmetov
//        pocet - pocet predmetov
// Navratova hodnota: priemerna hmotnost predmetov v krabici
// Ak nie je mozne vypocitat, funkcia vrati hodnotu -1.0
double average(const int pole[], const int pocet)
{
    if (pocet <= 0 || pole == 0)
        return -1.0;

    int sum = summary(pole, pocet);
    if (sum == -1)
        return -1.0;

    return (double)sum / pocet;
}
