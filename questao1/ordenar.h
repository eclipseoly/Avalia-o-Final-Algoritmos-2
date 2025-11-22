void ordernar(int n, int *vet, float *diferencas){
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (*(diferencas+i) < *(diferencas+j)){
                int aux = *(vet+i);
                *(vet+i) = *(vet+j);
                *(vet+j) = aux;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; i++){
            if (*(diferencas+i) == *(diferencas+j) && *(vet+i)>*(vet+j)){
                int aux = *(vet+i);
                *(vet+i) = *(vet+j);
                *(vet+j) = aux;
            }
        }
    }
}