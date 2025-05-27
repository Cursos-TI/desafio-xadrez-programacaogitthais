#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça irá se mover
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // -------------------------------
    // Movimento da TORRE (for loop)
    // -------------------------------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Movimento do BISPO (while loop)
    // -------------------------------
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ----------------------------------
    // Movimento da RAINHA (do-while loop)
    // ----------------------------------
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentoRainha);

    // --------------------------------------
    // Movimento do CAVALO (loops aninhados)
    // --------------------------------------
    printf("\nMovimento do Cavalo:\n");

    // Definindo quantas casas o cavalo vai se mover
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // Loop externo (for) para mover para baixo
    for (int x = 0; x < movimentosBaixo; x++) {
        printf("Baixo\n");

        // Loop interno (while) dentro do for
        int y = 0;
        while (y < 1) {
            // Simples verificação dentro do loop aninhado (pode ser expandida se necessário)
            y++;
        }
    }

    // Movimento final do "L": uma casa para a esquerda
    int k = 0;
    while (k < movimentosEsquerda) {
        printf("Esquerda\n");
        k++;
    }

    return 0;
}

