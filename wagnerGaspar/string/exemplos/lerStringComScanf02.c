#include <stdio.h>
#include <stdlib.h>

// aula129 o que é um String?
// uma String é uma sequência de caracteres
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

   // usando scanf() para ler uma string 
   // não precisa usar o & comercial antes do nome vetor
   // scanf() não verifica o tamanho da string digitada
   // scanf() ler uma String até encontrar o primeiro espaço
   /**
    * Forma padrão de usar:
    * scanf("%s", palavras);
    * */
   
   /**
    * essa é outra maneira de ler string com 
    * scanf("%100[^\n]", nome do vetor).
    *   
    * O valor (100) após o sinal % é a quantidade
    * máxima de caracteres que vai ser aceito
    * pelo vetor palavras (deve ser o tamanho do vetor)
    * 
    * [^\n] esses caracteres entre colchetes altera o
    * padrão do scanf() para ler os dados digitados
    * */
   scanf("%100[^\n]", palavras);
   
   // exibe o conteúdo do vetor palavras
   printf("Ola! %s\n\n", palavras);

   return 0;

} // end main