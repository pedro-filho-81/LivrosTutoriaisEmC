/**
 * Passa argumentos para uma função por valor
 * 1 Fig. 7.6: fig07_06.c  
 * 2 Cubo de uma variável usando chamada por valor
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 212). Edição do Kindle. 
 * 11/10/2024
 */
#include <stdio.h>
#include <stdlib.h>

// prototipo de função
int cubeBYValue( int n );

int main()
{
   // variável
   int number = 5; // number recebe 5
   
   printf("\nCubo de uma variavel\nusando a chamada por valor");
   printf("\nint number = 5");
   // exebe o resultado
   printf("\nO valor original de number eh: %d\n", number);

   // number recebe o novo valor retornado 
   // pela função cubeByValue
   number = cubeBYValue( number );

   printf("Passando o valor original para funcao.\n");
   printf("number = cubeByValue( number );\n");
   // exibe o resultado
   printf("O novo valor de number eh: %d\n\n", number);

   return 0;

} // end main

// function cubeByValue
int cubeBYValue( int n )
{
   // retorna n ao cubo
   return n * n * n;
} // end cubeByValue