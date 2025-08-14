/*Fazer um jogo da velha usando funções*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 3
char tabuleiro[TAM][TAM];
void inicializarTabuleiro() {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}
void exibirTabuleiro() {
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < TAM - 1) printf("|");
        }
        printf("\n");
        if (i < TAM - 1) {
            printf("---+---+---\n");
        }
    }
}
int verificarVitoria() {
    // Verifica linhas
    for (int i = 0; i < TAM; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') {
            return 1; // Vitória
        }
    }
    // Verifica colunas
    for (int j = 0; j < TAM; j++) {
        if (tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[1][j] == tabuleiro[2][j] && tabuleiro[0][j] != ' ') {
            return 1; // Vitória
        }
    }
    // Verifica diagonais
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') {
        return 1; // Vitória
    }
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ') {
        return 1; // Vitória
    }
    return 0; // Sem vitória
}
int verificarEmpate() {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0; // Ainda há espaços vazios
            }
        }
    }
    return 1; // Empate
}
void jogar() {
    int linha, coluna, jogador = 0;
    char simbolo;
    while (1) {
        exibirTabuleiro();
        simbolo = (jogador % 2 == 0) ? 'X' : 'O';
        printf("Jogador %d (%c), escolha sua jogada (linha e coluna): ", jogador + 1, simbolo);
        scanf("%d %d", &linha, &coluna);
        linha--; // Ajusta para índice de matriz
        coluna--; // Ajusta para índice de matriz
        
        if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM || tabuleiro[linha][coluna] != ' ') {
            printf("Jogada inválida! Tente novamente.\n");
            continue;
        }
        
        tabuleiro[linha][coluna] = simbolo;
        
        if (verificarVitoria()) {
            exibirTabuleiro();
            printf("Jogador %d (%c) venceu!\n", jogador + 1, simbolo);
            break;
        }
        
        if (verificarEmpate()) {
            exibirTabuleiro();
            printf("Empate!\n");
            break;
        }
        
        jogador++;
    }
}
int main() {
    inicializarTabuleiro();
    jogar();
    return 0;
}