#include <stdio.h>

int main()
{
    int num, soma, maior, r_sum, r_maior;
    int i, cont1, cont2, rep;
    for(i=0;i<2;i++){
        maior = 0;
        soma = 0;
        rep = 0; //Dependendo da interpretacao da questao essa variavel eh necessaria ou nao
        do{
            printf("Jogador 1, digite um numero (Se quiser parar digite 0): ");
            scanf("%d", &num);
            if(num > maior){
                maior = num;
            }
            soma += num;
            cont1++;
            rep++; //variavel para subtrair os pontos no contador q o jogador ganharia se acertasse
        }while(num != 0);
        printf("Qual eh a soma da sequencia dita? ");
        scanf("%d", &r_sum);
        printf("Qual eh o maior numero dito? ");
        scanf("%d", &r_maior);
        if(r_sum == soma && r_maior == maior){
            cont1--;
        }else{ //para zerar nao eh necessaria a variavel rep, deve somente atribuir 0 para o contador
            cont1 -= rep; //subtraindo os pontos no contador
        }
        maior = 0;
        soma = 0;
        rep = 0; //Dependendo da interpretacao da questao essa variavel eh necessaria ou nao
        do{
            printf("Jogador 2, digite um numero (Se quiser parar digite 0): ");
            scanf("%d", &num);
            if(num > maior){
                maior = num;
            }
            soma += num;
            cont2++;
            rep++; //variavel para subtrair os pontos no contador q o jogador ganharia se acertasse
        }while(num != 0);
        printf("Qual eh a soma da sequencia dita? ");
        scanf("%d", &r_sum);
        printf("Qual eh o maior numero dito? ");
        scanf("%d", &r_maior);
        if(r_sum == soma && r_maior == maior){
            cont2--;
        }else{ //para zerar nao eh necessaria a variavel rep, deve somente atribuir 0 para o contador
            cont2 -= rep; // subtraindo os pontos no contador
        }
    }
    if(cont1 > cont2){
        printf("O jogador 1 conseguiu uma pontuacao maior.\n");
    }
    else{
        if(cont1 < cont2){
            printf("O jogador 2 conseguiu uma pontuacao maior.\n");
        }
        else{
            printf("Empate.\n");
        }
    }
    return 0;
}
