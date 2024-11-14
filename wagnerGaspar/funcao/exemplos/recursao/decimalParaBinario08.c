 /**
 * funções e/ou procedimentos recursivos.
 * Fazer uma função recursiva para converter 
 * número decimal em binário
 * e exibir o seu resultado na tela
 * 13/11/2024
 */
#include <stdio.h>
#include <stdlib.h>

/**
 *       resultado   resto
 *    3/2   1          1
 *    1/2   0          1
 * 
 *    4/2   2          0
 *    2/2   1          0
 *    1/2   0          1
 */

// função decimalParaBinario
void decimalBinario(int n)
{
   // verifica se o número igual a zero
   if (n == 0)
   {
      // exibe zero
      printf("%d", n);
   } 
   else // se não
   {
      // exibe o resto da divisão
      // printf("%d", n % 2);
      // função divide o valor por 2
      // até o resultado ser zero
      decimalBinario(n / 2);
      // imprime o valor do resto da divisão
      printf("%d", n % 2);
   } // end else
} // end binário

int main()
{
   // variável
   int n = 0;

   printf("\nDECImAL PARA BINARIO.\n");
   printf("digite um inteiro maior que zero: ");
   scanf("%d", &n);

   printf("O valor binario de %d eh: ", n);
   decimalBinario(n);
   printf("\n\n");

   return 0;
   
} // end main