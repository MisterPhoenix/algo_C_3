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

int search_depart(int t[]){}