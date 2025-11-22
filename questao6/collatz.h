#include <stdio.h>
void collatz(int n){
    FILE *sequenciaCollatz;
    sequenciaCollatz = fopen("./sequencia.txt", "a");
    fprintf(sequenciaCollatz,"\n=========================\n");
    fprintf(sequenciaCollatz,"\nSequencia Collatz de %d: \n",n);
    fprintf(sequenciaCollatz,"\n=========================\n");
    int x;
    for (int i = 1; i < n; i++){
        x=i;
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
        }
        printf("\n");
        fprintf(sequenciaCollatz,"\n");
    }
    fclose(sequenciaCollatz);
}