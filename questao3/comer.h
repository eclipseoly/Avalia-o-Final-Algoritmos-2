#include "struct.h"
#include "concatenar.h"
void comer(Filosofo *filosofos,int rodadas){
    int comeram=0,indice=0;
    do{
        int garfos[5]={0};
        for (int i = 0; i < 5; i++){
            if (garfos[i]==0 && garfos[(i+1)%5]==0){
                if (!(filosofos+i)->pratosComidos){
                    concatenar((filosofos+i)->nome," COME");
                }
                (filosofos+i)->pratosComidos++;
                *(garfos+i)=1;
                *(garfos+(i+1)%5)=1;
            }
            if ((filosofos+i)->pratosComidos){
                comeram++;
            }
        }
        indice++;
    } while (comeram<5 && indice<rodadas);
}