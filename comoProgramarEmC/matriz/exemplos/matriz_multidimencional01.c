#include <stdio.h>
#include <stdlib.h>

// prototipo
void printArray(const int matriz[][3]);

int main()
{
   // matrizes
   int array1[2][3] = {{1,2,3}, {4,5,6}};
   int array2[2][3] = {1,2,3,4,5};
   int array3[2][3] = {{1,2}, {4}};

   printf("Valores em array1 por linha são:\n");
   printArray(array1);
   printf("Valores em array2 por linha são:\n");
   printArray(array2);
   printf("Valores em array3 por linha são:\n");
   printArray(array3);

   return 0;
} // end main

void printArray(const int matriz[][3])
{
   for (int i = 0; i <= 1; i++)
   {
      for ( int j = 0; j <= 2; j++)
      {
         printf("%5d ", matriz[i][j]);
      } // end for coluna
      printf("\n");
   } // end for linha
   printf("\n");
} // end printArray