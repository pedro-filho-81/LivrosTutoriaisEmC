/**
 * 2) Faça um programa que leia uma string 
 * e imprima as quatro primeiras letras dela.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 139). GEN LTC. 
 * Edição do Kindle. 
 * 31/10/2024
 */
#include <stdio.h>

int main()
{
   
   // cria uma variável para string
   char palavra[50];
   int i = 0;

   // entrada de dados
   printf("Digite uma string: ");
   scanf("%50[^\n]", palavra); // entrada do usuário

   // exibe a string
   printf("Esta eh uma string digitada:\n%s\n", palavra);

   printf("Estas sao as 4 primeiras letras da string:\n\t");

   // loop para exibir as 4 primeiras letras
   for (i = 0; i < 4; i++)
   {
      // exibe os caracteres
      printf("%c", palavra[i]);
   } // end for
   
   return 0;
} // end main