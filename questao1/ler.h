#include <stdio.h>
void ler(int n,int *vet){
    for (int i = 0; i < n; i++)
    {
        printf("Num:");
        scanf("%d",(vet+i));
    }
}