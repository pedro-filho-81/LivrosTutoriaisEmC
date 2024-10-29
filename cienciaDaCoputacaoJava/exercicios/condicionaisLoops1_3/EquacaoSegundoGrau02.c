/**
 * 1.3.2 Escreva uma versão mais geral e mais 
 * robusta do Quadratic (PROGRAMA 1.2.3) que 
 * imprima as raízes do polinômio ax2 + bx + c, 
 * imprima uma mensagem apropriada se o 
 * discriminante for negativo e se comporte 
 * apropriadamente (evitando divisão por zero) se 
 * a for zero.
 * Sedgewick, Robert; Wayne, Kevin. Computer 
 * Science: An Interdisciplinary Approach . 
 * Pearson Education. Edição do Kindle.
 * 26/10/2024
 */
#include <stdio.h>
#include <math.h>

int main()
{
   // variáveis
   int a, b, c;
   float delta = 0.0; // discriminante
   float raiz1 = 0.0, raiz2 = 0.0;
   printf("\nEQUACAO DO 2º GRAU:\n");

   do
   {
      // entrada de dados
      printf("Digite 3 inteiros diferentes zero:\n");
      scanf("%d%d%d", &a, &b, &c);   
   } while (a == 0 || b == 0 || c == 0); // end while

   // calcular a discriminante
   delta = pow(b, 2) - 4 * a * c;
   
   printf("\nDelta = %.2f\n", delta);

   if (delta > 0)
   {
      raiz1 = -b + sqrt(delta) / (2 * a);
      printf("Raiz1 = %.2f\n", raiz1);

      raiz2 = -b - sqrt(delta) / (2 * a);
      printf("Raiz2 = %.2f\n", raiz2);
   } // end if
   else if (delta == 0)
   {
      raiz1 = -b + sqrt(delta) / (2 * a);
      printf("Raiz1 = %.2f\n", raiz1);

      raiz2 = -b - sqrt(delta) / (2 * a);
      printf("Raiz2 = %.2f\n", raiz2);
   } else {
      printf("\nEquacao nao possui raiz real.\n");
   } // end else
   
   return 0;
   
} // end main