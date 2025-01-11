/**
 * 1) Faça um programa que leia uma string e a imprima na tela.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 139). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>

int main()
{
   // string
   char str[50] = "Imprimindo a string na tela.";

   // resultado
   printf("\nString eh um vetor de caracteres.:");
   
   printf("\nDeclara:\n\tchar str[],"
            "\ncria:\n\tchar str[50]"
            "\ninicializa uma string:\n\tchar str[50] = \"Imprime uma string na tela.\";");

   printf("\ne imprime:\n\tprintf(\"String:%%s\", str);");
   
   printf("\nA String na tela:\n\t%s\n", str);

   printf("\n\n");
   return 0;
} // end main