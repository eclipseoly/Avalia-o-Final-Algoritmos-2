int pares(int *tamanho, char *lado){
    int temPar[6]={0};
    int pares=0;
    for (int i = 0; i < 6; i++){
        for (int j = i+1; j < 6; j++){
            if (*(tamanho+i) == *(tamanho+j) && *(lado+i) != *(lado+j)){
                if (!(*(temPar+i)) && !(*(temPar+j))){
                    *(temPar+i)=1;
                    *(temPar+j)=1;
                    pares++;
                }
            }
        }
    }
    return pares;
}