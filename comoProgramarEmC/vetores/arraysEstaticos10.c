#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// arrays estáticos são inicializados em zero

// protótipos
void staticArrayInit(void);
void automaticArrayInit(void);

// principal
int main() {

   setlocale(LC_ALL, "portuguese");

   printf("Primeira chamada para funções:\n");
   staticArrayInit();
   automaticArrayInit();

   printf("Segunda chamada para as funções:\n");
   staticArrayInit();
   automaticArrayInit();

   return 0;
} // end main

// função para demonstrar um array local estático
void staticArrayInit() {
   // inicializa elementos em 0 
   // na primeira vez que a função é chamada
   static int array[3];
   int i = 0; // contador

   printf("Valores na entrada de staticArrayInit:\n");

   // mostra conteúdo do array1
   for(i = 0; i <= 2; i++) {
      printf("array[%d] = %d\n", i, array[i]);
   } // end for

   printf("Valores na saída de staticArrayInit:\n");

   for(i = 0; i <= 2; i++) {
      printf("arrar[%d] = %d\n", i, array[i] += 5);
   } // end for
} // end staticArrayInit

void automaticArrayInit(void) {
   // inicializa os elementos todas 
   // as vez que a função é chamada
   static int array2[3] = {1, 2, 3};
   int i = 0; // contador

   printf("Valores na entrada de automaticArrayInit:\n");

   // mostra conteúdo do array2
   for(i = 0; i <= 2; i++) {
      printf("array2[%d] = %d\n", i, array2[i]);
   } // end for

   printf("Valores na saída de automaticArrayInit:\n");

   for(i = 0; i <= 2; i++) {
      printf("arrar2[ %d ] = %d\n", i, array2[i] += 5);
   } // end for
   
} // end automaticArrayInit