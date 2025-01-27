/**
 * 6.4.4 Somando os Elementos de um Array A Figura 6.4 
 * soma os valores contidos no array inteiro de cinco 
 * elementos a. O corpo da instrução for (linha 14) faz 
 * a totalização.
 * Deitel, Paul; Deitel, Harvey. C How to Program: With 
 * Case Studies in Applications and Systems Programming, 
 * Global Edition (p. 304). Pearson Education. 
 * Edição do Kindle.
 */

#include <stdio.h>
#define SIZE 5 // maximum size of array

// function main bigins program execution
int main()
{
   // simbolic constant SIZE can be used to specify array size
   // use an initializer list to initialize the array
   int a[SIZE] = {1,2,3,4,5};
   int total = 0; // sum of array

   // sum contents of array a
   for (size_t i = 0; i < SIZE; i++)
   { // set the values
      /* code */
      total += a[i];
   } // end for

   // display result
   printf("The total of a´s values is %d\n", total);
   
} // end m