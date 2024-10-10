#include <stdio.h>
#include <stdlib.h>

// O que é um String?
// uma String é uma sequência de caracteres
// Lendo uma string do teclado usando 
// a função gets(nome do vetor);

int main()
{
   // 1º) cria um vetor para armazenar uma 
   // sequência de caracteres
   // Um vetor do tipo char com nome palavras 
   // recebe uma string entre aspas duplas
   char palavras[] = ("\nOi. Vamos aprender a programar com a linguagem C?\n\n");

   // exibe o conteúdo do vetor palavras
   printf("%s", palavras);

   // entrada de dados (strigs) via teclado
   printf("Digite seu nome: ");
   /**
    * Usando a função gets(nome do vetor/variável)
    * deve-se evitar usar essa função.
    */
   gets(palavras);

   // exibe o resultado
   printf("Ola! %s", palavras);

   return 0;

} // end main