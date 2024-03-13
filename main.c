#include <stdio.h>

int search_tab(int len){
    int idf[] = {75, 77, 78, 91, 92, 93, 94, 95};

    for(int i = 0; i < len; i++)
        printf("%d\n", idf[i]);
}

int main(){
    printf("%d", search_tab(8));
}