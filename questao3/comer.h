#include "struct.h"
#include "concatenar.h"
int comer(Filosofo *filosofos,int rodadas){
    int comeram=1,indice=0;
    int totalPratosComidos=0;
    do{
        int garfos[5]={0};
        for (int i = 0; i < 5; i++){
            if (*(garfos+i)==0 && *(garfos+(i+1)%5)==0){
                if (!(filosofos+i)->pratosComidos){
                    concatenar((filosofos+i)->nome," COME");
                }
                (filosofos+i)->pratosComidos++;
                totalPratosComidos++;
                *(garfos+i)=1;
                *(garfos+(i+1)%5)=1;
            }
        }
        
        for (int i = 0; i < 5; i++){
            if (!(filosofos+i)->pratosComidos){
                comeram=0;
            }
        }
        
        indice++;
    } while (comeram==0 && indice<rodadas);
    return totalPratosComidos;
}