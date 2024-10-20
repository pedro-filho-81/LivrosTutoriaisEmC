/**
 * 1.2.2 Escreva um programa que use Math.sin() 
 * e Math.cos() para verificar se o valor de cos2 θ + sin2 θ 
 * é aproximadamente 1 para qualquer θ inserido como um 
 * argumento de linha de comando. Basta imprimir o valor. 
 * Por que os valores nem sempre são exatamente 1?
 * Sedgewick, Robert; Wayne, Kevin. Computer Science: An 
 * Interdisciplinary Approach . Pearson Education. 
 * Edição do Kindle.
 */
#include <stdio.h>
#include <math.h>
int main()
{
   int soma = sin(0) + cos(0);
   printf("sin(%d) + cos(%d) = %d\n", 0, 0, soma);
   return 0;
} // end main