/**
 * 1) Faça um programa que leia uma string 
 * e a imprima na tela.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 139). GEN LTC. 
 * Edição do Kindle. 
 * Pedro, 31/10/2024
 */
#include <stdio.h>

int main()
{
   // cria uma variável para string
   char palavra[50];

   // entrada de dados
   printf("Digite uma string: ");
   scanf("%50[^\n]", palavra); // entrada do usuário

   // exibe a string
   printf("Esta eh uma string digitada:\n%s\n", palavra);

   return 0;
} // end main