/*
   Questão: 3.25 Saída tabular. Escreva um programa que use o looping  para
   imprimir a tabela de valores a seguir. Use a sequência  de escape de
   tabulação, \t, na instrução printf para separar as colunas com tabulações.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edição do Kindle.
   Autor: Pedro Filho, 15/01/2021
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
   int num = 1;

   // cabeçalho
   printf( "\t N\t10*N\t100*N\t1000*N\n" );
   // loop while para contar de 1 até 10
   while( num <= 10 )
   {
      // imprimir
      printf( "\t%2d\t%3d\t%4d\t%5d\n", num, num * 10, num * 100, num * 1000 );

      // contador
      num++; // incrementa num

   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN