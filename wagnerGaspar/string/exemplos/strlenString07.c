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

   // retirando a tecla entre da contagem dos caracteres
   i = 0; // inicia a contagem 
   // enquanto palavras diferente de fim de string
   while (palavras[i] != '\0') // faça
   {
      // se palavras igual a enter \n
      if (palavras[i] == '\n') // se verdade
      {
         // palavras recebe o caractere fim da string
         palavras[i] = '\0'; 
      } // end if
      i++; // incrementa i      
   } // end while
   
   // exibe o resultado
   printf("O texto digitado tem %d caracteres.", strlen(palavras));

   return 0; // programa ok
} // end main