#include <stdio.h>
#include "function.h"

//longueur du tableau
int lenght(int t[]){
    int len = 0;

    for(int i = 0; t[i] != '\0'; i++){
        len++;
    }

    return len;
}

//affichage des départements dans le tableau
void affich_depart(int t[], int len){
    for(int i = 0; i < len, t[i] != 0; i++){
        printf("[%i]", t[i]);
    }
}

//fonction de recherche de départmements
int search_depart(int t[], int len, int x){
    for (int i = 0; i < len; i++){
        if(t[i] == x){
            printf("département trouvé : %d\n", x);
            return 1;
        } 
    }

    printf("Element non trouvé : %d\n", x);
    return 0;
}

//fonction de création d'un tableau
int maxt(int t[]){
    t[TMAX];
    int x = 0; int i = 0;

    do{
        printf("Entrez un nombre : %d\n", x);
        scanf("%d", &x);
        t[i] = x;
        i++;
    } while (x!= -1 && i < TMAX);
    t[i] = '\0';
}

//fonction ajout d'un département dans un tableau
int add_depart(int t[], int len, int y){
    if (search_depart(t, len, y)){
        printf("Le département a été trouvé : ", y);
        return 0;
    }

    for (int i = 0; i < TMAX; i++){
        printf("Position de t[i] : %d %d\n", i, t[i]);
        if(t[i] == 0){
            t[i] = y;

            printf("Département ajouté : %d\n", t[i]);
            return 1;
        }
    }
    
}