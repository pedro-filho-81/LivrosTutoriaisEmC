 /**
 * funções e/ou procedimentos recursivos.
 * Fazer uma função recursiva para encontrar 
 * o maior valor de um vetor
 * e exibir o seu resultado na tela
 * 13/11/2024
 */
#include <stdio.h>
#include <stdlib.h>

// função maiorValor
int maiorValor(int vetor[], int tam, int indice) // 45,32
{
   // verificar se todo vetor foi percorrido
   if (tam == 0) // se verdade
   {
      // retorne o valor do maior valor encontrado
      return vetor[indice];
   } else // se não
   { 
      // verifica se o valor do vetor tamanho é
      // maior que o vetor índice
      if (vetor[tam - 1] > vetor[indice]) // se verdade
      {
         // retorne o maior valor
         return maiorValor(vetor, tam - 1, tam - 1);
      } else // se não
      {
         // retorbe o maior valor do 
         // vetor na posição índece
         return maiorValor(vetor, tam - 1, indice);
      } // end else 2
      
   } // end else 1
   
} // end maiorValor

int main()
{
   // vetor
   int vetor[10] = {10,258,13,445,58,67,700,8,9,10};
   int i = 0;

   printf("\nmAIOR VALORES DO VETOR.\n");
   printf("Vetor:\n");
   // loop para exibir o vetor
   for ( i = 0; i < 10; i++)
   {
      // exibe o vetor
      printf("%2d ", vetor[i]);
   } // end for
   
   // chama a função recursiva maiorValor()
   // e exibe o resultado na função printf();
   printf("\nO maior valor do vetor eh %d\n\n", maiorValor(vetor, 10, 0));
   
   return 0;
   
} // end main