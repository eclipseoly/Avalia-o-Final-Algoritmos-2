#include <stdio.h>
//organizei assim só pra poder ler o main primeiro :]
void ler();
void media();
float mediaPorNum();
void ordenar();
void printar();
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
    media(n,vet,&med);
    return 0;
}
void printar(int n,int *vet){
    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++){
        printf("%d, ",*(vet+i));
    }
    
}
float mediaPorNum(int n, float *meds, int *vet, float med){
    for (int i = 0; i < n; i++){
        *(meds+i)=(float)*(vet+i)/med;
    }   
}
void ordenar(int n, float *meds, int *vet){
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if((*(meds+i)-n) > (*(meds+j)-n)){
                *(vet+i)=*(vet+j);
                *(meds+i)=*(meds+j);
            }
        }
        
    }
    
}
void media(int n, int *vet, float *med){
    int soma=0;
    for (int i = 0; i < n; i++){
        soma+=*(vet+i);
    }
    *med = (float)soma/n;
}
void ler(int n, int *vet){
    for (int i = 0; i < n; i++){
        printf("Num %d:",i);
        scanf("%d",(vet+i));
    }
    
}