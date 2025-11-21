#include <stdio.h>
//organizei assim só pra poder ler o main primeiro :]
void ler(int n,int *vet);
void media(int n, int *vet, float *med);
void ordenar(int n, int *vet,float med);
void printar(int n,int *vet);
int main(){
    int n = 0;
    float med = 0;
    do{
        printf("Numero de elementos:");
        scanf("%d",&n);
        if(n > 1000){
            printf("Digite novamente");
        }
    }while(n > 10000 || n<0);
    int vet[n];
    ler(n,vet);
    media(n,vet,&med);
    ordenar(n,vet,med);
    printar(n,vet);
    return 0;
}
void printar(int n,int *vet){
    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++){
        printf("%d, ",*(vet+i));
    }
}
void media(int n, int *vet, float *med){
    //tive que usar long long pq senao dava bug no valor de n q em nenhum momento eh modificado
    long long soma=0;
    for (int i = 0; i < n; i++){
        soma+=*(vet+i);
    }
    *med = (float)soma/n;
    printf("Soma: %lld, N: %d\nMedia: %.4f\n", soma, n, *med); 
}
void ordenar(int n, int *vet,float med){
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if((float)(*(vet+i)-med) > (float)(*(vet+j)-med)){
                int aux = *(vet+i);
                *(vet+i) = *(vet+j);
                *(vet+j) = aux;
            }
        }
    }
}
void ler(int n, int *vet){
    for (int i = 0; i < n; i++){
        printf("Num %d:",i);
        scanf("%d",(vet+i));
    }
}