#include "struct.h"
void separarPalavras(char *frase,Palavras *pala){
    int i=0,indPalavras=0,indLetras=0;
    do{
        while (*(frase+i)==' ' && *(frase+i)!='\0'){
            i++;
        }
        while (*(frase+i)!=' ' && *(frase+i)!='\0'){
            *(*(pala->palavras + indPalavras) + indLetras++) = *(frase + i++);
        }
        *(*(pala->palavras + indPalavras) + indLetras) = '\0';
        indPalavras++;
        indLetras=0;
    } while (*(frase+i)!='\0');
    pala->numPalavras = indPalavras;
}