#include <stdio.h>
#include <stdlib.h>
/*
   qualificador de tipo const com array
*/

// protótipo
void tryToModifyArray(const int vetor[]);

int main() {

   // vetor
   int vetor[3] = {10, 20, 30};

   tryToModifyArray(vetor);

   printf("vetor[0] = %d\nvetor[1] = %d\nvetor[2] = %d\n", vetor[0], vetor[1], vetor[2]);

   return 0;
} // end main

void tryToModifyArray(const int vetor[]) {
   
   vetor[0] /= 2;
   vetor[1] /= 2;
   vetor[3] /= 2;   
   
} // end