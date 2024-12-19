/**
 * Exercício 04
 * Considere a seguinte declaração: 
 * int a, *b, **c, ***d;
 * Escreva um programa que leia a variável A
 * e calcule e exiba o dobro, o triplo e o 
 * quádruplo desse valor utiizando apenas os
 * ponteiros B C D.
 * O dobro com o ponteiro B o triplo com o C
 * e o quadroplo com o D.
 * Aula - 195
 */
#include <stdio.h>
int main()
{
   // variável
   int A = 5;

   // ponteiros
   int *B = &A;
   int **C = &B;
   int ***D = &C;
   printf("\nVariaveis e ponteiros:");
   printf("\n\tint A = 5;        A recebe 5"
            "\n\tint *B = &A;     *B recebe o endereco de &A"
            "\n\tint **C = &B;   **C recebe o endereco de &B"
            "\n\tint ***D = &C; ***D recebe o endereco de &C\n");  
   // exibir resultado
   printf("\nO valor de A eh: %d\n", A);
   printf("*B * 2 eh o dobro de A: %d\n", *B * 2);
   printf("**C * 3 eh o triplo de A: %d\n", **C * 3);
   printf("***D * 4 eh o quadruplo do A: %d\n", ***D * 4);
   printf("\n\n");
   return 0;
} // end main