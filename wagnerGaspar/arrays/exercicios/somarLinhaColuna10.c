/**
 * Criar um prigrama que preencha uma matriz 5 x 10
 * com números inteiros. Em seguida:
 * a) somar cada linha e colocar o resultado em um vetor
 * b) somar cada coluna e armazenar o resultado em um vetor
 * c) Imprimir a matriz com as somas das linhas e das colunar
 * 26/11/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 5
#define COLUmN 10

// function add
void add(int matriz[ROW][COLUmN])
{
   int i, j;

   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         matriz[i][j] = 1 + rand() % 100;
      } // end for j
   } // end for i   
} // end add

// soma colunas
void somaColunas(int matriz[][COLUmN], int vetor[])
{
   // variável
   int soma;

   for (int i = 0; i < COLUmN; i++)
   {
      soma = 0;
      for (int j = 0; j < ROW; j++)
      {
         soma += matriz[j][i];
      } // end for linha
      vetor[i] = soma;
   } // end for colunas
} // end somaColunas

// function somaLinhas
void somaLinhas(int matriz[][COLUmN], int vetor[])
{
   // vriável
   int soma;

   for (int i = 0; i < ROW; i++)
   {
      soma = 0;
      for (int j = 0; j < COLUmN; j++)
      {
         soma += matriz[i][j];
      } // end coluna
      vetor[i] = soma;
   } // end linha
} // end somaLinhas

// printVetorLinhas
void printVetorLinhas(int vetor[])
{
   for (int j = 0; j < ROW; j++)
   {
      printf("Linha %d valor %3d\n", j, vetor[j]);
   }
} // end printVetorColuna

// function printVetor
void printVetorColuna(int vetor[])
{
   for (int j = 0; j < COLUmN; j++)
   {
      printf("Coluna %d valor %3d\n", j, vetor[j]);
   }
} // end printVetorColuna

// function exibir
void printMatriz(int matriz[ROW][COLUmN])
{
   int i, j;

   for ( i = 0; i < ROW; i++)
   {
      for ( j = 0; j < COLUmN; j++)
      {
         printf("%5d", matriz[i][j]);
      } // end for j
      printf("\n");
   } // end for i 
} // end print

int main()
{
   // cria a matriz
   int matriz[ROW][COLUmN];

   // vetores
   int somaRow[ROW];
   int somaColumn[COLUmN];

   srand(time(NULL)); // semente para rand()

   // adiciona valores na matriz
   add(matriz);

   // cabeçalho
   printf("\nmatriz original\n");
   // imprime os valores da matriz
   printMatriz(matriz);

   // soma os valores das colunas
   somaColunas(matriz, somaColumn);
   printf("Soma das colunas:\n");
   printVetorColuna(somaColumn);

   // soma os valores das linhas
   somaLinhas(matriz, somaRow);
   printf("Soma das linhas:\n");
   printVetorLinhas(somaRow);
   
   printf("\n\n");
   return 0;
} // end main