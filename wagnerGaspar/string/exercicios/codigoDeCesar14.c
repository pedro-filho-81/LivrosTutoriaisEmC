/**
 * 14) O código de César é uma das técnicas de 
 * criptografia mais simples e conhecidas. É um tipo 
 * de substituição no qual cada letra do texto é 
 * substituída por outra, que se apresenta n posições 
 * após ela no alfabeto. Por exemplo, com uma troca 
 * de três posições, a letra A seria substituída por 
 * D, B se tornaria E e assim por diante. 
 * Escreva um programa que faça uso desse código de 
 * César para três posições. Entre com uma string e 
 * imprima a string codificada. Exemplo: String: a 
 * ligeira raposa marrom saltou sobre o cachorro 
 * cansado. Nova string: d oljhlud udsrvd pduurp 
 * vdowrx vreuh r fdfkruur fdqvdgr
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 140). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{  
   // STRING
   char palavra[100];

   // variáveis
   int i = 0;

   printf("\nCODIGO DE CESAR\n");

   // entrada de dados
   printf("Digite uma palavra: ");
   scanf(" %100[^\n]", palavra);

   printf("\nPalavra codificada: ");

   // enquanto a string diferente 
   // do fim da string faça
   while (palavra[i] != '\0')
   {
      // exibe os caracteres da strint
      // três caracteres a frente
      printf("%c", palavra[i] + 3);
      // incrementa o índice da string
      i++;
   } // end while

   // adiciona o fim da string
   palavra[i] = '\0';

   printf("\n\n");
   
   return 0; // programa ok

} // end main