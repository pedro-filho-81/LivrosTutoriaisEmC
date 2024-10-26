/**
 * A função strstr() retorna um ponteiro para a posição 
 * da primeira ocorrência de uma string em outra string.
 * A função strstr() é definida no <string.h>arquivo de 
 * cabeçalho.
 */
#include <stdio.h>
#include <string.h>

int main()
{
   // cria uma string
   char palavra[50] = {"Bom dia simpatia!"};
   char str[] = {"dia"};
   // cria um pponteiro
   char *ponteiro;

   printf("\nCria uma string:\nchar palavra[50] = {\"Bom dia simpatia!\"};");
   printf("\nCria outra string:\nchar str[] = {\"dia\"};");
   printf("\nToda string eh um vetor de caracteres");
   printf("\nDeclara um ponteiro:\nchar *ponteiro;\n");

   // procura pela string str dentro da string palavra
   // ponteiro recebe o valor retornado da função strstr()
   ponteiro = strstr(palavra, str);
   
   printf("\nA funcao strstr()\npesquisa se na string palavra"
            "\nexiste a string str:");
   printf("\nponteiro = strstr(palavra, str);");
   printf("\nSe verdade retorna %s\n", ponteiro);
   return 0;
} // end main