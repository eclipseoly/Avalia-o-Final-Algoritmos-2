#include <stdio.h>
#include <ctype.h>
void ler(char *frase1, char *frase2){
    printf("Frase 1:");
    scanf(" %199[^\n]",frase1);
    printf("Frase 2:");
    scanf(" %199[^\n]",frase2);
    int i=0;
    while (*(frase1+i)!='\0'){
        *(frase1+i) = tolower(*(frase1+i));
        i++;
    }
    i=0;
    while (*(frase2+i)!='\0'){
        *(frase2+i) = tolower(*(frase2+i));
        i++;
    }
}