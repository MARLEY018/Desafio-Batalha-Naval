#ifndef BATALHA_H
#define BATALHA_H

#define TAM 5
#define NAVIOS 3

void inicializarTabuleiro(char tabuleiro[TAM][TAM]);
void mostrarTabuleiro(char tabuleiro[TAM][TAM], int mostrarNavios);
void posicionarNavios(char tabuleiro[TAM][TAM]);
int atirar(char tabuleiro[TAM][TAM], int linha, int coluna);

#endif
