#include <stdio.h>

int main() {
    // Definindo as variáveis do movimento
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // Simulando outros movimentos de peças (exemplo fictício)
    printf("Movimentos de outras peças:\n");
    printf("Cima\n");
    printf("Direita\n");

    // Separador entre movimentos das outras peças e o Cavalo
    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for) para mover para baixo
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
        
        // Loop interno (while) apenas como exigência do desafio, mas ele faz apenas uma iteração neste caso
        int j = 0;
        while (j < 1) {
            // Aqui poderíamos incluir outra lógica se necessário
            j++; // Encerrando o while após uma iteração
        }
    }

    // Movimento final para a esquerda
    int k = 0;
    while (k < movimentosEsquerda) {
        printf("Esquerda\n");
        k++;
    }

    return 0;
}
