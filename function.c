#include <stdio.h>
#include "function.h"

int lenght(int t[]){
    int len = 0;

    for(int i = 0; t[i] != '\0'; i++){
        len++;
    }

    return len;
}

void affich_depart(int t[], int len){
    for(int i = 0; i < len; i = i+1){
        printf("[%i]", t[i]);
    }
}

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

int maxt(int t[]){
    int t[TMAX];
    int x = 0; int i = 1;

    do{
        scanf("%d", &x);
        t[i] = x;
        i++;
    } while (x!= -1 && i < TMAX);
    t[i] = '\0';
    
}