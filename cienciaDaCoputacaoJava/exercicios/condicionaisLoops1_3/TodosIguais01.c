/**
 * 1.3.1 Escreva um programa que receba três 
 * argumentos de linha de comando inteiros e 
 * imprima equal se todos os três forem iguais, e 
 * not equal caso contrário.
 * Sedgewick, Robert; Wayne, Kevin. Computer 
 * Science: An Interdisciplinary Approach . 
 * Pearson Education. Edição do Kindle.
 * 26/10/2024
 */
#include <stdio.h>
#include <stdlib.h>

int main() 
{
   // variáveis
   int n1, n2, n3;

   printf("\nVALORES IGUAIS ou DIFERENTES\n");
   printf("Digite 3 inteiros: ");
   scanf("%d%d%d", &n1, &n2, &n3);

   if(n1 == n2 && n1 == n2) {
      printf("Valores iguais.");
   } else {
      printf("Valores diferentes.");
   } // end else

} // end main