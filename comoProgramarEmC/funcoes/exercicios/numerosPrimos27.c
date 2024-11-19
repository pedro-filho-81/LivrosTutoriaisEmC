/*
    Questão: 5.27 Números primos. Um inteiro é considerado primo se  for divisível
    apenas por 1 e por ele mesmo. Por exemplo,  2, 3, 5 e 7 são primos, mas
    4, 6, 8 e 9 não são.  a) Escreva uma função que determine se um número  é primo.
    b) Use essa função em um programa que determine e  imprima todos os números
    primos entre 1 e 10000.  Quantos desses 10000 números você realmente  precisa
    testar antes de ter certeza de que encontrou  todos os primos?
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 15/11/2024
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int numerosPrimos( int numero );

// função principal
int main()
 {
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // loop para verifica quantos números primos tem até 10000
    for( int i = 1; i <= 10000; i++ ) {

        // chama a função números primos
        numerosPrimos( i );

    } // fim for

    // pular linha
    printf( "\n" );

    // pausar o sistema
    system( "pause" );

    // fim do programa
    return 0;

} // fim função main

// função números primos
int numerosPrimos( int numero )
{
    // variável
    int contador = 0;

    // loop para verificar se o número é primo
    for( int j = 1; j <= numero; j++ ) {

        // se número dividido por j for igual a zero
        if( numero % j == 0 )

            // contador soma 1
            contador++;

    } // fim for

    // se contador for maior que zero e menor do que 3
    if( contador > 0 && contador < 3 )
        // imprima o  número
        printf( "%7d ", numero );
} // fim função