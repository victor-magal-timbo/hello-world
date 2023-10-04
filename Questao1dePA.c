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

/// O MESMO CODIGO UM POUCO DIFERENTE

int main()
{
    int v[]={1,5,3,9,77,45,9,5,3,8,6,4,21,33,51,89};
    int tam = sizeof(v)/sizeof(v[0]);
    int i , cont, num, aux;

    for(cont=0;cont<tam-1;cont++){
        printf("\ncontador de repeticoes: %d\n",cont);
        num=0;
        for(i=0;i<tam-1;i++){
            if(v[i]>v[i+1]){
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                printf("numero de trocas: %d\n",num);
                num++;
            }
        }
        if(num == 0){
            break;
        }
    }
    printf("\nVetor Ordenado = {");
    for(i=0;i<tam;i++){
        printf("%d ", v[i]);
    }
    printf("}\n");
    return 0;
}
