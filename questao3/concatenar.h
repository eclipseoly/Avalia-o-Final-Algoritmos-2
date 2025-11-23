void concatenar(char *str1, char *str2){
    int i=0,j=0;
    while (*(str1+i)!='\0'){
        i++;
    }
    while (*(str2+j)!='\0'){
        *(str1+i) = *(str2+j);
        j++;
        i++;
    }
    *(str1+i)='\0';
}