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
   char palavra[SIZE]; // original
   char copia[SIZE]; // invertida
   int i = 0; // para for
   int tam = 0; // início for inverte
   int j = 0; // índice da cópia

   printf("\nEXIBE STRING DE TRAZ PARA FRENTE\n");
   
   // entrada de dados
   printf("Digite uma string: ");
   scanf("%50[^\n]", palavra); // entrada do usuário

   // exibe a string
   printf("String digitada: %s\n", palavra);

   // tamanho recebe o tamanho da string palavra
   tam = strlen(palavra); // tamanho da string digitada

   // loop para inverter a string
   for ( i = tam - 1; i >= 0; i--)
   {
      // cópia recebe a palavra invertida
      copia[j] = palavra[i];
      j++; // incrementa j
   } // end for

   copia[j] = '\0'; // cópia recebe fim da string

   // exibe a cópia
   printf("\ni = %d\nj = %d\ncopia: %s\n", i, j, copia);

   return 0; // programa ok

} // end main