#include <stdio.h>
#include <stdlib.h>

// O que é um String?
// uma String é uma sequência de caracteres
/**
 * O caractere que indica o fim da String é:
 * "\0" contra barra 0
 * exp: char vetor[17] = {"este é um exemplo"};
 * 17 é a quantidade máxima que o vetor comporta
 * só vai ser exibido até o (l) de (este é um exempl)\0
 * pois o último caractere sempre vai ser o \0
 * \0 que indica fim da string
 * sendo assim seu vetor deve sempre ter o tamanho maior 
 */

int main()
{
   // 1º) cria um vetor para armazenar uma 
   // sequência de caracteres
   // Um vetor do tipo char com nome palavras 
   // recebe uma string entre aspas duplas
   char palavras[100] = ("\nOi. Vamos aprender a programar com a linguagem C?\n\n");

   // variável
   int i = 0; // para while

   // exibe o conteúdo do vetor palavras
   printf("\nConteudo do vetor:%s", palavras);

   // entrada de dados (strigs) via teclado
   printf("Digite seu nome: ");
   /**
    * Usando a função fgets(nome do vetor/variável,
    * tamanho, stdin) stdin é a constante da linguagem C
    * deve-se usar essa função para ler strings do teclado.
    * fgets(nome do vetor, tamanho do vetor, entrada padrão(teclado));
    */
   // aguarda a entrada do usuário
   fgets(palavras, 100, stdin);

   // exibe o resultado
   printf("Ola! %s\n", palavras);

   // identificando o final de uma string
   // executa enquanto não encontrar o caractere '\0' fim da string
   while (palavras[i] != '\0')
   {
      // exibe o texto digitado até encontrar o caractere '\0' fim da string
      printf("%d = %c\n", i, palavras[i]);
      i++; // incrementa i em 1

   } // end while   

   return 0;

} // end main