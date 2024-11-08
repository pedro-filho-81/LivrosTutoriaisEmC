/**
 * Como criar um procedimento para imprimir uma string
 * na tela caracter por caracter
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// cria o procedimento imprimirString(char palavra[])
void imprimirString(char palavra[])
{
   setlocale(LC_ALL, "portuguese");
   
   int i = 0; // índice do vetor palavra

   // loop while => enquanto palavra não 
   // chegar ao final da string faça
   while (palavra[i] != '\0')
   {
      // exiba
      printf("%c", palavra[i]);

      // incrementa o índice da string palavra
      i++;
   } // end while

   printf("\n\n");
   
} // end imprimirString

int main()
{
   // string
   char vet[20] = {"Ola. Bom dia!"};

   printf("\nEXIBE A STRING COm A FUNÇÃO CRIADA\n");
   
   // chama a função imprimirString para exibir a string
   imprimirString(vet);

   return 0;
} // end main