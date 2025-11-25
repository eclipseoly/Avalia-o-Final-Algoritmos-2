#include <stdio.h>
#include "raizquadrada.h"
int main(){
    float n;
    printf("Num:");
    scanf("%f",&n);
    float raizAproximada = raiz(n);
    printf("Raiz aproximada de %f: %f\n",n,raizAproximada);
    return 0;
}