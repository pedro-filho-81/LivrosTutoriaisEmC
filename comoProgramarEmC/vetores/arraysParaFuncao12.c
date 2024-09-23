#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
   passando arrays e elementos individuais do array para função
*/
#define SIZE 5

// protótipos
void modifyArray(int array[], int size);
void modifyElement(int ele);

int main() {

   setlocale(LC_ALL, "portuguese");

   // vetor
   int vetor[SIZE] = {0, 1, 2, 3, 4};
   int i;

   printf("\nEfeitos da passagem do array inteiro por referência.\nOs "
   "valores do array original são:\n");

   // loop for
   for(i = 0; i < SIZE; i++) {
      printf("%3d", vetor[i]);
   } // end for

   printf("\n");

   // passa array para modifyArray por referência
   modifyArray(vetor, SIZE);

   printf("Os valores do array modificado são: \n");

   // array modificado nao sída
   for(i = 0; i < SIZE; i++) {
      printf("%3d", vetor[i]);
   } // end for

   printf("\n\nEfeitos de passar elementos do array por valor\n\nO valor de vetor[3] é: %3d\n ", vetor[3]);

   modifyElement(vetor[3]);

   printf("O valor de vetor[3] é: %d\n", vetor[3]);


   return 0;
} // end main

void modifyArray(int vetor[], int size) {

   // variável
   int j;

   for(j = 0; j < size; j++) {
      vetor[j] *= 2;
   } // end for

} // end modifyArray

void modifyElement(int e) {
   printf("O valor em modifyelement é: %3d\n", e *= 2);
} // end modifyElement