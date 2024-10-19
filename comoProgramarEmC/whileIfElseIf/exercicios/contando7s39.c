/* EXE: 3.39 Contando 7s. Escreva um programa que leia um
    inteiro e determine e imprima quantos dígitos no inteiro são algarismos 7.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 77).  . Edição do Kindle.
    Pedro Filho, 19/08/2020 */
#include <stdio.h>
#include <locale.h>

// função principal
int main() {

    // para o idioma português
    setlocale(LC_ALL, "Portuguese" );

    //variáveis
    int num = 0; // para número do usuário
    int b = 0; // recebe o resto da divisão
   int sete = 0; // contador para o número sete

   // entrada de dados
   printf( "Digite um número: " );
   scanf( "%d", &num ); // entrada de dados do usuário

    // faz enquanto num maior que zero
    while(  num > 0 ) {

        b = num % 10; // separa o resto do número
        num /= 10; // divide o número por 10
        printf ( "%d ", b ); // mostra o resto do número

        if( b == 7 ){ // verifica se tem o número sete
            sete++; // conta quantos setes foram encontrados
        } // fim if

    } // fim while

    // mostra o resultado
    printf( "\nPossui %d sete(s).",  sete );

   printf( "\n" ); // pula linha
   system( "pause" );
   return 0; // fim do programa

} // fim main