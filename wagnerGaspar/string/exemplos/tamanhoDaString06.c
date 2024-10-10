#include <stdio.h>
#include <stdlib.h>

// O que é um String?
// uma String é uma sequência de caracteres
/**
 * O caractere que indica o fim da String é:
 * '\0' contra barra zero
 * exp: char vetor[17] = {"este é um exemplo"};
 * 17 é a quantidade máxima que o vetor comporta
 * só vai ser exibido até o (l) de (este é um exempl)
 * após o (l) vem o contra barra zero '\0' indicando
 * o fim da string
 * pois o último caractere sempre vai ser o \0
 * \0 que indica fim da string
 * sendo assim seu vetor deve sempre ter o tamanho
 * maior que o texto digitado ou informado
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
   int size =0; // para obter o tamanho da string

   // exibe o conteúdo do vetor palavras
   printf("\nConteudo do vetor:%s", palavras);

   // entrada de dados (strigs) via teclado
   printf("Digite qualquer coisa: ");
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
      // exibe o texto digitado até encontrar o caractere '\0'
      printf("%d = %c\n", i, palavras[i]);
      i++; // incrementa i em 1
      size++; // informa o tamanho da string
   } // end while   

   // exibe a string e seu tamanho com o caractere '\0'
   printf("A string %s tem %d caracteres contando\ncom o caractere da tecla ENTER '\\n'.\n\n", palavras, size);

   // loop para retirar o ENTER do final da string
   size = 0; // inicializa o tamanho com zero
   // enquanto palavras diferente do final da string
   while (palavras[size] != '\0') // faça
   {
      // verificar se o vetor palavras é igual a enter
      if (palavras[size] == '\n') // se verdade
      {
         // a string recebe o caractere fim de string
         palavras[size] = '\0';
      } // end if
      size++; // incrementa o tamanho em 1      
   } // end while

   size = 0; // inicializa o tamanho
   // loop para mostrar a string digitada sem
   // contar o caractere fim de string '\0'
   while (palavras[size] != '\0')
   {
      // exibe o texto
      printf("%d = %c\n", size, palavras[size]);
      size++; // incrementa size
   } // end while
   
   // exibe resultado
   printf("\nA string %s\ntem %d caracteres\nsem o caractere da tecla ENTER '\\n'\n\n", palavras, size);

   return 0;

} // end main