#ifndef JOGO_H
#define JOGO_H

void tabuleiro_vazio(char matriz[10][10]);
void imprimir_tabuleiros(char m1[10][10], char m2[10][10]);
void menu();
void imprimir_tabuleiro_unico(char matriz[10][10]);
void alocar_peca(char tabuleiro[10][10], int tamanho);
void jogada(char alvo[10][10], int jogador, char tela[10][10]);
int fim_de_jogo(char tela[10][10]);

#endif