/**
 * 1.2.4 Suponha que a e b sejam variáveis ​​int. 
 * Simplifique a seguinte expressão: 
 * (!(a < b) && !(a > b)).
 * Sedgewick, Robert; Wayne, Kevin. Computer Science: An 
 * Interdisciplinary Approach . Pearson Education. 
 * Edição do Kindle.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
   int a = 5;
   int b = 7;

   bool logico = (!(a < b) && !(a > b));

   printf("\nint a = 5;\nint b = 7;");
   // (!(a < b) && !(a > b))
   printf("\nbool logico = (!(a < b) && !(a > b));");
   printf("\nvalor logico: %s\n", logico ? "Verdadeiro" : "Falso");

   a = 5;
   b = 5;
   logico = (!(a < b) && !(a > b));
   printf("\nint a = 5;\nint b = 5;");
   // (!(a < b) && !(a > b))
   printf("\nbool logico = (!(a < b) && !(a > b));");
   printf("\nvalor logico: %s\n", logico ? "Verdadeiro" : "Falso");

   return 0;
} // end main