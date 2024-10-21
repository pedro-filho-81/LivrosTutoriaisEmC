/**
 * 1.2.8 Explique como usar o PROGRAMA 1.2.3 
 * para encontrar a raiz quadrada de um número.
 * Sedgewick, Robert; Wayne, Kevin. Computer Science: An 
 * Interdisciplinary Approach . Pearson Education. 
 * Edição do Kindle.
 */
#include <stdio.h>
#include <math.h>

int main()
{
   // variáveis
   float b, c;
   float discriminante = 0;

   // entrada de dados
   printf("Digite dois valores: ");
   scanf("%f%f", &b, &c);

   // calcular
   discriminante = b * b - 4.0 * c;
   float sqraiz = sqrt(discriminante); 
   
   // calcular as raizes
   float raiz1 = (-b + sqraiz) / 2.0;
   float raiz2 = (-b - sqraiz) / 2.0;

   // exibe resultado
   printf("Raiz1 = %f\n", raiz1);
   printf("Raiz2 = %f\n\n", raiz2);

   return 0;

} // end main