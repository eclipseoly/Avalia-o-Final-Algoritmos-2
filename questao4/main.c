#include <stdio.h>
#include <ctype.h>
#include "pares.h"
int main(){
    int tamanhos[6];
    char lados[6];
    for (int i = 0; i < 6; i++){
        do
        {
            printf("Tamanhos (30 a 60): ");
            scanf("%d",(tamanhos+i));
            if (*(tamanhos+i)<30 || *(tamanhos+i)>60)
            {
                printf("\nTamanho invalido\n\n");
            }
            
        } while (*(tamanhos+i)<30 || *(tamanhos+i)>60);
        do
        {
            printf("Lados (E ou D): ");
            scanf(" %c",(lados+i));
            *(lados+i) = toupper(*(lados+i));
            if (*(lados+i)!='D' && *(lados+i)!='E')
            {
                printf("\nLado invalido\n\n");
            }
            
        } while (*(lados+i)!='D' && *(lados+i)!='E');
        
    }
    int par = pares(tamanhos,lados);
    printf("Pares: %d",par);
    return 0;
}