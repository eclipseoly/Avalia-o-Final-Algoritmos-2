int comparar(char *pala1, char *pala2){
    int i=0,j=0;
    while (*(pala1+i)!='\0'){
        i++;
    };
    while (*(pala2+j)!='\0'){
        j++;
    };
    if(i!=j){
        return 1;
    }
    i=0;
    while (*(pala1+i)!='\0'){
        if(*(pala1+i)!=*(pala2+i)){
            return 1;
        }
        i++;
    }
    return 0;
}