#include <stdio.h>
//Nivel Aventureiro

int main()
{
    int i = 1, menu, j;

    printf("###Menu de opcoes do jogo###\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &menu);

    switch(menu){
        case 1:
            //Torre: Move-se em linha reta horizontalmente ou verticalmente. Torre cinco casas para a direita.
            while(i <= 5){
                printf("Moveu-se %d horizontalmente\n", i);
                i++;
            }
            break;
        case 2:
            //Move-se na diagonal: O bispo se move pra cima,direita 5 casas.
            do{
                printf("O Bispo moveu-se %d para cima e a direita\n", i);
                i++;
            }while(i <= 5);
            break;
        case 3:
            //A Rainha pode se mover para qualquer lado. 8 casas a esquerda.
            for(int i = 1;i <= 8; i++){
                printf("A rainha moveu-se %d para a esquerda\n", i);
            }
            break;
        case 4:
            // O Cavalo faz 3 movimentos em L (2 para baixo, 1 para esquerda)
            for (int i = 1; i <= 1; i++){
                int j = 1;
                while(j <= 2){
                    printf("O cavalo moveu-se %d casa para baixo\n", j);
                    j++;
                }
                printf("O cavalo moveu-se 1 casa para o lado\n");
            }
            break;
        default:
            printf("Jogo fora das regras tente de novo e va ler o manual\n");

    }

    return 0;


}
