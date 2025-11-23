#include <stdio.h>
#include "pares.h"
int main(){
    int tamanhos[6];
    char lados[6];
    for (int i = 0; i < 6; i++){
        printf("Tamanhos: ");
        scanf("%d",(tamanhos+i));
        printf("Lados: ");
        scanf(" %c",(lados+i));
    }
    int par = pares(tamanhos,lados);
    printf("Pares: %d",par);
    return 0;
}