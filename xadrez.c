#include <stdio.h>
//Nivel Aventureiro

void moverTorre(int casa)
{
    if(casa > 0){
        printf("Moveu-se para direita %d\n", casa);
        moverTorre(casa - 1);

    }
}

void moverBispo(int casa)
{
    if(casa > 0){
        printf("Moveu-se para cima %d casas\n", casa);
        moverBispo(casa - 1);
    }
}

void moverbispo(int lado)
{
    if(lado > 0){
        printf("O Bispo moveu-se para o lado %d casas\n", lado);
        moverbispo(lado - 1);
    }
}

void moverRainha(int casa)
{
    if(casa > 0){
        printf("A Rainha moveu-se %d casas\n", casa);
        moverRainha(casa - 1);
    }
}
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
            printf("Movimento da Torre\n");
            moverTorre(5);

            break;
        case 2:
            printf("Movimento do Bispo\n");
            //Move-se na diagonal: O bispo se move pra cima,direita 5 casas.Feito
             for (int i = 0; i < 1; i++){
                    moverBispo(3);
               }

            for (int j = 0; j < 1; j++) {
                    moverbispo(2);
                }
            break;
        case 3:
            //A Rainha pode se mover para qualquer lado. 8 casas a esquerda.
            printf("MOvimento da Rainha\n");
            moverRainha(8);

            break;
        case 4:
            // O Cavalo faz 3 movimentos em L (2 para cima, 1 para direita)
            printf("Movimento do Cavalo\n");
            for (int i = 1; i <= 2; i++){
                for(int j = 1; j <= 2; j++){
                    if(j == 1){
                        printf("Para cima\n");
                        continue;
                    }
                }
                if(i == 2){
                        printf("Para direita\n");
                        break;
                }
            }
            break;
        default:
            printf("Jogo fora das regras tente de novo e va ler o manual\n");

    }
    return 0;
}



