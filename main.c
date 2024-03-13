#include <stdio.h>
#include "functions.h"

int main(){
    int idf[] = {75, 77, 78, 91, 92, 93, 94, 95};

    printf("la liste des département de la région ile de france : ");
    search_tab(idf, 8);
}