/**
 * Cria uma matriz para trabalhar com string
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   // cria matriz
   char nomes[5][25];
   int i = 0, count = 5;

   printf("\nCADASTRO DE CLIENTES\n");

   // loop para adicionar nomes
   for ( i = 0; i < count; i++)
   {
      // entrada de dados
      printf("Digite o nome na posicao %d: ", i + 1);
      scanf(" %25[^\n]", nomes[i]); // entrada do usuário
   } // end for

   // loop para exibir os nomes digitados
   for ( i = 0; i < count; i++)
   {
      // exibe os nomes na tela
      printf("\nNome na posicao %d: %s", i + 1, nomes[i]);
   } // end for    
   
   return 0; // end programa
} // end main