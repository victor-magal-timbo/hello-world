#include <stdio.h>

int main()
{
    int coleta[7], consumo[7];
    int i, saldo;
    for(i=0;i<7;i++){
        printf("Digite a coleta de agua do dia %d:", i+1);
        scanf("%d", &coleta[i]);
    }
    for(i=0;i<7;i++){
        printf("Digite o consumo de agua do dia %d:", i+1);
        scanf("%d", &consumo[i]);
    }
    for(i=0;i<7;i++){
        saldo += coleta[i]-consumo[i];
        if(saldo < 0){
            printf("\nAviso! No dia %d, a agua vai acabar.\n", i+1);
            break;
        }
    }
    if(saldo > 0){
        printf("\nParabens! A agua sera suficiente.\n");
    }
    return 0;
}
