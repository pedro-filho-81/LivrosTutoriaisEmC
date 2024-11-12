/**
 * Como converter número para texto na
 * Linguagem C
 * Como utilizar o valor digitado pelo usuário
 * na configuração do da função scanf(), para
 * delimitar a quantidade máxima de caracteres
 * que podem ser lidos do teclado.
 * 10/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   // strings
   char str1[10] = {"%"}, str2[10];

   // variável
   int tam = 0;;

   // entrada de dados
   printf("Digire o tamanho do vetor: ");
   scanf("%d", &tam);
   scanf("%c");

   // sprintf(str2, "%d[^\n], tam");
   snprintf(str2, 10, "%d[^\n], tam");
   strcat(str1, str2);

   printf("str1 = %s\n", str1);
   printf("str2 = %s\n", str2);

   char palavra[tam];
   printf("Digite uma frase: ");
   scanf(str1, palavra);
   printf("%s\n", palavra);

   return 0;
} // end main