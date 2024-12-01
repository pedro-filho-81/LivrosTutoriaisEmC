/**
 * Programa para adicionar valores aleatórios não 
 * repetidos em um vetor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 25

// função adicionar
void add(int vetor[])
{
   // variáveis
   int i = 0, j, igual;

   // loop do while para adicionar valores 
   // aleatórios não repetidos ao vetor
   do
   {
      // vetor recebe valores aleatórios entre 1 e 100
      vetor[i] = 1 + rand() % 50;

      // informa que o valor gerado não é repetido
      igual = 0;

      // loop para percorrer  o vetor
      for (j = 0; j < i; j++)
      {
         // verifica se o vetor j tem valores iguais
         // ao vetor i
         if(vetor[j] == vetor[i]) // se verdade
            // informa que tem valor é igual
            igual = 1;
      } // end for j

      // se variável igual for zero
      if(igual == 0) // se verdade
         // incrementa em 1 a variável i
         i++;
   // faz o loop enquanto i menor que o tamanho do vetor
   } while (i < SIZE);
   
} // end add

// função display ( exibir )
void exibir(int vetor[])
{
   // loop para imprimir os valores
   for (int i = 0; i < SIZE; i++)
   {
         // exibe os elementos da matriz
         printf("%3d", vetor[i]);
   } // end if
} // end display

int main()
{
   // vetor
   int vetor[SIZE];

   srand(time(NULL));
   
   add(vetor);
   printf("\nVetor sem valores repetidos:\n");
   exibir(vetor);

   printf("\n\n");
   return 0;
} // end main