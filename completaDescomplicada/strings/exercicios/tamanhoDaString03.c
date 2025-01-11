/**
 * 3) Sem usar a função strlen(), faça um programa que 
 * leia uma string e imprima quantos caracteres ela possui.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 139). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
   // string
   char str[SIZE];

   // variável
   int i;
   int contar = 0;

   // limpa o buffer do teclado
   setbuf(stdin, NULL);

   // entrada de dados
   printf("\nDigite uma palavra ou um texto: ");
   fgets(str, SIZE, stdin);

   // loop para contar os caracteres da string
   // faça enquanto os caracteres forem diferente
   // de fim da string \0
   for(i = 0; str[i] != '\0'; i++) 
   {
      // se a string for igual a salta linha(enter)
      if(str[i] == '\n')
      {
         // ignore o caractere
         continue;
      } // end if
      contar++; // conte os caracteres
   } // end for

   // exibe resultado
   printf("\nVoce digitou: %s\nTem %d caracteres.\n", str, contar);

   printf("\n\n");
   return 0;
} // end main