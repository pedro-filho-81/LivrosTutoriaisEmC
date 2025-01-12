/**
 * 4) Faça um programa que leia uma string e a imprima de 
 * trás para a frente.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (pp. 139-140). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
   // string
   char str1[SIZE];

   // variável
   int i = 0;
   int contar = 0;

   printf("\nInverta a string digitada:\n");

   // limpa o buffer do teclado
   setbuf(stdin, NULL);

   // entrada de dados
   printf("\nDigite uma palavra ou um texto: ");
   fgets(str1, SIZE, stdin);

   printf("\nString inversa:\n\t");
   // loop para contar os caracteres da string
   // faça enquanto os caracteres forem diferente
   // de fim da string \0
   for(i = 0; str1[i] != '\0'; i++) 
   {
      // se a string for igual a salta linha(enter)
      if(str1[i] == '\n')
      {
         // ignore o caractere
         continue;
      } // end if
      // exibe a string de forma invertida
      printf("%c", str1[strlen(str1) - i - 2]);
      contar++; // conta os caracteres
   } // end for

   // exibe resultado
   printf("\nVoce digitou:\n\t%sA string Tem %d caracteres.\n", str1, contar);

   printf("\n\n");
   return 0;
} // end main