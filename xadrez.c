#include <stdio.h>

//Recebe a quantidade de casas para mover e um char identintificador de peça. Realizando a chamada de funções (Recursividade) até a quantidade de casas para mover ser <= 0.
void moverPeca(int casasParaMover, char peca){
    if(casasParaMover <= 0)
        return;

    switch (peca)
    {
    case 't':
        printf("Direita.\n");
        moverPeca(casasParaMover-1, peca);
        break;
    case 'b':
        printf("Cima, Direita. \n");
        moverPeca(casasParaMover-1, peca);
        break;
    case 'r':
        printf("Esquerda.\n");
        moverPeca(casasParaMover-1, peca);
        break;
    default:
    printf("Opção inválida!\n");
        break;
    }
}


int main()
{
    const int movimentacaoTorre = 5;
    const int movimentacaoBispo = 5;
    const int movimentacaoRainha = 8;
    const int movimentacaoCavaloHorizontalOuVertical = 2;
    // Informe "e" ou "d" para movimentar para esquerda ou direita, respectivamente.
    const char movimentoCavaloPerpendicular = 'd';

    printf("------------------------------------------------------------- \n");
    printf("----------------------- Xadrez ------------------------------ \n");
    printf("------------------------------------------------------------- \n \n");

    printf("Movimentação Torre:\n \n");
    moverPeca(movimentacaoTorre, 't');

    printf("\n \nMovimentação Bispo:\n \n");
    moverPeca(movimentacaoBispo, 'b');

    printf("\n \nMovimentação Rainha:\n \n");
    moverPeca(movimentacaoRainha, 'r');

    printf("\n \nCavalo irá se movimentar um total de %d casas na vertical ou horizontal e 1 casa perpendicularmente. \n", movimentacaoCavaloHorizontalOuVertical);
    printf("Movimentação Cavalo:\n \n");

    //Movimentação padrão do cavalo.
    for (int cavalo = 0; cavalo < movimentacaoCavaloHorizontalOuVertical; cavalo++)
    {
        printf("Cavalo:");
        printf("Cima.\n");

        // Valida se já está na hora de mover perpendicular
        if (cavalo == (movimentacaoCavaloHorizontalOuVertical - 1))
        {
            int moverPerpendicular = 0;
            while (!moverPerpendicular)
            {
                printf("Cavalo:");
                switch (movimentoCavaloPerpendicular)
                {
                case 'e':
                    printf("Esquerda\n");
                    break;
                case 'd':
                    printf("Direita\n");
                    break;
                default:
                    printf("Opção inválida!\n");
                    break;
                }

                // Define como movido.
                moverPerpendicular = 1;
            }
        }
    };

    printf("\n---------------------------------------------------------------------------------- \n");
    printf("----------------------- Programa Encerrado! -------------------------------------- \n");
    printf("---------------------------------------------------------------------------------- \n \n");

    return 0;
}
