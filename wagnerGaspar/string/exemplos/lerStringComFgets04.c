#include <stdio.h>
#include <stdlib.h>

// O que é um String?
// uma String é uma sequência de caracteres

// Lendo uma string do teclado usando 
// a função fgets(nome do vetor(arquivo), tamanho, stdin) 
// são os parâmetros obrigatorios;
// stdin (entrada padrão teclado) constante da linguagem C
// Por padrão essa função foi desenvolvida para ler arquivos

int main()
{
   // 1º) cria um vetor para armazenar uma 
   // sequência de caracteres
   // Um vetor do tipo char com nome palavras 
   // recebe uma string entre aspas duplas
   char palavras[] = ("\nOi. Vamos aprender a programar com a linguagem C?\n\n");

   // exibe o conteúdo do vetor palavras
   printf("\nConteudo do vetor:%s", palavras);

   // entrada de dados (strigs) via teclado
   printf("Digite seu nome: ");
   /**
    * Usando a função fgets(nome do vetor/variável,
    * tamanho, stdin) stdin é a constante da linguagem C
    * deve-se usar essa função para ler strings do teclado.
    */
   fgets(palavras, 100, stdin);

   // exibe o resultado
   printf("Ola! %s\n", palavras);

   return 0;

} // end main