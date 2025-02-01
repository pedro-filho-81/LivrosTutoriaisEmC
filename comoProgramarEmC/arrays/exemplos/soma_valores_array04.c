/**
 * 1// fig06_04.c  
 * Computing the sum of the elements of an array. 
 * Deitel, Paul; Deitel, Harvey. C How to Program: With 
 * Case Studies in Applications and Systems Programming, 
 * Global Edition (p. 304). Pearson Education. 
 * Edição do Kindle. 
 */
#include <stdio.h>
#define SIZE 5

// function main begins program execution
int main()
{
   // n is an array of five integers
   int n[SIZE] = {32, 27, 64, 18, 95};
   int total = 0;

   printf("%s%9s\n", "Element", "Value");

   // output contents of array n in tabular format
   for (size_t i = 0; i < SIZE; i++)
   {
      /* code */
      printf("%7d%8d\n", i, n[i]);
   } // end for 

   for (size_t i = 0; i < SIZE; i++)
   {
      /* code */
      total += n[i]; 
   } // end for

   printf("Total = %d\n", total);
   
} // end main