#include <stdio.h>
#include "struct.h"
#include "comer.h"
int main(){
    Filosofo filosofos[5];
    int rodadas=0;
    for (int i = 0; i < 5; i++){
        printf("Nome: ");
        scanf(" %[^\n]",(filosofos+i)->nome);
        // scanf("%c");
        (filosofos+i)->pratosComidos=0;
    }
    printf("Rodadas: ");
    scanf("%d",&rodadas);
    comer(filosofos,rodadas);
    for (int i = 0; i < 5; i++){
        printf("Nome: %s\n",(filosofos+i)->nome);
        printf("Pratos comidos: %d",(filosofos+i)->nome);
    }
    return 0;
}