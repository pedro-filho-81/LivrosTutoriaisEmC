/* Função: 5.22 Separando dígitos. Escreva segmentos de programa que realizem,
   cada um, o seguinte:
   a) O cálculo da parte inteira do quociente quando o inteiro a é dividido pelo inteiro b.
   b) O cálculo do módulo inteiro quando o inteiro a é dividido pelo inteiro b.
   c) Use as partes do programa desenvolvidas em a) e b) para escrever uma função
   que peça um inteiro entre 1 e 32767 e o imprima como uma série de dígitos, com
   dois espaços entre cada dígito. Por exemplo, o inteiro 4562 deverá ser impresso como: 4  5  6  2.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).  . Edição do Kindle.
   Autor: Pedro Filho, 12/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipos
void separar_digitos( int num );

// função principal
int main()
{
   // seleciona o idioma Português
   // possibilita o uso de (ç, ã, é, etc.).
   setlocale(LC_ALL, "Portuguese" );

   // variável
   int n = 0;

   // entrar com os dados
   printf( "Digite um inteiro entre 1 e 32767: " );
   scanf( "%d", &n );

   // chamar a função separar digitos
   separar_digitos( n );

   printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// função separar_digitos
void separar_digitos( int num )
{
   // variáveis
   int a, b, c, d, e;

      // calcular
      a = num / 1 % 10;
      b = num / 10 % 10;
      c = num / 100 % 10;
      d = num / 1000 % 10;
      e = num / 10000 % 10;

       printf( "\t%d  %d  %d  %d  %d", e, d, c, b, a );
} // separa digitos