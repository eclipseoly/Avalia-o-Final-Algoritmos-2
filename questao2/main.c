#include <stdio.h>
#include "struct.h"
#include "ler.h"
#include "separarPalavras.h"
#include "indiceJaccard.h"
int main(){
    Palavras palavras1;
    Palavras palavras2;
    char frase1[200];
    char frase2[200];
    ler(frase1,frase2);
    separarPalavras(frase1,&palavras1);
    separarPalavras(frase2,&palavras2);
    float ind = indice(&palavras1,&palavras2);
    printf("Indice Jaccard %f",ind);
    return 0;
}