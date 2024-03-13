#include <stdio.h>

int search_tab(){
    int idf[] = {75, 77, 78, 91, 92, 93, 94, 95};

    printf("la liste des départements de la région Île-de-France : ");

    for(int i = 0; i < 8; i++)
        printf("[%d] ", idf[i]);

    printf("\n");
}

int main(){
    search_tab();
}