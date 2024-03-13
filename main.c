#include <stdio.h>

int search_tab(int len){
    int idf[] = {75, 77, 78, 91, 92, 93, 94, 95};

    for(int i = 0; i < len; i++)
        printf("%d", idf[i]);
}

int main(){
    printf("la liste des département de la région ile de france : %d", search_tab(8));
}