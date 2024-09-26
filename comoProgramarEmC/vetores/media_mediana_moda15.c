#include <stdio.h>
#include <stdlib.h>

#define SIZE 99

// protótipos
void mean(const int answer[]);
void median(int answer[]);
void mode(int answer[]);
void boobleSort(int vetor[]);
void printArray(const int vetor[]);

int main() {

   // vetor
   int frequency[10] = {0};
   int response[ SIZE] = {
      {6, 7, 8, 9, 8, 7, 8, 9, 8, 9},
      {7, 8, 9, 5, 9, 8, 7, 8, 7, 8},
      {6, 7, 8, 9, 3, 9, 8, 7, 8, 7},
      {7, 8, 9, 8, 9, 8, 9, 7, 8, 9},
      {6, 7, 8, 7, 8, 7, 9, 8, 9, 2},
      {7, 8, 9, 8, 9, 8, 9, 7, 5, 3},
      {5, 6, 7, 2, 5, 3, 9, 4, 6, 4},
      {7, 8, 9, 6, 8, 7, 8, 9, 7, 8},
      {7, 4, 4, 2, 5, 3, 8, 7, 5, 6},
      {4, 5, 6, 1, 6, 5, 7, 8, 7},
   }; // end response

   // processa a resposta
   mean(response);
   median(response);
   mode(response);
   
   return 0;
} // end main

// função mean
void mean(const int answer[])
{

} // end mean

void median(int answer[]);
void mode(int answer[]);
void boobleSort(int vetor[]);
void printArray(const int vetor[]);
