/**
 * 1.2.5 O operador exclusivo ou ^ para operandos booleanos 
 * é definido como verdadeiro se forem diferentes, falso se 
 * forem iguais. Dê uma tabela verdade para esta função.
 * Sedgewick, Robert; Wayne, Kevin. Computer Science: An 
 * Interdisciplinary Approach . Pearson Education. 
 * Edição do Kindle.
 */
#include <stdio.h>
int main()
{
   // variáveis
   int a = 5;
   int b = 7;

   printf("\nTavela Verdade Ou exclusivo (^):\n");
   printf("So eh verdade se um for verdadeiro\ne o outro for falso.\n");
   printf("int a = 5;\nint b = 7;\n");
   printf("***************\nTabela Verdade:\nA=5\tB=7\t*A^B");
   printf("\nV\tV\t*Falso");
   printf("\nV\tF\t*Verdadeiro");
   printf("\nF\tV\t*Verdadeiro");
   printf("\nF\tF\t*Falso");
   printf("\n***************\n");
   printf("a ^ b = %s\n\n", (a ^ b) ? "verdadeiro" : "falso");

   return 0;
} // end main