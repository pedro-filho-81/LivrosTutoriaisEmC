/**
 * aula 133: 
 * Descobrindo o tamanho de uma string com 
 * a função strlen()
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   // variáveis
   int i, tam = 0;

   // cria uma string
   char palavras[100] = {"\"Oi. Vamos aprender a programar com a linguagem C?\""};

   // exibe resultado
   printf("\nchar palavras[100] = {%s};\n\n", palavras);

   tam = strlen(palavras);

   printf("\nO tamanho da string palavra eh de %d caracteres.\n", tam);

   // entraa de dados
   printf("Digite algo: ");
   // aguarda a entrada do usuário
   fgets(palavras, 100, stdin);



   return 0;
} // end main