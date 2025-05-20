#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "batalha.h"

int main() {
    char tabuleiro[TAM][TAM];
    int linha, coluna, acertos = 0;

    srand(time(NULL));
    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);

    printf("=== BATALHA NAVAL ===\n");

    while (acertos < NAVIOS) {
        mostrarTabuleiro(tabuleiro, 0);
        printf("\nDigite a linha e a coluna para atirar (ex: 2 3): ");
        scanf("%d %d", &linha, &coluna);

        int resultado = atirar(tabuleiro, linha, coluna);

        if (resultado == 1) {
            printf("🎯 Acertou!\n");
            acertos++;
        } else if (resultado == 0) {
            printf("💦 Água!\n");
        } else {
            printf("❌ Posição inválida ou já atacada.\n");
        }
    }

    printf("\n🎉 Todos os navios foram destruídos!\n");
    mostrarTabuleiro(tabuleiro, 1);

    return 0;
}
