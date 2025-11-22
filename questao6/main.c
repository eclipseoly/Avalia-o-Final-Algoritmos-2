#include <stdio.h>
#include "collatz.h"
int main(){
    int n=0;
    do{
        printf("Num:");
        scanf("%d",&n);
    } while (n>=1000000 || n<0);
    collatz(n);
    return 0;
}