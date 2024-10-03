/*
    6.10 Comissões de vendas. Use um array com subscrito único para resolver
    o problema a seguir. Uma empresa paga o  salário de seus vendedores com
    base em uma comissão. O  vendedor recebe R$ 200,00 por semana,
    e mais 9 por cento de suas vendas brutas nessa semana. Por exemplo, um
    vendedor, que totalize R$ 3.000,00 em vendas em uma  semana, receberá
    R$ 200,00 e mais 9 por cento de R$  3.000,00, ou seja, R$ 470,00.
    Escreva um programa em  C (usando um array de contadores) que determine
    quantos vendedores receberam salários dentro de cada um dos  seguintes intervalos
    (suponha que o salário de cada vendedor seja arredondado em um valor inteiro):
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 200). Edição do Kindle.
    Autor: Pedro Filho, 03/10/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 10
#define FREQ_SIZE 11

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // const
    const int salarioFixo = 200;

    // array
    int salario[ SIZE ];
    int valorComissao[ SIZE ];
    int frequencia[ FREQ_SIZE ] = {0};

    // variable
    int vendasBrutas = 0;

    // header
    printf( "\tPAGAMENTO DAS COMISSÕES\n" );

    // loop to add values to vector
    for( int valor = 0; valor < SIZE; valor++ )
    {
        // data input
        printf( "Informe valor das vendas brutas do vendedor %d R$ ", valor + 1 );
        scanf( "%d", &vendasBrutas ); // user input

        // calculation
        valorComissao[ valor ] = vendasBrutas * 9 / 100;

        // array receives current salary
        salario[ valor ] = salarioFixo + valorComissao[ valor ];

    } // end for

    printf( "\n\tTABELA DE SALÁRIO" );

    // header
    printf( "\n%20s%13s%13s", "R$ Fixo", "R$ Comissão", "R$ Salário\n" );

    // loop to show vector value
    for( int valor = 0; valor < SIZE; valor++ )
    {
        printf( "Vendedor %d %6d%12d%15d\n",
                    valor, salarioFixo, valorComissao[ valor ], salario[ valor ] );
    } // end for

    // loop to add value to the frequencia vector
    for( int valor = 0; valor < SIZE; valor++ )
        ++frequencia[ salario[ valor ] / 100 ];

    printf( "\n\tBARRA DE ASTERISCO\n" );

    // loop to show bar char
    for( int asterisco = 0; asterisco < FREQ_SIZE; asterisco++ )
    {
        if( asterisco == 0 )
        {
            printf( "  R$ 200 - R$ 299:  " );
        } // end if
        else if( asterisco == 10 )
        {
            printf( "          R$ 1000:  " );
            for( int maiorOuIgual = 0; maiorOuIgual < SIZE; maiorOuIgual++ )
                if( salario[ maiorOuIgual ] >= 1100 )
                    printf( "*" );
        } // end else if
        else
        {
            if( asterisco >= 3 )
                printf( "  R$ %d - R$ %d:  ", asterisco * 100, asterisco * 100 + 99  );
        } // end else

        for( int bar = 0; bar < frequencia[ asterisco  ]; bar++ )
        {
            printf( "*" );
        }

        if( asterisco >= 2 )
            printf( "\n" ); // next line

    } // end for

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main