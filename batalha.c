#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "batalha.h"

void inicializarTabuleiro(char tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = '~';
}

void mostrarTabuleiro(char tabuleiro[TAM][TAM], int mostrarNavios) {
    printf("  ");
    for (int i = 0; i < TAM; i++)
        printf("%d ", i);
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == 'N' && !mostrarNavios)
                printf("~ ");
            else
                printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavios(char tabuleiro[TAM][TAM]) {
    int navios = 0;
    while (navios < NAVIOS) {
        int linha = rand() % TAM;
        int coluna = rand() % TAM;

        if (tabuleiro[linha][coluna] == '~') {
            tabuleiro[linha][coluna] = 'N';
            navios++;
        }
    }
}

int atirar(char tabuleiro[TAM][TAM], int linha, int coluna) {
    if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM)
        return -1;

    if (tabuleiro[linha][coluna] == 'N') {
        tabuleiro[linha][coluna] = 'X'; // Acertou
        return 1;
    } else if (tabuleiro[linha][coluna] == '~') {
        tabuleiro[linha][coluna] = 'O'; // Água
        return 0;
    }

    return -1; // Já atirou aqui
}
