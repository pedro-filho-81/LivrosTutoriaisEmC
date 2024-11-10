/**
 * Converte uma string em maiúscula com toupper() 
 * e minúscula com tolower()
 * 10/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// procedimentp maiúscula
void maiuscula(char str1[], char str2[])
{
   // variável
   int i = 0;

   // enquanto str1[] for diferente de 
   // final da string'\0'
   while (str1[i] != '\0')
   {
      str2[i] = toupper(str1[i]);
      i++;
   } // end while
   str2[i] = '\0';
} // end maiuscula

// procedimentp minúscula
void minuscula(char str1[], char str2[])
{
   // variável
   int i = 0;

   // enquanto str1[] for diferente de final da string'\0'
   while (str1[i] != '\0')
   {
      str2[i] = tolower(str1[i]);
      i++;
   } // end while
   str2[i] = '\0';
} // end minúscula

int main()
{
   // arrays
   char str1[] = {"Ola! Bom dia simpatia."};
   char str2[50];

   // cabeçalho
   printf("\nEXIBE STRINGS Em mAIUSCULA e mINUSCULA");
   printf("\nString original: %s\n", str1);

   maiuscula(str1, str2);
   printf("String maiuscula com toupper(): %s\n", str2);

   minuscula(str1, str2);
   printf("String minuscula com tolower(): %s\n", str2);   

   printf("\n");
   
   return 0;
} // end main