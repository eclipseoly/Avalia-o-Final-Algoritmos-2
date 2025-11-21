#include <stdio.h>
void ler(char *frase1, char *frase2){
    printf("Frase 1:");
    scanf(" %[^\n]",frase1);
    printf("Frase 2:");
    scanf(" %[^\n]",frase2);
}