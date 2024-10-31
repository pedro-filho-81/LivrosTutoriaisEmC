/**
 * 5) Faça um programa que leia uma string e a inverta. 
 * A string invertida deve ser armazenada na mesma 
 * variável. Em seguida, imprima a string invertida.
 * Backes, André. Linguagem C - Completa e Descomplicada 
 * (Portuguese Edition) (p. 140). GEN LTC. 
 * Edição do Kindle. 
 * 31/10/2024
 */
#include <stdio.h>
#include <string.h>
#define SIZE 50

int main()
{   
   // cria uma variável para string
   char palavra[SIZE];
   char copia[SIZE];
   int i = 0, j = 0;

   printf("\nEXIBE STRING DE TRAZ PARA FRENTE\n");
   // entrada de dados
   printf("Digite uma string: ");
   scanf("%50[^\n]", palavra); // entrada do usuário

   // exibe a string
   printf("String digitada: %s\n", palavra);

   printf("copia: ");

   // loop para inverter a string
   for ( i = strlen(palavra); i >= 0; i--)
   {
      // copia[i] = palavra[i];      
      // printf("%c", palavra[i]);
      copia[i] = palavra[i];
      j++;
   }
   
   printf("\ncopia: %s\n", copia);

   return 0;
} // end main