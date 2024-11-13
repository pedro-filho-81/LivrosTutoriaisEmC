 /**
 * funções e/ou procedimentos recursivos.
 * Fazer uma função para somar os valores de um vetor
 * e exibir o seu resultado na tela
 * 11/11/2024
 */
#include <stdio.h>
#include <stdlib.h>

// função somarVetor
int somarVetor(int vetor[], int tam)
{
   // verificar se o tamanho é igual a zero 
   if (tam == 0) // se verdade
   {
      // retorne 0
      return 0;
   } else { // se não  
      // retorne o valor do último vetor mais a
      // função recursiva somarVetor(vetor, tam - 1)    
      return vetor[tam - 1] + somarVetor(vetor, tam - 1);
   } // end else
   
} // end somar

int main()
{
   // vetor
   int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
   int i = 0;

   printf("\nSOmA OS VALORES DO VETOR.\n");
   printf("Vetor:\n");
   // loop para exibir o vetor
   for ( i = 0; i < 10; i++)
   {
      // exibe o vetor
      printf("%2d ", vetor[i]);
   } // end for
   
   // chama a função recursiva somarVetor()
   // e exibe o resultado na função printf();
   printf("\nA soma dos valores do vetor eh %d\n\n", somarVetor(vetor, 10));
   
   return 0;
   
} // end main