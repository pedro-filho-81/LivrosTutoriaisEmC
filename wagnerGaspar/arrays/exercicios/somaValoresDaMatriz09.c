/**
 * Cria Matriz 5 x 7 e soMa seus valores
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 5
#define COLLUM 7

// função adicionar
void add(int matriz[][COLLUM])
{
   // loop para adicionar valores ao vetor
   for (int i = 0; i < ROW; i++)
      for(int j = 0; j < COLLUM; j++)
      // matriz recebe valores aleatórios
      // entre 1 e 100 
      matriz[i][j] = (1 + rand() % 100);
} // end addTemp

// função display ( exibir )
void display(int matriz[][COLLUM])
{
   // loop para linha da matriz
   for (int i = 0; i < ROW; i++)
   {
      for(int j = 0; j < COLLUM, j++)
      {
         // exibe os elementos da matriz
         printf("%d ", matriz[i][j]);
      }
      printf("\n");
   } // end for colunas
} // end display

int main()
{
   // MATRIZ
   int matriz[ROW][COLLUM];

   // semente de rand()
   srand(time(NULL));

   // adiciona valores ao vetor
   add(vetor);
   
   printf("\nVetor original:\n");
   display(vetor);

   // exibe o vetor ordenado
   order(vetor); // ordena o vetor
   printf("\nVetor organizado:\n");
   display(vetor); // exibe o vetor

   printf("\n\n");
   
   return 0;

} // end main