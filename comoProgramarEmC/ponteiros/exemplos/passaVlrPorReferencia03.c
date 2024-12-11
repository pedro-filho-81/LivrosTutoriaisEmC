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

   printf("\nFUNCAO PASSAGE POR REFERENCIA\n");

   printf("Antes de main, cria a funcao:\n"
         "Que tem como parametro um ponteiro\npara inteiro *nPtr\n"
         "\tint cubeBYReference( int *nPtr );\n");
   
   printf("Em main, Cria a variável:\n\tint number = 5\nQue eh inicializada com o valor 5.\n");

   // exebe o resultado
   printf("\nO valor original de number eh: %d\n", number);

   /** 
    * A função cubeByReference
    * recebe como atributo o
    * endereço da variável number
   */
   printf("Em main, chamamos a função:\n"
            "\tcubeBYReference( &number )\n"
            "E passamos como atributo &number\n"
            "O endereco da variavel.\n");
   
   cubeBYReference( &number );

   printf("\nA funcao processa e exibe:\n");

   // exibe o resultado
   printf("O novo valor de number eh: %d\n\n", number);

   return 0;

} // end main

   // function cubeByValue
   int cubeBYReference( int *nPtr )
   {
      // retorna n ao cubo
      *nPtr = *nPtr * *nPtr * *nPtr;
   } // end cubeByReference