/**
 * MMM
 * Com criar e imprimir o conteúdo 
 * de uma matriz (array bidimencional)
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // matrizes de inteiros 3 por 3 com 9 elementos
   int matriz1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   
   // cria e inicializa uma matriz 3 por 4 de caracteres
   char alfabeto[5][6] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
   
   int matriz3[3][3];

   // variáveis
   int i, j;

   // exibe os valores adicionados
   printf("\nMatriz = \n{");
   // loop para linha da matriz
   for ( i = 0; i < 3; i++)
   {  // loop para coluna da matriz
      for ( j = 0; j < 3; j++)
      {
         // exibe os elementos da matriz
         printf("%d ", matriz1[i][j]);
      } // end for colunas
      printf("\n");
   } // end for linhas
   printf(" };\n");
   
   // exibe os valores adicionados
   printf("\nMatriz = \n{");
   // loop para linha da matriz
   for ( i = 0; i < 5; i++)
   {  // loop para coluna da matriz
      for ( j = 0; j < 6; j++)
      {
         // exibe os elementos da matriz
         printf("%c ", alfabeto[i][j]);
      } // end for colunas
      printf("\n");
   } // end for linhas
   printf(" };\n");
   
   // loop para ler valores do teclado
   for ( i = 0; i < 3; i++) // linha
      for ( j = 0; j < 3; j++) { // coluna
         // entrada de dados
         printf("Digite um valor para posicao %d %d: ", i, j);
         // adiciona valores a matriz
         scanf("%d", &matriz3[i][j]);
      } // end for j      
   
   // exibe os valores adicionados
   printf("\nMatriz = \n{");
   // loop para linha da matriz
   for ( i = 0; i < 3; i++)
   {  // loop para coluna da matriz
      for ( j = 0; j < 3; j++)
      {
         // exibe os elementos da matriz
         printf("%d ", matriz3[i][j]);
      } // end for colunas
      printf("\n");
   } // end for linhas
   printf(" };\n");
   
   printf("\n\n");
   return 0;
} // end m