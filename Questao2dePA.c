#include <stdio.h>

int main()
{
    int mat[1000][1000];
    int i, j, cont, aux, id;
    int linhas, colunas, tam;
    int v[1000000];
    
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);
    tam = linhas*colunas;
    cont = 0;
    do{
        for(i=0;i<linhas;i++){
            for(j=0;j<colunas;j++){
                printf("Digite o elemento [%d][%d] da matriz: ", i+1, j+1);
                scanf("%d", &mat[i][j]);
                cont++;
            }
        }
    }while(cont<tam);
    
    printf("--MATRIZ INICIAL--\n   ");
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            v[id] = mat[i][j];
            printf("%d  ", mat[i][j]);
            id++;
        }
        printf("\n   ");
    }
    /*printf("\nVETOR da matriz: ");
    for(id=0;id<tam;id++){
        printf("%d  ", v[id]); // verificar se o vetor esta recebendo todos os numeros da matriz
    }*/
    for(cont=0;cont<tam-1;cont++){
        for(id=0;id<tam-1;id++){
            if(v[id]<v[id+1]){
                aux=v[id];
                v[id]=v[id+1];
                v[id+1]=aux;
            }
        }
    }
    /*printf("\nVETOR ordenado da matriz: ");
    for(id=0;id<tam;id++){
        printf("%d  ", v[id]); // verificar se o vetor esta recebendo todos os numeros da matriz
    }*/
    printf("\n\n--MATRIZ ORDENADA--\n   ");
    id=0;
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            mat[i][j]= v[id];
            printf("%d  ", mat[i][j]);
            id++;
        }
        printf("\n   ");
    }
    return 0;
}
