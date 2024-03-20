#include <stdio.h>
#include "function.h"

int main(){
    int idf[] = {75, 77, 78, 91, 92, 93, 94, 95};

    int aura[] = {1, 3, 7, 15, 26, 38, 42, 43, 63, 69, 73, 74};

    int tab[1000];

    printf("la liste des département d'Île-de-France :");

    affich_depart(idf, 8);

    printf("\n");

    search_depart(idf, 8, 78);

    printf("\n");

    affich_depart(aura, 12);

    printf("\n");

    search_depart(aura, 12, 42);
}