#include <stdio.h>
#include "ler.h"
#include "valorMedio.h"
#include "diferencas.h"
#include "ordenar.h"
#include "printar.h"
int main(){
    int n;
    do{
        printf("Numero de elementos: ");
        scanf("%d",&n);
    }while(n>1000);
    int vet[n];
    ler(n,vet);
    float med = valorMedio(n,vet);
    printf("Media: %f\n",med);
    float *dife;
    dife = diferencas(n,vet,med);
    ordernar(n,vet,dife);
    printar(n,vet);
    return 0;
}