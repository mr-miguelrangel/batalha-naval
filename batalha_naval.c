#include <stdio.h>
#include "Miguel_jogo.h"

int main(void) 
{
  char jogador_1[10][10], jogador_2[10][10], escondido_1[10][10], escondido_2[10][10];
  int opcao = 0, jogando = 1;

  tabuleiro_vazio(jogador_1);
  tabuleiro_vazio(jogador_2);
  tabuleiro_vazio(escondido_1);
  tabuleiro_vazio(escondido_2);

  imprimir_tabuleiros(jogador_1, jogador_2);

  while(opcao != 3)
  {
    menu();
    scanf("%d", &opcao);
    switch(opcao)
    {
      case 1:
        system("clear");
        imprimir_tabuleiro_unico(jogador_1);
        printf("Jogador 1, posicione seu porta-avioes (4 quadrados)\n");
        alocar_peca(jogador_1, 4);
      
        for (int i = 0; i < 2; i++)
        {
          system("clear");
          imprimir_tabuleiro_unico(jogador_1);
          printf("Jogador 1, posicione seu navio-tanque (3 quadrados)\n");
          alocar_peca(jogador_1, 3);
        }
      
        for (int i = 0; i < 3; i++)
        {
          system("clear");
          imprimir_tabuleiro_unico(jogador_1);
          printf("Jogador 1, posicione seu contratorpedeiro (2 quadrados)\n");
          alocar_peca(jogador_1, 2);
        }
      
        for (int i = 0; i < 4; i++)
        {
          system("clear");
          imprimir_tabuleiro_unico(jogador_1);
          printf("Jogador 1, posicione seu submarino (1 quadrado)\n");
          alocar_peca(jogador_1, 1);
        }
  
        system("clear");
        imprimir_tabuleiro_unico(jogador_2);
        printf("Jogador 2, posicione seu porta-avioes (4 quadrados)\n");
        alocar_peca(jogador_2, 4);
      
        for (int i = 0; i < 2; i++)
        {
          system("clear");
          imprimir_tabuleiro_unico(jogador_2);
          printf("Jogador 2, posicione seu navio-tanque (3 quadrados)\n");
          alocar_peca(jogador_2, 3);
        }
      
        for (int i = 0; i < 3; i++)
        {
          system("clear");
          imprimir_tabuleiro_unico(jogador_2);
          printf("Jogador 2, posicione seu contratorpedeiro (2 quadrados)\n");
          alocar_peca(jogador_2, 2);
        }
      
        for (int i = 0; i < 4; i++)
        {
          system("clear");
          imprimir_tabuleiro_unico(jogador_2);
          printf("Jogador 2, posicione seu submarino (1 quadrado)\n");
          alocar_peca(jogador_2, 1);
        }      
      break;
  
      case 2:
        imprimir_tabuleiros(escondido_1, escondido_2);

        do 
        {
          system("clear");
          imprimir_tabuleiros(escondido_1, escondido_2);
          jogada(jogador_2, 1, escondido_2);
          jogando = fim_de_jogo(escondido_2);
          if (jogando == 0)
          {
            printf("JOGADOR 1 VENCEU!\n");
          }
          else
          {
            system("clear");
            imprimir_tabuleiros(escondido_1, escondido_2);
            jogada(jogador_1, 2, escondido_1);
            jogando = fim_de_jogo(escondido_1);
            if (jogando == 0)
            {
              printf("JOGADOR 2 VENCEU!\n");
            }
          }
          
        } while (jogando == 1);
      
      break;    
    }
  }
}