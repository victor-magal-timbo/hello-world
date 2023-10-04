#include <stdio.h>

int main()
{
    int v[]={1,5,3,9,77,45,9,5,3,8,6,4,21,33,51,89};
    int tam = sizeof(v)/sizeof(v[0]);
    int i , cont, aux;
    
    for(cont=0;cont<tam-1;cont++){
        for(i=0;i<tam-1;i++){
            if(v[i]>v[i+1]){
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }
    for(i=0;i<tam;i++){
        printf("%d ", v[i]);
    }
    return 0;
}
