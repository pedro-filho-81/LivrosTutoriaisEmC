/**
 * 2) Faça um programa que leia uma string e imprima as 
 * quatro primeiras letras dela.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 139). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>

int main()
{
   // string
   char texto[50];

   // entrada de dados
   printf("\nDigite uma palavra ou um texto: ");
   fgets(texto, 5, stdin);

   printf("\nImprime apenas os 4 primeiros digitosda string\n");
   // exibe resultado
   printf("\nVoce digitou: %s", texto);

   printf("\n\n");
   return 0;
} // end main