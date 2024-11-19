//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

  // variáveis
  int SIZE = 14;
  int arrValores[ SIZE ] = {4, 3, 100, 44, 2, 1, 50, 98, 14, 7, 254, 12, 6 ,41};
  int auxiliar = 0;

  printf( "ORIGINAL\n");

  // IMPRIME ARRAY ORGANIZAl
  for( int i =0; i < SIZE; i++ )
  {
    printf( "%d ", arrValores[ i ] );
  }// fim for

  // LOOP PARA ORGANIZAR O ARRAY
  for( int passadas = 1; passadas < 8; passadas++ )
  {
    for( int i = 0; i < SIZE; i++ )
    {
      if(arrValores[ i ] > arrValores[ i + 1 ])
      {
        auxiliar = arrValores[ i ];
        arrValores[ i ] = arrValores[ i + 1 ];
        arrValores[ i + 1 ] = auxiliar;
      }
    }
  }

  printf( "\nARRAY ORGANIZADO\n");
  // IMPRIME ARRAY ORGANIZADO
  for( int i =0; i < SIZE; i++ )
  {
    printf( "%d ", arrValores[ i ] );
  }// fim for

	// pula uma linha
	printf("\n");

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main