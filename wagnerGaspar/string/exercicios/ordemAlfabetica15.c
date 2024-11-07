/**
 * 15) Escreva um programa que leia duas strings e as 
 * imprima em ordem alfabética, a ordem em que elas 
 * apareceriam em um dicionário.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 140). GEN LTC. 
 * Edição do Kindle. 
 */
#include <stdio.h>
#include <string.h>

int main()
{
   // strings
   char palavra1[50];
   char palavra2[50];
   // variáveis
   int comparar = 0;

   printf("\nCOmPARANDO PALAVRAS\n");

   // entrada de dados
   printf("Digite uma palavra: ");
   scanf(" %50[^\n]", palavra1);

   printf("Digite outra palavra: ");
   scanf(" %50[^\n]", palavra2);

   // compara duas strings
   comparar = strcmp(palavra1, palavra2);

   // a comparação receber o valor zero
   if (comparar == 0) // se verdade
   {
      // exibir
      printf("\nAs palavras sao iguais:\n%s == %s\n", palavra1, palavra2);
      // se a comparação retornar -1
   } else if (comparar == -1) // se verdade
   {
      // exibe
      printf("\nAs palavras estao em ordem:\n%s\n%s\n", palavra1, palavra2);
   } else { // se não
      // exibe
      printf("\nAs palavras estao em ordem decrescente:\n%s\n%s\n", palavra1, palavra2);
      printf("\nCorreto:\n%s\n%s\n", palavra2, palavra1);
   } // end else   
   
   return 0; // programa ok
   
} // end main