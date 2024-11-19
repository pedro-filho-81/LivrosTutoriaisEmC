/*
    Questão: 5.28 Invertendo dígitos. Escreva uma função que leia um  valor
    inteiro e retorne o número com seus dígitos invertidos. Por exemplo, dado
    o número 7631, a função deverá  retornar 1367.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 17/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
void inverteNumero( int numero );

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    int numero = 0;
    int resposta = 0;

    // cabeçalho
    printf( "\tINVERTENDO UM NÚMERO\n" );

    // entrada de dados
    printf( "Digite um número entre 1 e 99999: " );
    scanf( "%d", &numero );

    // enquando resposta diferente de -1 faça
    while( resposta != -1 )
    {
        // chama a função inverte número
        inverteNumero( numero );

        // pergunta se quer continuar
        printf( "\nDeseja continuar [ 1 sim / -1 não ]? " );
        scanf( "%d", &resposta );

        // se resposta igual a -1 sair do programa
        if( resposta == -1 ) break;

        // entrada de dados
        printf( "Digite um número entre 1 e 99999: " );
        scanf( "%d", &numero );

    } // fim while

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

// cria a função inverteNumero
void inverteNumero( int numero )
{
    // variáveis
    int a, b, c, d, e;

        // calculando e invertendo o número
        a = numero % 10 / 1;
        b = numero % 100 / 10;
        c = numero % 1000 / 100;
        d = numero % 10000 / 1000;
        e = numero / 10000 % 10000;

        // mostrando resultado
        // se o número for menor que dez
        if( numero < 10 )
            // imprima
            printf( "O número %d invertido é %d\n", numero, a );

        // se o número for maior que dez e menor que cem
        else if( numero >= 10 && numero < 100 )
            // imprima
            printf( "O número %d invertido é %d%d\n", numero, a, b );

        // se o número for maior ou igual a dez e menor que mil
        else if( numero >= 100 && numero < 1000 )
            // imprima
            printf( "O número %d invertido é %d%d%d\n", numero, a, b, c );

        // se o número for maior ou igual a mil e menor que dez mil
        else if( numero >= 1000 && numero < 10000 )
            // imprima
            printf( "O número %d invertido é %d%d%d%d\n", numero, a, b, c, d );

        // se o número for maior ou igual a dez mil e menor que 99999
        else if( numero >= 10000 && numero <= 99999 )
            // imprima
            printf( "O número %d invertido é %d%d%d%d%d\n", numero, a, b, c, d, e );

        // se não
        else
            // imprima
            printf( "Erro! número inválido!" );

} // fim função inverte número