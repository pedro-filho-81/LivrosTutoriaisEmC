/**
 *  Questão: 5.15 Cálculos de hipotenusa. Defina uma função
 * chamada hipotenusa que calcule o tamanho da hipotenusa  de
 * um triângulo retângulo quando os outros dois lados  são 
 * conhecidos. Use essa função em um programa para
 * determinar o tamanho da hipotenusa de cada um dos 
 * triângulos da tabela a seguir. A função deverá usar dois 
 * argumentos do tipo double e retornar a hipotenusa como  
 * um double. Teste seu programa com os valores de lado
 * especificados na Figura 5.18.
 * Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 153). 
 * Edição do Kindle.
 * @Pedro Filho, 10/02/2022
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// protótipo
double hipotenusa( double cat1, double cat2 );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   double cateto1 = 0;
   double cateto2 = 0;
   double resposta = 0;

   printf( "Números para aferição: ( 3, 4 ), ( 5, 12 ) e ( 8, 15 )\n" );

   // loop para repetir 3 vezes
   for( int i = 1; i <= 3; i++ ) { // início for

      // cabeçalho
      printf( "CÁLCULOS DE HIPOTENUSA\n" );

      // entrada de dados
      printf( "Cateto1 = " );
      scanf( "%lf", &cateto1 );

      printf( "Cateto2 = " );
      scanf( "%lf", &cateto2 );

      // resposta recebe o valor retornado da função hipotenusa
      resposta = sqrt( hipotenusa( cateto1, cateto2 ) );

      // imprime resultado
      printf( "Regra: a soma dos quadrados dos catetos"
             "\né igual ao quadrado da hipotenusa" );

      printf( "\nNormais: %.2lf + %.2lf = %.2lf\n",
             cateto1, cateto2, resposta );

      printf( "Quadrados: %.2lf + %.2lf = %.2lf\n\n",
             pow( cateto1, 2 ), pow( cateto2, 2 ), pow( resposta, 2 ) );

   } // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função hiponusa
double hipotenusa( double cat1, double cat2 )
{
   // retorne a soma dos quadrados dos catetos
   return pow( cat1, 2 ) + pow( cat2, 2 );
} // fim da função