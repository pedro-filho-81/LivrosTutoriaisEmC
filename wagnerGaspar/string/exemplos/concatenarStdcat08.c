/**
 * aula 133: 
 * Concatenando duas Strings usando a função stdcat(str1, str2)
 * Concatenar = juntar, unir. 
 * a função strcat(str1, str2)
 * junta a segunda string na primeira
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   // cria 2 strings
   char str1[] = {"\nBom "};
   char str2[] = {"dia\n"};

   printf("Concatenacao com strcat()\n");
   printf("Cria duas Strings:");
   printf("\nchar str1[] = {\"\\nBom \"};");
   printf("\nchar str2[] = {\"\\ndia\\n\"};");

   // juntando duas strings
   // str2 é colocado no final da string str1
   // str2 é concatenado no final da string str1
   strcat(str1, str2);
   printf("\nchama a funcao:\nstrcat(str1, str2);");
   // exibe resultado
   printf("\nExibindo str1 apos a funcao strcat(): %s\n", str1);
   
   return 0;
} // end main