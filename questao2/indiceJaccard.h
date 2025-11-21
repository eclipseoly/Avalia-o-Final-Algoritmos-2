#include <string.h>
#include "struct.h"
float indice(Palavras *pala1,Palavras *pala2){
    float indice;
    int inter=0;
    int uniao=0;
    printf("Palvras iguais: ");
    for (int i = 0; i < pala1->numPalavras; i++){
        for (int j = 0; j < pala2->numPalavras; j++){
            if (strcmp(*(pala1->palavras + i), *(pala2->palavras + j)) == 0){
                printf("%s, ",*(pala1->palavras+i));
                inter++;
            }
        }
    }
    uniao = pala1->numPalavras+pala2->numPalavras - inter;
    if(uniao){
        // só pra evitar divisao por zero
        indice = (float)inter/uniao;
    }
    return indice;
}