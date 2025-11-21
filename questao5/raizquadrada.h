#include <stdio.h>
void raiz(float n){
    float epilson=0.000000001,x1=n/10,x2=0;
    do{
        x2=0.5*(x1+(n/x1));
        x1=x2;
        printf("%f",x2);
    }while((x2*x2) > epilson);
}