/* Exercício 5.11
/* Função:
   Pedro Filho, 06/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float arredonda_int( float x );
float arredonda_deci( float x );
float arredonda_cente( float x );
float arredonda_mile( float x );

// função principal
int main()
{
   setlocale(LC_ALL, "Portuguese" );

   // var
   float n = 0;
   printf( "Digite um número: " );
   scanf( "%f", &n );
   printf( "%f Inteiro = %.0f\n", n, arredonda_int( n ) );
   printf( "%f Decimal = %.3f\n", n, arredonda_deci( n ) );
   printf( "%f Centésimo = %.3f\n", n, arredonda_cente( n ) );
   printf( "%f Milésimo = %.3f\n", n, arredonda_mile( n ) );
    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main


float arredonda_int( float x )
{
   return floor( x + .5 );
}
float arredonda_deci( float x )
{
   return floor( x * 10 + .5 ) / 10;
}
float arredonda_cente( float x )
{
   return floor( x * 100 + .5 ) / 100;
}
float arredonda_mile( float x )
{
   return floor( x * 1000 + .5 ) / 1000;
}