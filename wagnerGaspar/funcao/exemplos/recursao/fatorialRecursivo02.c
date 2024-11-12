/**
 * funções e procedimentos recursivos
 * função para calcular e retornar o fatorial de n
 * 11/11/2024
 */
#include <stdio.h>
#include <stdlib.h>

// função fatorial
int fatorial(int n)
{
   // verificar se o valor de n é igual a zero 
   // ou se n é igual a um
   if (n == 0 || n == 1) // se verdade
   {
      // retorne 1
      return 1;
   } else { // se não
      // retorne o valor de n
      // chama a função fatorial e diminui
      // o valor de n em 1
      return n * fatorial(n - 1);
   } // end else

} // end fatorial

int main()
{
   // variável
   int n;

   printf("\nFATORIAL DE Um NUmERO.\n");

   // entrada de dados
   printf("Digite um valor maior que zero: ");
   scanf("%d", &n);

   // chama a função recursiva fatorial 
   // e exibe o resultado com a função printf();
   printf("O fatorial de %d! eh %d\n\n", n, fatorial(n));
   
   return 0;
   
} // end main