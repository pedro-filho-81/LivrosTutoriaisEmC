/**
 * A função setbuf() preenche um buffer
 * com determinado valor, o buffer da entrada-padrão 
 * (stdin), ou seja, o teclado, é preenchido com o 
 * valor vazio (NULL). Um buffer preenchido com NULL é 
 * considerado limpo/vazio. O buffer da entrada-padrão 
 * (stdin), ou seja, o teclado, é preenchido com o 
 * valor vazio (NULL). Um buffer preenchido com NULL é considerado limpo/vazio.
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 136). 
 * GEN LTC. Edição do Kindle.  
 */
#include <stdio.h>

int main()
{
   // string
   char str[20];
   printf("\nDeclara e cria uma string\npara 20 caraceres.:\n\tchar str[20];\n");

   // limpa o buffer do teclado
   setbuf(stdin, NULL);

   printf("\n\tsetbuf(stdin, NULL);"
            "\nLimpa o buffer do teclado"
            "\ndeve ser colocado antes da \nentrada de dados.\n\tscanf(\"%%s\", str)\n\tgets(str)\n\tou fgets(str, 20, stdin);\n");

   printf("\nLendo STRING com FGETS");
   // entrada de dados
   printf("\nDigite seu nome completo: ");
   fgets(str, 20, stdin);

   // exibe resultado
   printf("\nVoce digitou: %s\n", str);

   printf("\tfgets(str, 20, stdin);");
   printf("\nA funcao fgets() recebe tres parametros de entrada:"
      "\n1 - str: a string a ser lida."
      "\n2 - tamanho: o limite maximo de caracteres a serem lidos."
       "\n3 - fp: a variavel que esta associada ao arquivo de onde \na string sera lida.");

   printf("\n\n");
   system("pause");
   return 0;
} // end main