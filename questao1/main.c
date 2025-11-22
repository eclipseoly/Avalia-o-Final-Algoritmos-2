#include <stdio.h>
#include "ler.h"
#include "valorMedio.h"
#include "ordenar.h"
int main(){
    int n;
    do{
        printf("Numero de elementos: ");
        scanf("%d",&n);
    }while(n>1000);
    int vet[n];
    ler(n,vet);
    valorMedio(n,vet);
    return 0;
}