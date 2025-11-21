#include <stdio.h>
void ler();
float media();
int main(){
    int n = 0;
    float med = 0;
    do{
        printf("Num:");
        scanf("%d",&n);
        if(n > 1000){
            printf("Digite novamente");
        }
    }while(n > 1000);
    int vet[n];
    ler(n,vet);
    return 0;
}
float media(int n, int *ptr, float *med){
    int soma=0;
    for (int i = 0; i < n; i++){
        soma+= *(ptr+i);
    }
    *med = (float)soma/n;
}
void ler(int n, int *ptr){
    for (int i = 0; i < n; i++){
        printf("Num %d:",i);
        scanf("%d",(ptr+i));
    }
    
}