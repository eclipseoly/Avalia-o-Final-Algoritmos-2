#include <stdlib.h>
float *diferencas(int n, int *vet, float med){
    float *diferencas = (float *)malloc(n * sizeof(float));
    //to usando malloc para poder retornar o vetor, e como o tamanho n é fixo preciso do malloc
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            *(diferencas+i) = *(vet+i) - med;
            if (*(diferencas)<0){
                *(diferencas+i)*= -1;
            }
        }
    }
    return diferencas;
}