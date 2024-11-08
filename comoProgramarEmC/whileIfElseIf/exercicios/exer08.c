/**
 * 3.8 Escreva um programa em C que use as instruções do 
 * Exercício 3.7 para calcular x elevado à potência y. O 
 * programa  deverá ter uma estrutura de controle de 
 * repetição while. 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 71). Edição do Kindle. 
 * 08/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  // localiza região
  setlocale(LC_ALL, "Portuguese" );

   //variáveis
   int x = 0; // valor a ser calculado
   int y = 0; // valor a ser elevado
   int i = 1; // valor da repetição
   int potencia = 1; // valor da potência
   
   // mostra cabeçalho
   printf( "{ POTENCIAÇÃO }\n" );
   
   // entrada de dados
   printf( "Digite um valor: " );
   scanf( "%d", &x ); // entrada pelo usuário
   
   printf( "x elevado a: " );
   scanf( "%d", &y ); // entrada pelo usuário
   
   // faça enquanto i for menor ou igual a y
   while( i <= y ) {
      potencia *= x; // calculando a potência de x
      i++; // incrementa 1 a i
   } // fim while
   
   // mostra o resultado
   printf( "%d elevado a %d = %d\n", x, y, potencia );

   // pula uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   return 0;

} // fim main