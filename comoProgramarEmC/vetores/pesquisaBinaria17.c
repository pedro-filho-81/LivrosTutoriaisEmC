#include <stdio.h>
#include <stdlib.h>

#define SIZE 15

// protótipos
int binarySearch(const int vetor[], int searchKey, int low, int high);
void printHeader(void);
void printRow(const int vetor[], int low, int mid, int high);

int main()
{
   // vetor
   int vetor[SIZE];

   // variáveis
   int i;
   int key;
   int result;

   // loop para adicionar valor
   for ( i = 0; i < SIZE; i++)
   {
      vetor[i] = 2 * i;
   } // end for

   // entrada de dados
   printf("Digite um valor entre 0 e 28: ");
   scanf("%d", &key);

   printHeader();

   result = binarySearch(vetor, key, 0,SIZE - 1);

   if (result != -1)
   {
      printf("%d encontrado na posicao %d\n", key, result);
   } else {
      printf("%d nao encontrado.", key);
   } // end else
   
   return 0;
   
} // end main

// binarySearch
int binarySearch(const int vetor[], int searchKey, int low, int high)
{
   // VARIável para manter o elemento do meio do vetor
   int middle;

   // loop while
   while (low <= high)
   {
      // determina o elamento do meio do subarray sendo pesquisado
      middle = (low + high) / 2;

      printRow(vetor, low, middle, high);

      if (searchKey == vetor[middle])
      {
         return middle;
      } // end if

      else if(searchKey < vetor[middle])
      {
         high = middle - 1;
      } // end else if
      
      else
      {
         low = middle + 1;
      } // end else
   } // end while
   
   return -1;
} // end binarySearch

// printHeader
void printHeader(void)
{
   // variável
   int i;

   printf("\nSubscrito\n");

   for ( i = 0; i < SIZE; i++)
   {
      printf("%3d ", i);
   } // end for

   printf("\n");

   for ( i = 1; i <= 4 * SIZE ; i++)
   {
      printf("_");
   } // end for

   printf("\n");   
} // end printHeader

// printRow
void printRow(const int vetor[], int low, int mid, int high)
{
   // variável
   int i; // contador

   for ( i = 0; i < SIZE; i++)
   {
      if (i < low || i > high)
      {
         printf(" ");
      } // end if

      else if (i == mid)
      {
         printf("%3d*", vetor[i]);
      } // end else if

      else
      {
         printf("%3d ", vetor[i]);
      } // end else      
   } // end for
   printf("\n"); // pula linha   
} // end printRow