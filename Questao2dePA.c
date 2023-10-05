#include <stdio.h>

int main()
{
    int mat[2][3] = {{1, 9, 7},{2, 3, 3}};
    int i, j, cont, aux, id, num=0;
    int v[6];
    printf("--MATRIZ INICIAL--\n   ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            v[id] = mat[i][j];
            printf("%d  ", mat[i][j]);
            id++;
        }
        printf("\n   ");
    }
    /*
    1,9,7,2,3,3
    9,1,7,2,3,3    
    9,7,1,2,3,3
    9,7,2,1,3,3
    9,7,2,3,1,3
    9,7,2,3,3,1
    ...
    ...
    9,7,3,2,3,1
    9,7,3,3,2,1
    ...
    */
    for(cont=0;cont<5;cont++){
        for(id=0;id<5;id++){
            if(v[id]<v[id+1]){
                aux=v[id];
                v[id]=v[id+1];
                v[id+1]=aux;
            }
        }
    }
    printf("\nVETOR da matriz: ");
    for(id=0;id<6;id++){
        printf("%d  ", v[id]); // verificar se o vetor esta recebendo todos os numeros da matriz
    }
    printf("\n\n--MATRIZ ORDENADA--\n   ");
    id=0;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            mat[i][j]= v[id];
            printf("%d  ", mat[i][j]);
            id++;
        }
        printf("\n   ");
    }

    return 0;
}
