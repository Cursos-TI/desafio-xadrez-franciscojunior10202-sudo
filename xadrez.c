#include <stdio.h>

// ===============================
// Desafio Final: Movimentos Complexos do Xadrez
// Autor: Junior
// Objetivo: Simular Torre, Bispo, Rainha (recursão) e Cavalo (loops complexos)
// ===============================

// -------------------------------
// Torre - recursividade
// -------------------------------
void torre(int casas, int passo) {
    if (passo > casas) return; // caso base
    printf("Direita (%d)\n", passo);
    torre(casas, passo + 1);   // chamada recursiva
}

// -------------------------------
// Bispo - recursividade + loops aninhados
// -------------------------------
void bispo(int casas, int passo) {
    if (passo > casas) return;

    // loops aninhados para simular Cima + Direita
    for (int v = 1; v <= 1; v++) {
        for (int h = 1; h <= 1; h++) {
            printf("Cima, Direita (%d)\n", passo);
        }
    }

    bispo(casas, passo + 1);
}

// -------------------------------
// Rainha - recursividade
// -------------------------------
void rainha(int casas, int passo) {
    if (passo > casas) return;
    printf("Esquerda (%d)\n", passo);
    rainha(casas, passo + 1);
}

// -------------------------------
// Cavalo - loops complexos
// Movimento: 2 casas para cima e 1 para a direita
// -------------------------------
void cavalo(int movimentosCima, int movimentosDireita) {
    for (int i = 1, j = movimentosCima; i <= movimentosCima; i++, j--) {
        printf("Cima (%d)\n", i);

        // Loop interno: controla a parte horizontal
        for (int k = 1; k <= movimentosDireita; k++) {
            if (i < movimentosCima) continue; // só anda pra direita depois de subir 2
            printf("Direita (%d)\n", k);
            break; // o cavalo só anda 1 pra direita
        }
    }
}

// -------------------------------
// Programa Principal
// -------------------------------
int main() {
    // Variáveis de controle
    int casasTorre = 5;     // número de casas que a Torre vai andar
    int casasBispo = 5;     // número de casas que o Bispo vai andar
    int casasRainha = 8;    // número de casas que a Rainha vai andar
    int movimentosCima = 2; // Cavalo: passos para cima
    int movimentosDireita = 1; // Cavalo: passos para a direita

    // Torre
    printf("=== Movimento da Torre ===\n");
    torre(casasTorre, 1);

    // Bispo
    printf("\n=== Movimento do Bispo ===\n");
    bispo(casasBispo, 1);

    // Rainha
    printf("\n=== Movimento da Rainha ===\n");
    rainha(casasRainha, 1);

    // Cavalo
    printf("\n=== Movimento do Cavalo ===\n");
    cavalo(movimentosCima, movimentosDireita);

    printf("\n=== Fim da Simulacao ===\n");
    return 0;
}
