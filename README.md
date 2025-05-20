# 🚢 Desafio Batalha Naval em C

## 🎯 Objetivo

Simular um jogo simples de Batalha Naval em C, com um tabuleiro 5x5, onde o jogador ataca posições até destruir todos os navios do computador.

## 🧠 Regras

- O computador esconde 3 navios em posições aleatórias.
- O jogador tenta acertar os navios informando linha e coluna.
- O jogo termina quando os 3 navios forem destruídos.

## 🗂 Estrutura

- `main.c`: fluxo principal do jogo
- `batalha.c` / `batalha.h`: funções para controlar tabuleiro, tiro e navios

## 💻 Compilação e Execução

```bash
gcc main.c batalha.c -o batalha
./batalha

