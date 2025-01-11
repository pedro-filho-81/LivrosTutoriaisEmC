/**
 * A função fgets() recebe três parâmetros de entrada: 
 * • str: a string a ser lida. 
 * 
 * • tamanho: o limite máximo de caracteres 
 * a serem lidos. 
 * 
 * • fp: a variável que está associada ao arquivo de 
 * onde a string será lida.
 * 
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 135). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>

int main()
{
   // string
   char str[20];

   printf("\nLendo STRING com FGETS");
   // entrada de dados
   printf("\nDigite seu nome completo: ");
   fgets(str, 20, stdin);

   // exibe resultado
   printf("\nVoce digitou: %s\n", str);

   printf("fgets(str, 20, stdin);");
   printf("\nA funcao fgets() recebe tres parametros de entrada:"
      "\n1 - str: a string a ser lida."
      "\n2 - tamanho: o limite maximo de caracteres a serem lidos."
       "\n3 - fp: a variavel que esta associada ao arquivo de onde \na string sera lida.");

   printf("\n\n");
   return 0;
} // end main