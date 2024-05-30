#include <stdio.h>
#include <stdlib.h>
#include "homari.h"

int main() {
    int n, capacitate;
    Homar *homari;

    // Citim datele de intrare
    citire(&homari, &n, &capacitate);

    // Calculam valoarea maxima ce poate fi obtinuta
    int valoare_maxima = ValoareMaxima(capacitate, homari, n);

    // Afisam rezultatul
    afisare(valoare_maxima);

    // Eliberam memoria alocata pentru homari
    free(homari);

    return 0;
}
