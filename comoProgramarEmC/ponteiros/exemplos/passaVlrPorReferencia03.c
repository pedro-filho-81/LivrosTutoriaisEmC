/**
 * Calcula o cubo da variável usando chamada
 * por referência com argumento ponteiro
 * 1 Fig. 7.7: fig07_07.c  
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 212). Edição do Kindle. 
 * 11/10/2024
 */
#include <stdio.h>
#include <stdlib.h>

// prototipo de função
// diz ao compilado que existe ou
// vai existir uma função com esse nome
// e com esye parâmetro (int *nPtr)
int cubeBYReference( int *nPtr );

int main()
{
   // variável
   int number = 5; // number recebe 5
   
   printf("\nCubo de uma variavel\nusando a passagem por suposta referencia.");
   printf("\nCria a variável:\nint number = 5");

   // exebe o resultado
   printf("\nO valor original de number eh: %d\n", number);

   /** 
    * A função cubeByReference
    * recebe como atributo o
    * endereço da variável number
   */
   // cubeBYReference( &number );

   printf("Passando o endereço da variavel original\npara funcao por referencia.\n");
   printf("cubeByReference( &number );\n");
   // exibe o resultado
   printf("O novo valor de number eh: %d\n\n", number);

   return 0;

} // end main

/*
   A função abaixo não existe

   // function cubeByValue
   int cubeBYReference( int *nPtr )
   {
      // retorna n ao cubo
      *nPtr = *nPtr * *nPtr * *nPtr;
   } // end cubeByReference
*/