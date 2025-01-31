/**
 * fig06_02.c  
 * Initializing the elements of an array with 
 * an initializer list. 
 * Deitel, Paul; Deitel, Harvey. C How to Program: 
 * With Case Studies in Applications and Systems 
 * Programming, Global Edition (p. 302). 
 * Pearson Education. Edição do Kindle. 
 */
#include <stdio.h>

// function main begins program execution
int main()
{
   // n is an array of five integers
   int n[5] = {32, 27, 64, 18, 95};

   printf("%s%9s\n", "Element", "Value");

   // output contents of array n in tabular format
   for (size_t i = 0; i < 5; i++)
   {
      /* code */
      printf("%7d%8d\n", i, n[i]);
   } // end for 
} // end main