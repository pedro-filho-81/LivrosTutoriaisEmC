/**
 * Com criar uma matriz (array bidimencional)
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // matrizes de inteiros 3 por 3 com 9 elementos
   int matriz1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

   // cria matriz 3 por 3 com 7 elementos
   int matriz2[][3] = {1, 2, 3, 4, 5, 6, 7};

   // cria matriz 3 por 3 preenchida com zeros
   int matriz3[3][3] = {0};

   // cria uma matriz com números reais com
   // 5 linhas e 5 colunas
   float matriz4[5][5];

   // cria matriz de caracteres com 10 linhas 
   // e 15 colunas
   char matriz5[10][15];

   printf("\n\n");
   return 0;
} // end main