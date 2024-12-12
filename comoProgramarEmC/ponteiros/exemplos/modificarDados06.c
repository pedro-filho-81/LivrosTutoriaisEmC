/**
 * /* Fig. 7.12: fig07_12.c
 * Tentando modificar dados por meio de um ponteiro não 
 * constante para dados constantes.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 218). Edição do Kindle. 
 */
#include <stdio.h>

// protótipo
void f(const int *xPtr);

int main()
{
   printf("\nFora de main criamos o procedimento:"
            "\n\tvoid f(const int *xPtr)"
            "\nQue tem como parametro um ponteiro:\n\tconst int *xPtr");
   
   // variável
   int y = 2;
   
   printf("\n\nEm main, Criamos a variavel:\n\tint y = 2;\ny recebe o valo 2\n");

   printf("\nEm main, Chama a funcao:\n\tf( y );\nQue recebe a variavel y\n");
   // função recebe o valor de y
   f( y );

   printf("\n\n");
   return 0;

} // end main

// function
// *xPtr não pode ser usado 
// para modificar o valor da
// variável a qual ele aponta
void f(const int *xPtr)
{
   // não se modifica O valor de ponteiro constante
   // valores que são aceitos para inicializar um
   // PONTEIRO - NULL, 0 (ZERO), E O ENDEREÇO.
   // *xPtr = 100;
   printf("\nO ponteiro *xPtr = 100;\nRecebe o valor 100");
   printf("\nEsta atribuicao gera erro:");
   printf("\n\terror: assignment of read-only location '*xPtr'");
   printf("\nUm ponteiro recebe como valor validos:\nNULL, 0 ZERO ou Um ENDERECO\n");
} // end f