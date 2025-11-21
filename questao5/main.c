#include <stdio.h>
//só estou usando essa biblioteca pra pegar o menor número real positivo que o C suporta
#include "raizquadrada.h"
int main(){
    float n;
    printf("Num:");
    scanf("%f",&n);
    raiz(n);
    return 0;
}