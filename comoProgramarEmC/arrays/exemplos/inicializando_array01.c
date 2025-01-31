/**
 * 1// fig06_01.c  
 * 2// Initializing the elements of an array to zeros. 
 * Deitel, Paul; Deitel, Harvey. C How to Program: With Case Studies in 
 * Applications and Systems Programming, Global Edition (p. 301). 
 * Pearson Education. Edição do Kindle. 
 */
#include <stdio.h>

// function main begins program execution
int main()
{
   // n is an array of five integers
   int n[5];

   // set elements of array n to 0
   for (size_t i = 0; i < 5; i++)
   {
      /* code */
      n[i] = 0; // set elements at location i to 0
   } // end for

   printf("%s%9s\n", "Element", "Value");

   // output contents of array n in tabular format
   for (size_t i = 0; i < 5; i++)
   {
      /* code */
      printf("%7d%8d\n", i, n[i]);
   } // end for 
} // end main