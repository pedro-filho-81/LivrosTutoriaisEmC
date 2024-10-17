/**
 * Fig. 7.16: fig07_16.c  
 * A aplicação de sizeof a um nome de array retorna
 * o número de bytes no array.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 224). Edição do Kindle. 
 */
#include <stdio.h>

// prototipo
size_t getSizeof( float *ptr);

int main()
{
   float array[20]; // cria array

   printf("O numero de byte no array eh: %d"
            "\nO numero de byte retornado de getSizeof eh: %d\n", sizeof(array), getSizeof(array));


} // end main

// function
size_t getSizeof( float *ptr)
{
   return sizeof(*ptr);
} // end getSizeof