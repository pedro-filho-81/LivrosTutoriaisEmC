/**
 * Exemplo
 * Jogo da velha com funções e procedimentos
 * Escrito por Wagner Gaspar
 * em março de 2021
 * 14/11/2024
 */
#include <stdio.h>
#include <stdlib.h>

// matriz global
char jogo[3][3];

// variáveis globais
int linha, coluna;

// PROTÓTIPOS DE FUNÇÕES
void inicializaMatriz();
void imprimir(); // exibe o tabuleiro
int ganhouPorLinha(int l, char c);
int ganhorPorLinhas(char c);

int main()
{
   // chama a função do tabuleiro
   imprimir();

   printf("\n\n");
   return 0;
} // end main

// FUNÇÕES E PROCEDImENTOS
/**
 * MMM
 * procedimento para inicializa a matriz 
 * com espaços espaços em branco
 */
void inicializaMatriz()
{
   // loop for para linha
   for(linha = 0; linha < 3; linha++) {
      // loop for para coluna
      for(coluna = 0; coluna < 3; coluna++)
         // inicializa Matriz coM uM espaço 
         jogo[linha][coluna] = ' ';
   } // end for linha
} // end inicializa matriz

/**
 * Procedimento para imprimir o tabuleiro
 * do jogo da velha na tela
 */
void imprimir()
{
   // imprime os índices das colunas
   printf("\n\n\t 0   1   2\n\n");

   // loop para linha e coluna
   for ( linha = 0; linha < 3; linha++) {
      for ( coluna = 0; coluna < 3; coluna++) {
         if (coluna == 0)
            printf("\t"); // exibe uma tabulação

         printf(" %c ", jogo[linha][coluna]); // exibe o caractere da posição 1  

         // se não for a última posição da linha
         if (coluna < 2)
            // exiba uma barra da divisão da coluna
            printf(" | ");

         // se for a última coluna
         if (coluna == 2)
            // exiba os índices da linha à direita
            printf("   %d", linha);
      } // end for coluna 

      printf("\n"); // pula linha

      // se linha menor de 2
      if (linha < 2)
         // exibe as linhas tracejadas
         printf("\t------------\n");
      
   } // end for linha
         
} // end imprimir

// função ganhou por linha
/**
 * função para verificar a vitória do jogador c
 * na linha 1
 * retorna 1 se ganhou
 * retorna 0 se perdeu
 */
int ganhouPorLinha(int l, char c) 
{
   // se os caracteres na linha for do jogador c
   if(jogo[l][0] == c && jogo[l][1] == c && jogo[l][2])
      return 1; // jogador ganhou
   else // se não
      return 0;  // jogador ainda não ganhou 
} // end ganhou por linha

/**
 * Função para verificar a vitória do jogador c
 * nas linhas
 *    1 - ganhou
 *    0 - não ganhou
 */
int ganhouPorLinhas(char c)
{
   // variável
   int ganhou;

   // loop for para verificar se ganhou nas linhas
   for (linha = 0; linha < 3; linha++)
   {
      // chama a função ganhouPorLinh
      // e atribui o valor a variável ganhou
      // se a soMa igual a 3 jogador c ganhou
      ganhou += ganhouPorLinha(linha, c);
   }
   // retorne ganhou
   return ganhou;
} // end ganhou por linhas

/**
 * Função para verificar vitória do jogador j
 * na coluna c
 *       1 - ganhou
 *       0 - não ganhou ainda 
 */
int ganhouPorColuna(int c, char j)
{
   // verifica se todos os caracteres da coluna foreM
   // do jogador j
   if(jogo[0][c] == j && jogo[1][c] == j && jogo[2][c])
      return 1; // retorne 1, j venceu
   else // se não
      return 0; // retorne 0, j não venceu ainda
} // end ganhou por coluna

/**
 * Função que verifica a vitória por coluna do jugador j
 * por colunas
 *       1 - ganhou
 *       2 - não ganhou ainda
 */
int ganhouPorColunas()