/**
 * 1.2.3 Suponha que a e b sejam variáveis ​​booleanas. 
 * Mostre que a expressão Clique aqui para visualizar a 
 * imagem do código 
 * (!(a && b) && (a || b)) || ((a && b) || !(a || b)) 
 * é avaliada como verdadeira.
 * Sedgewick, Robert; Wayne, Kevin. Computer Science: An 
 * Interdisciplinary Approach . Pearson Education. 
 * Edição do Kindle.
 */
#include <stdio.h>
#include <stdbool.h>
int main()
{
   // variáveis
   int a = 5;
   int b = 7;
   bool logico;

   printf("Para:\nint a = 5;\nint b = 7;");
   logico = (!(a && b) && (a || b)) || ((a && b) || !(a || b));
   printf("\nValor logico = %s\n\n", logico ? "verdadeiro" : "falso" );

   a = 5, b = 5;   
   printf("Para:\nint a = 5;\nint b = 5;");
   logico = (!(a && b) && (a || b)) || ((a && b) || !(a || b));
   printf("\nValor logico = %s\n\n", logico ? "verdadeiro" : "falso");

   a = 7, b = 5;   
   printf("Para:\nint a = 7;\nint b = 5;");
   logico = (!(a && b) && (a || b)) || ((a && b) || !(a || b));
   printf("\nValor logico = %s\n\n", logico ? "verdadeiro" : "falso");

   return 0;
   
} // end main