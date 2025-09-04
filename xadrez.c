#include <stdio.h>

int main() {
    // ===============================
    // Desafio: Movimentando Peças do Xadrez
    // Autor: junior
    // Objetivo: Simular movimentos da Torre, Bispo e Rainha
    // usando for, while e do-while
    // ===============================

    // Variáveis de controle
    int i;               // contador para laços
    int casasTorre = 5;  // número de casas que a Torre vai andar
    int casasBispo = 5;  // número de casas que o Bispo vai andar
    int casasRainha = 8; // número de casas que a Rainha vai andar

    // -------------------------------
    // Torre - usando FOR
    // Movimento: 5 casas para a direita
    // -------------------------------
    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    // -------------------------------
    // Bispo - usando WHILE
    // Movimento: 5 casas na diagonal (Cima + Direita)
    // -------------------------------
    printf("\n=== Movimento do Bispo ===\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    // -------------------------------
    // Rainha - usando DO-WHILE
    // Movimento: 8 casas para a esquerda
    // -------------------------------
    printf("\n=== Movimento da Rainha ===\n");
    i = 1;
    do {
        printf("Esquerda (%d)\n", i);
        i++;
    } while (i <= casasRainha);

    printf("\n=== Fim da Simulacao ===\n");

    return 0;
}
