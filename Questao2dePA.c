#include <stdio.h>

int main()
{
    int i, id, j, aux, cont;
    int linhas, colunas, tam;
    
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);
    tam = linhas*colunas;
    
    int mat[linhas][colunas];
    int v[tam];
    
    for(i = 0;i < tam;i++){
        printf("Digite o %d elemento da matriz: ", i+1);
        scanf("%d", &v[i]);
    }
    /*printf("\nVETOR da matriz: ");
    for(i=0;i<tam;i++){
        printf("%d  ", v[i]); // verificar se o vetor esta recebendo todos os numeros da matriz
    }*/
    for(cont=0;cont<tam-1;cont++){
        for(i=0;i<tam-1;i++){
            if(v[i] < v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
    /*printf("\nVETOR ordenado da matriz: ");
    for(i=0;i<tam;i++){
        printf("%d  ", v[i]); // verificar se o vetor esta recebendo todos os numeros da matriz
    }*/
    id = 0;
    printf("\n\n--MATRIZ ORDENADA--\n      ");
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            mat[i][j] = v[id];
            printf("%d  ", mat[i][j]);
            id++;
        }
        printf("\n      ");
    }
    return 0;
}
