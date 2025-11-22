void ordernar(int n, int *vet, float *diferencas){
    printf("Entrou\n");
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (*(diferencas+i) > *(diferencas+j)){
                int aux = *(vet+i);
                *(vet+i) = *(vet+j);
                *(vet+j) = aux;
                //trocando de lugar os números
                aux = *(diferencas+i);
                *(diferencas+i) = *(diferencas+j);
                *(diferencas+j) = aux;
                //tbm precisa trocar de lugar suas diferenças
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (*(diferencas+i) == *(diferencas+j) && *(vet+i)<*(vet+j)){
                int aux = *(vet+i);
                *(vet+i) = *(vet+j);
                *(vet+j) = aux;
            }
        }
    }
}