#include <stdlib.h>
float *diferencas(int n, int *vet, float med){
    float *diferencas = (float *)malloc(n * sizeof(float));
    //to usando malloc para poder retornar o vetor, e como o tamanho n é fixo preciso do malloc
    for (int i = 0; i < n; i++){
        *(diferencas+i) = *(vet+i) - med;
        if (*(diferencas+i)<0){
            *(diferencas+i)*= -1;
        }
        printf("%f\n",*(diferencas+i));
    }
    return diferencas;
}