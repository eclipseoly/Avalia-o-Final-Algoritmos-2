int pares(int *tamanhos,char *lados){
    int pares=0;
    for (int i = 0; i < 5; i++){
        for (int j = i+1; j < 5; j++){
            if (*(tamanhos+i)==*(tamanhos+j) && *(lados+i)!=*(lados+j)){
                pares++;
            }
        }
    }
    return pares;
}