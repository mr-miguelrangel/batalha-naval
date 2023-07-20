#include <stdio.h>
#include "Miguel_jogo.h"

void tabuleiro_vazio(char matriz[10][10])
{
    for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      matriz[i][j] = '^';
    }
  }
}

void imprimir_tabuleiros(char m1[10][10], char m2[10][10])
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%c ", m1[i][j]);
    }
    printf("   ");

    for (int k = 0; k < 10; k++)
    {
      printf("%c ", m2[i][k]);
    }

    printf("\n");
  }
}

void menu()
{
  printf("BATALHA NAVAL\n");
  printf("1 - Alocar navios\n");
  printf("2 - Jogar\n");
  printf("3 - Sair\n");
  printf("Selecione uma das opcoes: ");
}

void imprimir_tabuleiro_unico(char matriz[10][10])
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%c ", matriz[i][j]);
    }
    printf("\n");
  }
}

void alocar_peca(char tabuleiro[10][10], int tamanho)
{
  char posicao;
  int linha, coluna;
  int espaco_livre = 0;
  
  while(espaco_livre == 0)
  {
    printf("Digite v para posicionar sua embarcacao na vertical e h para posicionar na horizontal: ");
    scanf("%s", &posicao);
  
    printf("Digite as coordenadas em que proa do navio vai ficar.\n");
    printf("Linha (0 a 9): ");
    scanf("%d", &linha);
    printf("Coluna (0 a 9): ");
    scanf("%d", &coluna);

    if (linha < 10 && coluna < 10)
    {
      if (posicao == 'v')
      {
        for (int i = linha; i < linha + tamanho; i++)
        {
          if (tabuleiro[i][coluna] == '^' && i < 9 && i >= 0 && tabuleiro[i][coluna + 1] != '0' && tabuleiro[i][coluna - 1] != '0' && tabuleiro[i + 1][coluna] != '0' && tabuleiro[i - 1][coluna] != '0')
          {
            espaco_livre = 1;
          }
        }
      }

      else if (posicao == 'h')
      {
        for (int i = coluna; i < coluna + tamanho; i++)
        {
          if (tabuleiro[linha][i] == '^' && i < 9 && i >= 0 && tabuleiro[linha][i + 1] != '0' && tabuleiro[linha][i - 1] != '0' && tabuleiro[linha + 1][i] != '0' && tabuleiro[linha - 1][i] != '0')
          {
            espaco_livre = 1;
          }          
        }
      }
    }
  }

  if (posicao == 'v')
  {
    for (int i = linha; i < linha + tamanho; i++)
    {
      tabuleiro[i][coluna] = '0';
    }    
  }
  else if (posicao =='h')
  {
    for (int i = coluna; i < coluna + tamanho; i++)
    {
      tabuleiro[linha][i] = '0';
    }
  }
}

void jogada(char alvo[10][10], int jogador, char tela[10][10])
{
  int linha, coluna;
  
  printf("Jogador %d digite as coordenadas do seu alvo\n", jogador);
  printf("Linha (0 a 9): ");
  scanf("%d", &linha);
  printf("Coluna (0 a 9): ");
  scanf("%d", &coluna);

  if (alvo[linha][coluna] == '0')
  {
    tela[linha][coluna] = 'X';
  }
  else if (alvo[linha][coluna] == '^')
  {
    tela[linha][coluna] = ' ';
  }
}

int fim_de_jogo(char tela[10][10])
{
  int contador = 0;

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (tela[i][j] == 'X')
        contador++;
    }
  }

  // 20 É O TOTAL DE CASAS OCUPADAS PELAS EMBARCAÇÕES DE UM JOGADOR
  if (contador == 20)
    return 0;

  return 1; 
}