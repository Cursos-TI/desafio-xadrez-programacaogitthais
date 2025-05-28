#include <stdio.h>

// -------------------------
// Função Recursiva: TORRE
// -------------------------
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// ----------------------------------
// Função Recursiva + Loops: BISPO
// ----------------------------------
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1); // chamada recursiva
}

void moverBispoComLoops(int casasVerticais, int casasHorizontais) {
    for (int i = 0; i < casasVerticais; i++) { // movimento vertical
        for (int j = 0; j < casasHorizontais; j++) { // movimento horizontal
            printf("Diagonal Direita\n");
        }
    }
}

// -------------------------------
// Função Recursiva: RAINHA
// -------------------------------
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ------------------------------------------
// Movimento Complexo do CAVALO com loops
// ------------------------------------------
void moverCavaloEmL() {
    int movimentosVerticais = 2; // duas casas para cima
    int movimentosHorizontais = 1; // uma casa para a direita

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentosVerticais; i++) {
        if (i == 1) {
            continue; // ignora a segunda casa como exemplo de controle de fluxo
        }
        printf("Cima\n");

        for (int j = 0; j < movimentosHorizontais + 1; j++) {
            if (j != 1) continue; // só executa se j == 1
            printf("Direita\n");
            break; // após uma direita, encerramos
        }
    }
}

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 3;
    int casasRainha = 4;

    // -------------------------------
    // Movimento da TORRE (Recursivo)
    // -------------------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // -------------------------------
    // Movimento do BISPO (Recursivo)
    // -------------------------------
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    // -------------------------------
    // Movimento do BISPO (Loops)
    // -------------------------------
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(2, 2);

    // ----------------------------------
    // Movimento da RAINHA (Recursivo)
    // ----------------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ----------------------------------------
    // Movimento do CAVALO (Loops Complexos)
    // ----------------------------------------
    printf("\n");
    moverCavaloEmL();

    return 0;
}

