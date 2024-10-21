/**
 * 1.2.9 O que cada um dos seguintes imprime? 
 * a. System.out.println('b'); 
 * b. System.out.println('b' + 'c'); 
 * c. System.out.println((char) ('a' + 4)); 
 * Explique cada resultado.
 * Sedgewick, Robert; Wayne, Kevin. Computer Science: An 
 * Interdisciplinary Approach . Pearson Education. 
 * Edição do Kindle.
 */
#include <stdio.h>
int main()
{
   // exibir
   printf("\nConcatenacao:\n");
   printf("Exibe o caractere dentro\ndas aspas simples:\n'b' = %c\n", 'b');
   printf("'b', 'c' = %c%c\n", 'b','c');
   printf("Exibe o caractere resultado\nda soma de 'a' + 4 = 101\n");
   printf("101 na tabela ASCII eh a letra e.\n");
   printf("(char) ('a' + 4) = %c\n", (char) ('a' + 4));
   printf("Fonte: %s\n\n", "https://pt.wikipedia.org/wiki/ASCII");

   return 0;
} // end main