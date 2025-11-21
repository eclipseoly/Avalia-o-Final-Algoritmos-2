#include "struct.h"
float indice(Palavras *pala1,Palavras *pala2){
    float indice;
    int inter=0,ind1=0,ind2=0;
    int uniao=pala1->numPalavras+pala2->numPalavras;
    for (int i = 0; i < pala1->numPalavras; i++){
        for (int j = 0; j < pala1->numPalavras; j++){
            if (*(pala1->palavras+i)==*(pala2->palavras+j)){
                inter++;
            }
        }
    }
    indice = (float)inter/uniao;
    return indice;
}