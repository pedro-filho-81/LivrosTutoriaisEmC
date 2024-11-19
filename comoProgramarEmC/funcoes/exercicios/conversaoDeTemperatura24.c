/*
   Quest�o: 5.24 Convers�es de temperatura. Implemente as seguintes fun��es
   com inteiros:  a) Fun��o celsius retorna o equivalente Celsius de  uma
   temperatura em Fahrenheit.  b) Fun��o fahrenheit retorna o equivalente
   Fahrenheit de uma temperatura em Celsius.  c) Use essas fun��es para escrever
   um programa  que imprima gr�ficos mostrando os equivalentes  em Fahrenheit
   de todas as temperaturas Celsius  de 0 a 100 graus, e os equivalentes em
   Celsius  de todas as temperaturas fahrenheit de 32 a 212  graus.
   Imprima as sa�das em um formato tabular  que reduza o n�mero de linhas de
   sa�da enquanto continua sendo leg�vel.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edi��o do Kindle.
   Autor: @Pedro Filho, 12/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipos
float celcius( float fahrenheit );
float fahrenheit( float celcius );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   float cel = 0;
   float fah = 0;

   printf( "CONVERS�O DE TEMPERATURAS\n" );

   // entrada de dados
   printf( "Digite a temperatura em celcius: " );
   scanf( "%f", &cel );

   // entrada de dados
   printf( "Digite a temperatura em fahresheit: " );
   scanf( "%f", &fah );

   // chama a fun��o fahrenheit
   printf( "\nA temperatura de %.1f�C equivale a %.1f�F\n",
          cel, fahrenheit( cel ) );

   // chama a função fahrenheit
   printf( "\nA temperatura de %.1f�F equivale a %.1f�C\n",
          fah, celcius( fah ) );

   printf( "\n%s%12s\n", "Celcius", "Fahrenheit" );

   // loop para tabela celcius para fahrenheit
   for( int i = 0; i <= 100; i += 10 ) {
      printf( "%4dC%10.0fF\n", i, fahrenheit( i ) );
   }
   // puar linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o fahrenheit
float fahrenheit( float celcius )
{
   // retorna o valor emfahrenheit
   return celcius * 1.8 + 32;
} // fim fun��o

// fun��o celcius
float celcius( float fahrenheit )
{
   // retorna o valor em celcius                                                                                    ,
   return ( fahrenheit - 32 ) / 1.8;
}