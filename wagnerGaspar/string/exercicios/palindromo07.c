/**
 * 7) Faça um programa que leia uma string e imprima uma 
 * mensagem dizendo se ela é um palíndromo ou não. Um 
 * palíndromo é uma palavra que tem a propriedade de 
 * poder ser lida tanto da direita para a esquerda como 
 * da esquerda para a direita. Exemplos: ovo, arara, 
 * rever, asa, osso etc.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 140). GEN LTC. 
 * Edição do Kindle. 
 * 01/11/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30

int main()
{
   // variável strig
   char palavra[SIZE]; // string original
   int i = 0;
   int tam = 0;
   int diferentes = 0;
   char repete = 's';

   printf("\nPALINDROmO\n");

   // data entry
   printf("Digite uma palavra: ");
   scanf(" %30[^\n]", palavra);

   // display result
   printf("Palavra digitada: %s\n", palavra);

   // tamanho recebe o tamanho da palavra
   tam = strlen(palavra); 
   tam--; // decrementa o tamanho
   i = 0; // inicializa o contador while

   // enquanto tamanho da palavra 
   // maior ou igual ao contador faça
   while (tam >= i)
   {
      // verifica se a letra inicial é
      // diferente da letra final na palavra
      if (palavra[i] != palavra[tam]) // se verdade
      {
         // diferentes é incrementado em 1
         diferentes++; 
      } // end if diferentes
      
      tam--; // decrementa o tamanho da palavra
      i++; // incrementa o contador
   } // end while

   // verifica se diferentes é igual a zero
   if (diferentes == 0) // se verdade
   {
      printf("Diferente = %d\n", diferentes);

      // exibe (display)
      printf("%s eh palindroma.\n\n", palavra);
   } // end if
   else { // se falso
      printf("Diferentes = %d\n", diferentes);
      // exibe (display)
      printf("%s nao eh palindroma.\n\n", palavra);
   } // end else
   
   printf("\n");
   
   return 0;

} // end main