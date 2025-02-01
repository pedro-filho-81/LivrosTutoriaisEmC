/**
 * fig06_03.c  
 * Initializing the elements of array s to the even 
 * integers from 2 to 10. 
 * Deitel, Paul; Deitel, Harvey. C How to Program: With 
 * Case Studies in Applications and Systems Programming, 
 * Global Edition (p. 303). Pearson Education. 
 * Edição do Kindle. 
 */
#include <stdio.h>
#define SIZE 5 // maximum size of array

// function main begins program execution
int main()
{
   // simbolic constant SIZE 
   // can be use to specify array size
   int s[SIZE] = {0}; // array s has SIZE elements

   // set the values
   for (size_t i = 0; i < SIZE; i++)
   {
      /* code */
      s[i] = 2 + 2 * i; // add values to array
   } // end for

   printf("%s%9s\n", "Element", "Value");

   // output contents of array n in tabular format
   for (size_t i = 0; i < SIZE; i++)
   {
      /* code */
      printf("%7d%8d\n", i, s[i]);
   } // end for 
} // end main