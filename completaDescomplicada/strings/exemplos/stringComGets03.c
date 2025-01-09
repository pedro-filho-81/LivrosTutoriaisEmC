/**
 * Uma alternativa mais eficiente para a leitura de 
 * uma string é a função gets(), a qual faz a leitura 
 * do teclado considerando todos os caracteres 
 * digitados (incluindo os espaços) até encontrar uma 
 * tecla enter: char str[20]; gets(str);
 * 
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 134). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>

int main()
{
   // string
   char str[20];

   printf("\nLendo STRING com GETS");
   // entrada de dados
   printf("\nDigite seu nome completo: ");
   gets(str);

   // exibe resultado
   printf("\nVoce digitou: %s\n", str);

   printf("gets(str);");
   printf("\nA funcao gets(variavel), faz a leitura" 
            "\ndo teclado considerando todos os caracteres "
            "\ndigitados (incluindo os espacos) ate encontrar uma "
            "\ntecla enter");

   printf("\n\n");
   return 0;
} // end main