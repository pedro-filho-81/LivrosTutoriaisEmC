/**
 * Copiando string com a função strcpy() 
 * strcpy(string_destino, string_a_ser_copiada);
 * strcpy(str1, str2);
 **/
#include <stdio.h>
#include <string.h>

int main()
{
   // vetores
   // declara, cria e inicializa uma String
   char palavras[50] = {"Estou aprendendo a programar com a linguagem C."};
   // declara, cria e incializa outra string
   // que vai receber a cópia do vetor palavras
   char copia[50] = {"Serei uma copia."};
   
   printf("\nCopiando string:\n");
   printf("char palavras[50] = {\"Estou aprendendo a programar com a linguagem C.\"};");
   printf("\nchar copia[50] = {\"Serei uma copia.\"};");
   printf("\ncopia[50] antes: %s\n", copia);

   // exibe o resultado
   printf("\nstrcpy(copia, palavras);\ncopia recebe os valores de palavras.\n");
   strcpy(copia, palavras);
   printf("copia[50] depois de strcpy():\n%s\n\n", copia);

   return 0;

} // end main