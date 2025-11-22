float valorMedio(int n, int *vet){
    int soma=0;
    for (int i = 0; i < n; i++){
        soma+=*(vet+i);
    }
    return (float)soma/n;
}