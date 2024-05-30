
#ifndef HOMARI_H
#define HOMARI_H

// Structura pentru un homar
typedef struct {
    int dimensiune;
    int valoare;
} Homar;

// Functie pentru citirea datelor despre homari si capacitatea plasei
void citire(Homar **homari, int *n, int *capacitate);

// Functie pentru afisarea valorii maxime obtinute
void afisare(int valoare_maxima);

// Functie recursiva pentru calculul valorii maxime folosind metoda rucsacului si divide et impera
int ValoareMaxima(int capacitate, Homar homari[], int n);

#endif // HOMARI_H
