#include <stdio.h>
#include "function.h"

int main(){

    //définiton des tableau

    int idf[] = {75, 77, 78, 91, 92, 93, 94, 95};

    int aura[] = {1, 3, 7, 15, 26, 38, 42, 43, 63, 69, 73, 74};

    int tab[1000];

    int disp[TMAX]; //def d'un tableau vide

    //affichage départ Île-de-France

    printf("la liste des département d'Île-de-France :");

    affich_depart(idf, 8);

    printf("\n");

    //recherche des départ Île-de-France

    search_depart(idf, 8, 78);

    printf("\n");

    //affichage départ Auvergne-Rhône-Alpes

    printf("la liste des département d'Auvergne-Rhône-Alpes :");

    affich_depart(aura, 12);

    printf("\n");

    //recherche des départ Auvergne-Rhône-Alpes

    search_depart(aura, 12, 42);

    //fonction remplissage d'un tableau

    maxt(disp);

    affich_depart(disp, TMAX);

    add_depart(idf, TMAX, 78);

    affich_depart(idf, TMAX);
}