/**
 * 14) Faça um programa que leia uma matriz de tamanho 
 * 5 × 5. Calcule a soma dos elementos dessa matriz que 
 * pertencem à diagonal principal ou secundária. 
 * Calcule também a soma dos elementos que não 
 * pertencem a nenhuma das duas diagonais. Imprima na 
 * tela a diferença entre os dois valores.
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 130). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5 // tamanho da matriz

// procedimento para adicionar valores no array
// e somar os valores adicionados e retornar
int adicionar(int matriz[][SIZE], int soma)
{
   // variáveis
   int i, j;

   for ( i = 0; i < SIZE; i++)
   {
      for( j = 0; j < SIZE; j++)
      {
         // adiciona valores no array
         matriz[i][j] = 1 + rand() % 50;
         // soma os valores do array
         soma += matriz[i][j];
      } // end coluna
   } // end for linha

   // retorna o valor da soma
   return soma;
} // end adicionar

// diagonal princial
int diagonalPrin(int matriz[][SIZE], int soma)
{
   // variáveis
   int i, j;
   int somaPrin = 0;

   // loop para diagonal principaç
   for ( i = 0; i < SIZE; i++)
   {
      for ( j = 0; j < SIZE; j++)
      {
         // se i igual a j
         if (i == j) // se verdade
         {
            // exiba
            printf("%4d", matriz[i][j]);
            // e some os valores
            somaPrin += matriz[i][j];
         } // end if         
      } // end for coluna
   } // end for coluna
   printf("\nSomaPrincipal = %4d\n", somaPrin);
   return soma - somaPrin;
} // end diagonal principal

// diagonal secundária
int diagonalSecun(int matriz[][SIZE], int soma)
{
   // variável
   int i;
   int somaSecun = 0;

   for ( i = 0; i < SIZE; i++)
   {
      printf("%4d", matriz[i][SIZE - 1 - i]);
      somaSecun += matriz[i][SIZE - 1 - i];
   }
   printf("\nSomaSecundario = %4d\n", somaSecun);
   return soma - somaSecun;
} // end diagonal secundária

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
   // array
   int matriz[SIZE][SIZE];
   // variável
   int soma = 0;
   int total_matriz = 0;

   srand(time(NULL)); // semrente para rand()

   // soma recebe o valor total dos
   // elementos do array
   soma = adicionar(matriz, soma); // adiciona valores
   total_matriz = soma;

   printf("\nmatriz:\n"); // cabeçalho
   exibir(matriz); // exibe matriz
   printf("\nTotal da matriz = %d\n", soma);

   printf("\ndiagonal principa:\n");
   // soma recebe o valor retornado da função
   soma = diagonalPrin(matriz, soma);
   // exibe a soma dos valores da matriz
   // sem os valores da diagonal principal
   // printf("matriz sem principal = %d\n", soma);

   printf("\ndiagonal secundaria:\n");
   // soma recebe o valor retornado da
   // diagonalSecundária
   soma = diagonalSecun(matriz, soma);
   // exibe a soma dos valores da matriz
   // sem os valores da diagonal secundária
   // printf("matriz sem secundaria = %d\n", soma);

   // resultado
   printf("\nTotal das diagonais\nprincipal e secundaria: %d\n", total_matriz - soma);

   printf("\nTotal da matriz sem os valores da\n"
            "diagonal principal e secundaria: %d\n", soma);

   printf("\n\n");
   return 0;
} // end main