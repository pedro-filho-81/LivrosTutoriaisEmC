/**
 * Faça um programa para somar os valores de um vetor
 * de inteiros e imprima os valores antes e depois de
 * ordenados.
 * 25/11/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10 // define o tamanho do vetor

// função adicionar
void add(int vetor[])
{
   // loop para adicionar valores ao vetor
   for (int i = 0; i < SIZE; i++)
      // vetor recebe valores aleatórios
      // entre 1 e 100
      vetor[i] = (1 + rand() % 100);
} // end addTemp

// ordenar vetor
void order(int vetor[])
{
   // variáveis
   int i, troca = 0, contador = 0;
   int temp;

   /**
    * Loop para verificar a quantidade de
    * trocas do vetor
    */
   do { 
      troca = 0;  // informa que no vetor 
                  // não houve uma troca de valores
      contador++; // contador informa a quantidade
                  // de trocas feitas no vetor

      // loop para ordenar o vetor
      for(i = 0; i < SIZE; i++) {
         /** 
          * Verifica se o valor do vetor i é maior que
          * o valor do vetor i+1; se verdade,
          * executa a troca até colocar esse elemento
          * no devido lugar, (final do vetor).
          */
         if(vetor[i] > vetor[i + 1]) { // se verdade
            // temp recebe o maior valor
            temp = vetor[i];
            // vetor i recebe o valor do vetor i+1
            vetor[i] = vetor[i + 1];
            // vetor i+1 recebe o valor de temp
            vetor[i + 1] = temp;
            // e troca recebe o valor 1, ou seja,
            // houve uma troca de valores
            troca = 1;
         } // end if
      } // end for i
      // faça enquanto troca for maior ou igual a 1
   } while(troca); // se a troca foi realizada repete

   printf("\nEsse vetor foi ordenado em %d movimentos", contador);
} // end order

// função display ( exibir )
void exibir(int vetor[])
{
   // variável
   int soma = 0;

   // loop para imprimir os valores
   for (int i = 0; i < SIZE; i++)
   {
         // exibe os elementos da matriz
         printf("%5d", vetor[i]);

         // soma os valores do vetor
         soma += vetor[i];
   } // end if

   // exibe o valor da soma do vetor
   printf("\nSoma = %d", soma);
} // end display

// função principal
int main()
{
   // vetor
   int vetor[SIZE];

   srand(time(NULL)); // semente de rand()

   // ADICIONA VALORES AO VETOR
   add(vetor);

   // exibe vetor original
   printf("\nVetor original:\n");
   exibir(vetor);

   printf("\n\n");
   return 0;
} // end final