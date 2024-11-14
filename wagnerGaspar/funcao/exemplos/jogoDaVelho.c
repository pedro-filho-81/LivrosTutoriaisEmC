/**
 * Exemplo
 * Jogo da velha com funções e procedimentos
 * 14/11/2024
 */
#include <stdio.h>
#include <stdlib.h>

// matriz
char jogo[3][3];

// variáveis globais
int linha, coluna;

// PROTÓTIPOS DE FUNÇÕES
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
 * Procedimento para imprimir o tabuleiro na tela
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

      printf("\n") ; // pula linha

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
   if(jogo[l][0] == c && jogo[l][1] == c && jogo[l][2])
      return 1;
   else
      return 0;
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

   // loop for para verificar se ganhou na linha
   for (linha = 0; linha < 3; linha++)
   {
      // chama a função ganhouPorLinh
      // e atribui o valor a variável ganhou
      ganhou += ganhouPorLinha(linha, c)
   }
   // retorne ganhou
   return ganhou;
} // end ganhou por linhas