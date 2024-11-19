/*
    Função:5.26 Números perfeitos. Um número inteiro é considerado  um número
    perfeito se a soma de seus fatores, incluindo 1 (mas não o próprio número)
    for igual ao próprio  número. Por exemplo, 6 é um número perfeito porque
      6  = 1 + 2 + 3. Escreva uma função perfect que determine se o parâmetro
      number é um número perfeito. Use  essa função em um programa que determine
      e imprima  todos os números perfeitos entre 1 e 1000. Imprima
      os  fatores de cada número perfeito para confirmar se o nú-  mero é
      realmente perfeito. Desafie o poder de seu computador testando
      números muito maiores que 1000.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 16/11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//protótipo
int perfeitos( int num );

int main()
{
    // seleciona o idioma português
    setlocale( LC_ALL, "Portuguese" );

    // variável
    int n = 0;

    // loop para pesquisar os números perfeitos
    for( int j = 1; j <= 10000; j++ )
    {
       // verificar se perfeitos são diferentes de 0 e 1
       if( perfeitos( j ) != 1 && perfeitos( j ) != 0 ) // se verdade
         // imprimir o número perfeito
         printf( "%d ", perfeitos( j ) );
    } // fim for

    // pula linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da função main

// function perfeitos
int perfeitos( int num )
{
   // variável para somar o resultado
   int soma = 0;
   // loop para o divisor do parametro num
   for( int i = 1; i < num; i++ )
   {
      // verificar se o módulo da divisão
      // do número é divisível por i é igual a zero
      if( num % i == 0 ) // se verdade
      {
         // somar esses número
         soma += i;

      } // fim if
   } // fim for
   // verificar se soma é igual ao número
   if( soma == num ) // se verdade
      // retornar a soma
      return soma;
   else // se não
      // retornar zero
      return 0;
} // fim função