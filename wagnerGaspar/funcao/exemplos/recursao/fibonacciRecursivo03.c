/**
 * funções e procedimentos recursivos
 * Fazer uma função para calcular o enesímo termo da 7
 * sequência de Fibonacci
 * 11/11/2024
 */
#include <stdio.h>
#include <stdlib.h>

// função fatorial
int fibonacci(int n)
{
   // verificar se o valor de n é igual a zero 
   // ou se n é igual a um
   if (n == 1) // se verdade
   {
      // retorne n
      return 0;
   } else { // se não
      // se n igual a dois 2
      if (n == 2)
         return 1;      
      // retorne o valor de n
      // chama a função fibonacci e diminui
      // o valor de n em 1, chama novamente e 
      // subitrai de n 2
      return fibonacci(n - 1) + fibonacci(n - 2);
   } // end else

} // end fatorial

int main()
{
   // variável
   int n;

   printf("\nO ENESImO TERmO DE FIBONACCI.\n");

   // entrada de dados
   printf("Digite um valor maior que zero: ");
   scanf("%d", &n);

   // chama a função recursiva fatorial 
   // e exibe o resultado com a função printf();
   printf("O termo de %d eh %d\n\n", n, fibonacci(n));
   
   return 0;
   
} // end main