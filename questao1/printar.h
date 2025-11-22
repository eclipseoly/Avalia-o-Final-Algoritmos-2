#include <stdio.h>
void printar(int n,int *vet){
    for (int i = 0; i < n; i++){
        printf("%d, ",*(vet+i));
    }
}