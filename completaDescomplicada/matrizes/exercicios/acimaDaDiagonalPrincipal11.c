/**
 * 11) Faça um programa que leia uma matriz de tamanho 
 * 5 × 5. Calcule e imprima a soma dos elementos dessa 
 * matriz que estão acima da diagonal principal.
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 130). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5 // constante tamanho da matriz

// procedimento para adicionar valores
// na matriz
void adicionar(int matriz[][SIZE])
{
   // variáveis
   int i, j;

   // loop para adicionar valores na matriz
   for ( i = 0; i < SIZE; i++)
   {
      for ( j = 0; j < SIZE; j++)
      {
         // matriz recebe valores entre 1 e 50
         matriz[i][j] = 1 + rand() % 50;
      } // end for j      
   } // end for i
} // end adicionar

// procedimento para achar e calcular a soma
// dos valores acima da diagonal principal
void acimaDaDiagonal(int matriz[][SIZE])
{
   // variáveis
   int i, j; 
   int soma = 0;

   // loop para percorrer a matriz
   for ( i = 0; i < SIZE; i++)
   {
      for(j = 0; j < SIZE; j++)
         // verificar se linha(i) 
         // é menor que a coluna(j)
         if(i < j) { // se verdade
            // imprima os valores acima da
            // diagonal principal
            printf("%4d", matriz[i][j]);
            // e some esses valores
            soma += matriz[i][j];
         } // end if
   } // end for linha
   // após imprima a soma
   printf("\nSoma = %d\n", soma);
} // end acima da diagonal

// procedimento para achar a diagonal principal
void diagonalPrincipal(int matriz[][SIZE])
{
   // variáveis
   int i;
   int soma = 0;

   // loop para achar a diagonao principal
   for ( i = 0; i < SIZE; i++)
   {
      // verifica se linha igual a coluna
      if (i == i) // se verdade
      {
         // imprime os valores
         printf("%4d", matriz[i][i]);
         // e soma os mesmos
         soma += matriz[i][i];
      } // end if       
   } // end for
   // exibe a soma
   printf("\nSoma = %d\n", soma);
} // end diagonal principal

// procedimento para exibir valores da matriz 
void exibir(int matriz[][SIZE])
{
   // variáveis
   int i, j;

   // cabeçalho
   printf("Colunas:     ");
   // loop para exibir os números da coluna
   for ( i = 0; i < SIZE; i++)
   {
      // exibe os números da coluna
      printf("%4d", i + 1);
   } // end colunas
   // pula linha
   printf("\n");
   
   // loop para adicionar valores na matriz
   for ( i = 0; i < SIZE; i++)
   {
      // cabeçalho das linhas
      printf("%s => %3d:", "Linha", i + 1);

      // loop para as colunas
      for ( j = 0; j < SIZE; j++)
      {
         // exibe os valores da matriz
         printf("%4d", matriz[i][j]);
      } // end for j
      // pula linha
      printf("\n");      
   } // end for i
} // end adicionar

int main()
{
   // matriz
   int matriz[SIZE][SIZE];

   // chama a função
   adicionar(matriz);
   // cabeçalho
   printf("%s\n", "Matriz:");
   // chama a função para exibir a matriz
   exibir(matriz);
   // cabeçalho
   printf("%s\n", "Diagonal principal:");
   // chama o procedimento
   diagonalPrincipal(matriz);
   // cabeçalho
   printf("Acima da diagonal principal:\n");
   // chama a função para exibir valores
   acimaDaDiagonal(matriz);

   printf("\n\n");
   return 0;
} // end main