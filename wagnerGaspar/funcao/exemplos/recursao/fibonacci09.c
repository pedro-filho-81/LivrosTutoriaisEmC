 /**
 * funções e/ou procedimentos recursivos.
 * Fazer uma função recursiva para comparar
 * Fibonacci recursivo e interativo
 * e exibir o seu resultado na tela
 * 15/11/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// função recursiva
long long int fiboR(int n)
{
   // verificar se o usuário 
   // quer o primeiro termo de Fibonacci
   if (n == 1) // verdade
   {
      // retorna zero
      return 0; // primeiro termo
   } 
   else // se não
      // verificar se ele quer
      // o segundo termo
      if (n == 2) // se verdade
      {
         // retorne o segundo termo
         return 1;
      } else // se não
      {
         // retorna o valor da recursão
         return fiboR(n - 1) + fiboR(n - 2);
      } // end else   
} // end fiboR

// Função Fibonacci interativo
long long int fiboI(int n)
{
   // variáveis
   long long int a = 0, b = 1, c;
   // para o loop que vai calcular fibonacci
   int i = 2;
   
   // verificar se o usuário 
   // quer o primeiro termo de Fibonacci
   if (n == 1) // verdade
   {
      // retorna zero
      return 0; // primeiro termo
   } 
   else // se não
      // verificar se ele quer
      // o segundo termo
      if (n == 2) // se verdade
      {
         // retorne o segundo termo
         return 1;
      } 
      else // se não
      {
         //cria o loop enquanto i menor que n faça
         while (i < n)
         {
            // somar a mais b e atribuir a c
            c = a + b;
            // a recebe o valor de b
            a = b;
            // b recebe o valor de c
            b = c;
            // e incrementa i em 1
            i++;
         } // end while
         // após retorne o valor de c
         return c;
      } // end else 
} // end fiboI 

int main()
{
   // variáveis
   int n = 42; // busca o termo
   // verifica o tempo
   time_t inicio, final;
   
   printf("\nRECURSIVO vs INTERATIVO\n");

   inicio = time(NULL);
   printf("Fibonacci interativo: %lld\n", fiboI(n));
   final = time(NULL);
   printf("Tempo em segundos: %f\n\n", difftime(final, inicio));

   inicio = time(NULL);
   printf("Fibonacci recursivo: %lld\n", fiboR(n));
   final = time(NULL);
   printf("Tempo em segundos: %f\n\n", difftime(final, inicio));

   printf("\n");

   return 0;
   
} // end main