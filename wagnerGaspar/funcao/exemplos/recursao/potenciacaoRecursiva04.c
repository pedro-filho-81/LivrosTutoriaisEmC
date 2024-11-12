/**
 * funções e/ou procedimentos recursivos.
 * Fazer uma função para somar um valor de 1 até n
 * e exibir o seu resultado na tela
 * 11/11/2024
 */
#include <stdio.h>
#include <stdlib.h>

// função potência
int somar(int n)
{
   // verificar se o valor de n é igual a zero 
   if (n == 0) // se verdade
   {
      // retorne 1
      return 0;
   } else { // se não  
      // retorne n mais o valor da
      // função recursiva somar(n - 1)    
      return n + somar(n - 1);
   } // end else
   
} // end somar

int main()
{
   // variável
   int n;

   printf("\nSOmA OS VALORES DE 1 ATE N.\n");

   // entrada de dados
   printf("Digite um valor maior que zero: ");
   scanf("%d", &n);

   // chama a função recursiva somar()
   // e exibe o resultado na função printf();
   printf("O soma de 1 ate %d eh %d\n\n", n, somar(n));
   
   return 0;
   
} // end main