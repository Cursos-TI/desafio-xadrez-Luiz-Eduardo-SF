#include <stdio.h>

// Função recursiva para mover o Bispo
void moverBispo(int casas) {
    if (casas == 0) return; // Condição de parada da recursão
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return; // Condição de parada da recursão
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return; // Condição de parada da recursão
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para mover o Cavalo com loops aninhados e condições múltiplas
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
        if (i == 1) break; // Sai do loop após 2 movimentos para cima
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

int main() {
    // Movimentação do Bispo (5 casas na diagonal direita para cima)
    printf("Movimentação do Bispo:\n");
    moverBispo(5);

    // Movimentação da Torre (5 casas para a direita)
    printf("\nMovimentação da Torre:\n");
    moverTorre(5);

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimentação da Rainha:\n");
    moverRainha(8);

    // Movimentação do Cavalo (1 vez em L para cima à direita)
    printf("\nMovimentação do Cavalo:\n");
    moverCavalo();

    return 0;
}