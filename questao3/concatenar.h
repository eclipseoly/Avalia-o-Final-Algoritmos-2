#include <stdlib.h>
char *concatenar(char *str1, char *str2){
    static char str3[100];
    int i=0,j=0,indice=0;
    while (*(str1+i)!='\0'){
        *(str3+indice) = *(str1+i);
        i++;
        indice++;
    }
    while (*(str2+j)!='\0'){
        *(str3+indice) = *(str2+j);
        j++;
        indice++;
    }
    *(str3+indice)='\0';
    return str3;
}