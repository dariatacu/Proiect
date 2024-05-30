#include <stdio.h>
#include <stdlib.h>
#include "homari.h"

void citire(Homar **homari, int *n, int *capacitate) {
    printf("Introduceti numarul de homari: ");
    scanf("%d", n);

    *homari = (Homar *)malloc(*n * sizeof(Homar));

    printf("Introduceti dimensiunea si valoarea fiecarui homar:\n");
    for (int i = 0; i < *n; i++) {
        printf("Homar %d - Dimensiune: ", i + 1);
        scanf("%d", &(*homari)[i].dimensiune);
        printf("Homar %d - Valoare: ", i + 1);
        scanf("%d", &(*homari)[i].valoare);
    }

    printf("Introduceti capacitatea plasei: ");
    scanf("%d", capacitate);
}

void afisare(int valoare_maxima) {
    printf("Valoarea maxima ce poate fi obtinuta este %d monede de aur\n", valoare_maxima);
}

int ValoareMaxima(int capacitate, Homar homari[], int n) {
    // Caz de baza: nu mai sunt homari sau capacitatea este zero
    if (n == 0 || capacitate == 0) {
        return 0;
    }

    // Daca dimensiunea ultimului homar este mai mare decat capacitatea rucsacului, acesta nu poate fi inclus
    if (homari[n - 1].dimensiune > capacitate) {
        return ValoareMaxima(capacitate, homari, n - 1);
    } else {
        // Calculam valoarea maxima inclusiv si exclusiv homarul curent
        int incluzand = homari[n - 1].valoare + ValoareMaxima(capacitate - homari[n - 1].dimensiune, homari, n - 1);
        int excluzand = ValoareMaxima(capacitate, homari, n - 1);
        return (incluzand > excluzand) ? incluzand : excluzand;
    }
}
