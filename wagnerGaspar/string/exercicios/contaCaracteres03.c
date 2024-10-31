/**
 * 3) Sem usar a função strlen(), faça um programa que 
 * leia uma string e imprima quantos caracteres ela 
 * possui.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 139). GEN LTC. 
 * Edição do Kindle. 
 * 31/10/2024
 */
#include <stdio.h>
#include <string.h>

int main()
{   
   // cria uma variável para string
   char palavra[50];
   int i = 0, count = 0;

   printf("\nCONTANDO CARACTERES\n");
   // entrada de dados
   printf("Digite uma string: ");
   scanf("%50[^\n]", palavra); // entrada do usuário

   // exibe a string
   printf("Esta eh a string digitada: %s\n", palavra);

   // enquanto palavra diferente de fim de string
   while (palavra[i] != '\0')
   {   
      count++; // conta os caracteres
      i++;
   } // end while
   
   printf("Esta string tem %d caracteres:\n\n", count);
   
   return 0;
} // end main