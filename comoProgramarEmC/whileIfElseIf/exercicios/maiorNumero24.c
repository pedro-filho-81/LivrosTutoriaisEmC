/*
   Questão:  3.24 Ache o número maior. O processo de achar o número  maior
   (ou seja, o máximo de um grupo de números)  é usado com frequência nas
   aplicações de computador.  Por exemplo, um programa que determina o vencedor
   de uma disputa de vendas lerá o número de unidades  vendidas por vendedor.
   O vendedor que tiver vendido  mais unidades vence a disputa.
   Escreva um programa  em pseudocódigo e depois um programa que leia uma
   série de 10 números, determine e imprima o maior dos  números.
   [Dica: seu programa deverá usar três variáveis  da seguinte forma]:
   contador: Um
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edição do Kindle.
   Autor: Pedro Filho, 17/01/2021
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

   // variáveis
   int contador = 1; // para o loop
   int num = 0; // para a entreda do usuário
   int maior = 0; // para achar o maior

   // cabeçalho
   printf( "\tENCONTRE O MAIOR NÚMERO\n" );

   //enquanto contador menor ou igual a dez faça
   while( contador <= 10 )
   {
      // entrada de dados
      printf( "Digite um número: " ); // prompt
      scanf( "%d", &num );

      // verificar se contador igual a 1 maior recebe num
      if( contador == 1 )
      {
         // maior recebe num;
         maior = num;
      } // fim if

      // se num maior que maior
      if( num > maior ) {

         // maior recebe num
         maior = num;

      }  // fim if

      // incrementa contador
      contador++;

   } // fim while

   // imprime
   printf( "O maior valor é %d\n\n", maior );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN