/**
 * 4) Faça um programa que leia uma string 
 * e a imprima de trás para a frente.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (pp. 139-140). GEN LTC. 
 * Edição do Kindle. 
 * 31/10/2024
 */
#include <stdio.h>
#include <string.h>
#define SIZE 50

int main()
{   
   // cria uma variável para string
   char palavra[SIZE];
   int i = 0;

   printf("\nEXIBE STRING DE TRAZ PARA FRENTE\n");
   // entrada de dados
   printf("Digite uma string: ");
   scanf("%50[^\n]", palavra); // entrada do usuário

   // exibe a string
   printf("String digitada: %s\n", palavra);

   printf("String invertida: ");
   
   for ( i = strlen(palavra); i >= 0; i--)
   {
      printf("%c", palavra[i]);
   } // end for   
   
   printf("\n");

   return 0;
} // end main