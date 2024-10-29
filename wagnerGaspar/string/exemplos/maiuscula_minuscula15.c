/**
 * como converter uma string em maiúscula ou
 * minúscula usando as funções stdupr() e
 * função stdlwr()
 */
#include <stdio.h>
#include <string.h>
int main()
{
   // string
   char palavra[50] = {"Bom dia simpatia."};

   printf("\nCria a string:\nchar palavra[50] = {\"Bom dia simpatia.\"};");
   printf("\nExibe o texto da string: %s\n", palavra);

   // transforma a string em  maiúscula
   strupr(palavra);
   printf("\nColoca a string com letras maiuscula.\n");
   printf("strupr(palavra);\n");
   printf("String maiuscula: %s\n", palavra);

   // transforma a string em minúscula
   strlwr(palavra); // coloca a string minúscula
   printf("\nColoca a string com letras minuscula.\n");
   printf("strlwr(palavra);\n");
   printf("String minuscula: %s\n", palavra);

   return 0;
} // end main