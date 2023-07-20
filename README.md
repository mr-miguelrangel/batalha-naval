# Manipulação de matrizes em C com Batalha Naval

Projeto desonvolvido durante o curso "Lógica de programação" da Unifesp, ministrado pela professora Lilian Berton.

## Apresentação do problema
• Batalha naval é um jogo de dois jogadores, no qual os jogadores têm de adivinhar em que quadrados estão os navios do oponente.

• Antes do início do jogo, cada jogador coloca os seus navios nos quadros, alinhados horizontalmente ou verticalmente. O número de navios permitidos é igual para ambos jogadores e os navios não podem se sobrepor.

• Os tipos de navios são: porta-aviões (quatro quadrados), navios-tanque (três quadrados), contra torpedeiros (dois quadrados) e submarinos (um quadrado). Vale notar que os quadrados que compõem um navio devem estar conectados e em fila reta.

## Faça um jogo em C reproduzindo Batalha Naval

1) Utilize duas matrizes 10x10, uma para cada jogador.

2) Cada jogador deve usar 1 porta-aviões, 2 navios-tanque, 3 contratorpedeiros, 4 submarinos. Note que os navios não podem ficar sobrepostos nem fora da matriz.

3) A cada jogada leia uma posição da matriz (x,y) e imprima a matriz atualizada na tela com as posições ocultas e aquelas já marcadas, pode usar cores para diferenciar.

4) Os jogadores revezam as jogadas e o jogo encerra quando um dos jogadores derrubar todos os navios do oponente.

5) Faça um menu com switch-case e use funções:

   1 – alocar navios (para os jogadores marcarem as   posições de seus navios na matriz)

   2 – iniciar jogo (a lógica do jogo acontece)
   
   3 – sair do jogo