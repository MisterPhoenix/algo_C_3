#include <stdio.h>

int display_depart(int tab[], int len){
    for(int i = 0; i < 8; i++){
        printf("[%d] ", tab[i]);
    }
}


int main(){
    int idf[] = {75, 77, 78, 91, 92, 93, 94, 95};

    printf("la liste des départements de la région Île-de-France : ");

    display_depart(idf, 8);

    printf("\n");

    return 0;
}