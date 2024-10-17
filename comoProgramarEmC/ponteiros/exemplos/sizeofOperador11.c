/**
 * Fig. 7.17: fig07_17.c  
 * Demonstrando o operador sizeof
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 225). Edição do Kindle. 
 */
#include <stdio.h>

int main()
{
   // variáveis
   char c;
   short s;
   int i;
   long l;
   float f;
   double d;
   long double ld;
   int array[20];
   int *ptr = array;

   printf("\n\tOperador SIZEOF\n");
   printf("sizeof c = %d byte\tsizeof(char) = %d byte"
          "\nsizeof s = %d\tsizeof(short) = %d bytes"
          "\nsizeof i = %d\tsizeof(int) = %d bytes"
          "\nsizeof l = %d\tsizeof(long) = %d bytes"
          "\nsizeof f = %d\tsizeof(float) = %d bytes"
          "\nsizeof d = %d\tsizeof(double) = %d bytes"
          "\nsizeof ld = %d\tsizeof(long double) = %d bytes"
          "\nsizeof array = %d bytes"
          "\nsizeof ptr = %d bytes\n\n",
          sizeof c, sizeof(char), 
          sizeof s, sizeof(short), 
          sizeof i, sizeof(int),
          sizeof l, sizeof(long),
          sizeof f, sizeof(float),
          sizeof d, sizeof(double),
          sizeof ld, sizeof(long double),
          sizeof array,
          sizeof ptr );

} // end main 