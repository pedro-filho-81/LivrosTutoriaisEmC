/**
 * 11) Escreva um programa que leia uma string do 
 * teclado e converta todos os seus caracteres em 
 * minúscula. Dica: some 32 dos caracteres cujo 
 * código ASCII está entre 65 e 90.
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 140). 
 * GEN LTC. Edição do Kindle.  
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
   // string
   char str1[50];
   char resposta = 's'; // para while
   int i; // para for

   // enquanto a resposta igual a 's' faça
   while (resposta == 's')
   {
      printf("\nCONVERTE STRING PARA mAIUSCULA\n");

      // data entry
      printf("Digite uma palavra/frase: ");
      scanf(" %50[^\n]", str1); // entrada do usuário

      // display
      printf("Original: %s\n", str1);
      printf("minusucula: ");

      // loop para converter a string
      for ( i = 0; i < strlen(str1); i++)
      {
         // converte caracteres da string para maiúscula
         printf("%c", tolower(str1[i]));
      } // end for
   
      str1[i] = '\0'; // fim da string

      // data entry
      printf("\nDeseja continuar (s/n)");
      scanf(" %c", &resposta); // usuário

      // converte a resposta em minúscula
      resposta = tolower(resposta);

      if (resposta == 'n')
      {
         break;
      } // end if break      
   } // end while

   return 0;
   
} // end main