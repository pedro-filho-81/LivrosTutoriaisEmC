/**
 * Dado uMa matriz 4 x 4 faça um programa que diga se
 * a matriz é um quadrado mágico ou não.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4

void diagoPrincipal(int matriz[][TAM])
{
   int soma = 0, l;

   for(l = 0; l < TAM; l++)
   {
         // soma a diagonal principal
         soma += matriz[l][l]; // 
   } // end for l
   printf("Diagonal principal: %d\n", soma);
} // end diagonal principal

void diagoSecundaria(int matriz[][TAM])
{
   int soma = 0, l;

   for(l = 0; l < TAM; l++)
   {
         // soma a diagonal secundária
         soma += matriz[l][TAM - 1 - l]; // 
   } // end for l
   printf("Diagonal secundaria: %d\n", soma);
} // end diagonal principal

// soma linhas
void somaLinhas(int matriz[][TAM])
{
   int soma = 0;
   int l, c;

   // loop para somar as linhas
   for(l = 0; l < TAM; l++)
   {
      for(c = 0; c < TAM; c++)
      {
         soma += matriz[l][c];
      } // end for c
      printf("A soma da linha %d eh: %d\n", l, soma);
      soma = 0; // inicializa a soma
   } // end for l
} // end soma linhas

// soma colunas
void somaColunas(int matriz[][TAM])
{
   int soma = 0;
   int l, c;

   // loop para somar as linhas
   for(c = 0; c < TAM; c++)
   {
      for(l = 0; l < TAM; l++)
      {
         soma += matriz[l][c];
      } // end for l
      printf("A soma da coluna %d eh: %d\n", c, soma);
      soma = 0; // inicializa a soma
   } // end for c
} // end soma linhas

// function exibir
void exibe(int matriz[][TAM])
{
   int i, j;

   printf("Colunas =>");
   for(int cl = 0; cl < TAM; cl++)
      printf("%5d", cl);
   printf("\n          ");
   for(int ast = 0; ast < TAM; ast++)
      printf("%5c", '*');
   printf("\n");
   for ( i = 0; i < TAM; i++)
   {
      printf("Linha => %d", i);
      for ( j = 0; j < TAM; j++)
      {
         printf("%5d", matriz[i][j]);
      } // end for j
      printf("\n");
   } // end for i 
} // end print

int main()
{
   // variáveis
   // int l, c, soma, total = 0;

   // matriz
   int matriz[TAM][TAM] = {16, 3, 2, 13, 5, 10, 11, 8, 9, 6, 7, 12, 4, 15, 14, 1};

   printf("\nQuadrado magico:\n");
   exibe(matriz);

   // exibir
   printf("\nSoma da diagonal principal:\n");
   diagoPrincipal(matriz); 
   printf("Soma da diagonal secundaria:\n");
   diagoSecundaria(matriz);
   printf("\nSoma das linhas:\n");
   somaLinhas(matriz);
   printf("\nSoma das colunas:\n");
   somaColunas(matriz);

   printf("\n");
   return 0;
} // end main