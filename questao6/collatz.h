#include <stdio.h>
void collatz(int n){
    FILE *sequenciaCollatz;
    sequenciaCollatz = fopen("./sequencia.txt", "a");
    fprintf(sequenciaCollatz,"\n=========================\n");
    fprintf(sequenciaCollatz,"\nSequencia Collatz de %d: \n",n);
    fprintf(sequenciaCollatz,"\n=========================\n");
    int x,seq,maiorSeq=0,numMaiorSeq=0;
    for (int i = 1; i <= n; i++){
        x=i;
        seq=1;
        while(x!=1){
            if(x%2==0){
                x/=2;
            }else{
                x = 3*x + 1;
            }
            if(x!=1){
                printf("%d -> ",x);
                fprintf(sequenciaCollatz,"%d -> ",x);
            }else{
                printf("%d",x);
                fprintf(sequenciaCollatz,"%d",x);
            }
            seq++;
        }
        if (seq>maiorSeq){
            maiorSeq=seq;
            numMaiorSeq=i;
        }
        printf("\n"); 
        fprintf(sequenciaCollatz,"\n"); 
    }
    printf("\n\nMaior sequencia: %d\n",maiorSeq);
    printf("Numero que gera a maior sequencia: %d\n\n",numMaiorSeq);
    fprintf(sequenciaCollatz,"\n\nMaior sequencia: %d\n",maiorSeq);
    fprintf(sequenciaCollatz,"Numero que gera a maior sequencia: %d\n\n",numMaiorSeq);
    fclose(sequenciaCollatz);
}