#include <stdio.h>
float raiz(float n){
    float epilson=0.00001;
    float x1=n/2.0,x2=0.0;
    //palpite inicial
    float diferenca;
    if (n==0){
        return 0;
    }
    
    do{
        x2=(x1+(n/x1))/2.0;
        x1=x2;
        diferenca = n-(x2*x2);
        if (diferenca < 0) {
            diferenca = -diferenca;
            //tem que considerar o módulo da diferença pq a aproximação pode ser pra mais ou pra menos
        }
    }while(diferenca > epilson);
    return x2;
}