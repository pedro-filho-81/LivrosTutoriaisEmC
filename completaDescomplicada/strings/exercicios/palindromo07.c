/**
 * 7) Faça um programa que leia uma string e imprima uma 
 * mensagem dizendo se ela é um palíndromo ou não. 
 * Um palíndromo é uma palavra que tem a propriedade de 
 * poder ser lida tanto da direita para a esquerda como 
 * da esquerda para a direita. 
 * Exemplos: ovo, arara, rever, asa, osso etc.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 140). 
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
   int totVogais = 0;
   int palindromo = 0;

   // limpa o buffer do teclado
   setbuf(stdin, NULL);

   // entrada de dados
   printf("\nDigite uma palavra ou um texto: ");
   fgets(str1, SIZE, stdin);

   // loop para contar os caracteres da string
   // faça enquanto os caracteres forem diferente
   // de fim da string \0
   for(i = 0; str1[i] != '\0'; i++) 
   {
      // verifica se a string for igual a salta linha(enter)
      if(str1[i] == '\n')
      {
         // ignore o caractere
         continue;
      } // end if
      
      // verifica se na string tem alguma vogal
      else if(str1[i] == 'a' || str1[i] == 'A' ||
              str1[i] == 'e' || str1[i] == 'E' || 
              str1[i] == 'i' || str1[i] == 'I' || 
              str1[i] == 'o' || str1[i] == 'O' || 
              str1[i] == 'u' || str1[i] == 'U')
      { // se verdade
         // conta 1
         totVogais++; // conta as vogais
      } // end else if vogais
      
      // verifica se é um palindromo
      // se a primeira letra for igual a última
      // exp.: osso -> o == o, s == s => é palíndromo
      // rever -> r == r, e == e => é palínromo
      else if(str1[i] == str1[strlen(str1) - 2 - i])
      {
         // conta às letras
         palindromo++;
      } // end else if palindromo

      contar++; // conta os caracteres
   } // end for

   // exibe resultado
   printf("\nVoce digitou:\n\t%sA string Tem %d caracteres.\n", str1, contar);

   // verifica se o total das vogais é maior que zero
   if(totVogais > 0) // se verdade
      // exibe
      printf("\nE tem %d vogais.\n", totVogais);
   else // se não
      // exibe
      printf("\nE nao tem vogais.\n");

   // verifica se a variável palindromo é maior que zero
   if(palindromo > 0)
      printf("\nA string eh palindromo.\n");
   else
      printf("\nNao eh um palindromo.\n");

   printf("\n\n");
   return 0;
} // end main