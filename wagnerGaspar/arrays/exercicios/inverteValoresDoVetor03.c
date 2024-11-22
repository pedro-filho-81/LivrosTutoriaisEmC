/**
 * Ler um vetor N de tamanho 20 e exibe na tela
 * em seguida troque o 1º valor pelo último
 * o 2º pelo penúltim até todos serem trocados.
 * gerar números aleatórios em um vetor com as 
 * funções srand() e rand()
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDE 5

// função para adicionar valores aleatórios
void add(int vetor[])
{
   // loop para adicionar valores
   for (int i = 0; i < SIDE; i++)
   {
      // vetor recebe valores aleatórios
      vetor[i] = 1 + rand() % 100;
   } // end for
} // end add

// função para trcar valores do vetor
void trocarValores(int vetor[])
{
   // variáveis
   int temp = 0, fim = 4;

   // loop para trocar os valores 
   for (int i = 0; i < SIDE; i++)
   {
      temp = vetor[i];
      vetor[i] = vetor[fim];
      vetor[fim] = temp;
      fim--;
   } // end for   
} // end trocarValores

// função display
void display(int vetor[])
{
   // loop para linha da matriz
   for (int i = 0; i < SIDE; i++)
   {  
      // exibe os elementos da matriz
      printf("%3d", vetor[i]);
   } // end for colunas
} // end display

int main()
{  
   // matrizes
   int vetorA[SIDE];
   int vetorB[SIDE];
   
   // gera sementa para rand
   srand(time(NULL));

   // chama a função add
   add(vetorA);

   // chama função
   printf("\nVetorA:\n");
   display(vetorA);

   trocarValores(vetorB);
   printf("\nVetor trocado:\n");
   display(vetorB);

/*
   trocarValores(vetorA);
   printf("\nVetor invertido:\n");
   display(vetorA);
*/ 
   printf("\n\n");
   return 0;
} // end main