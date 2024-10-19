/*
   Questão: 3.33 Quadrado de asteriscos. Escreva um programa que  leia
   o lado de um quadrado e depois exiba esse quadrado a partir de asteriscos.
   Seu programa deverá funcionar  para quadrados de todos os tamanhos
   de lado entre 1 e  20. Por exemplo, se o programa ler um tamanho 4, ele
   deverá exibir.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edição do Kindle.
   Autor: @Pedro Filho, 18/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria variáveis
   int linha = 1;  // para linha
   int coluna = 0; // para coluna
   int num = 0; // define o tamanho da linha e coluna

   // entrada de dados
   printf( "Informe o tamanho do quadrado: " ); // prompt
   scanf( "%d", &num );

   // enquanto linha menor que num
   while( linha <= num ) {

      // inicializando coluna
      coluna = 1;

      // enquanto coluna menor que num
      while( coluna <= num ) {

         // imprime
         printf( "* " );

         // incremento
         coluna++;

      }  // fim while coluna

      // incremento
      linha++;

      // pula linha
      printf( "\n" );

   } // fim while linha

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN