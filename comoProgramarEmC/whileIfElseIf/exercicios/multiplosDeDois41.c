/*
   Questão: 3.41 Múltiplos de 2 com um loop infinito. Escreva um programa que
   continue imprimindo os múltiplos do inteiro 2,  a saber 2, 4, 8, 16, 32, 64
   e assim por diante. Seu loop não  deverá terminar (ou seja, você deverá criar
   um loop infinito). O que acontece quando você executa esse programa?
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edição do Kindle.
   Autor: @Pedro Filho, 19/01/2021
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

   // cria variável
   int multiplos = 2;
   int contador = 1;

   // imprima 21
   printf( "2 " );

   // LOOP INFINITO DOS MULTIPLOS DE 2
   while( 1 ) {

      // calcúlo dos multiplos conforme exemplo.
      multiplos *= 2;

      // imprima os multiplos
      printf( "%d ", multiplos );
      
      multiplos++;
   
   } // fin while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN