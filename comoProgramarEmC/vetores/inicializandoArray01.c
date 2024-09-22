#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
   Figura 6.3: fig06_03.c  2  Inicializando um array
   Deitel, Paul; Deitel, Harvey. C Como Programar
   (Portuguese Edition) (p. 163). Edição do Kindle.
   21/09/2024
*/
int main() {

   setlocale(LC_ALL, "portuguese");

   // vetor
   int n[10];

   // variável
   int i;

   // loop for para inicializar vetor com 10 zeros
   for(i - 0; i < 10; i++) {
      n[i] = 0;
   } // end for

   // cabeçalho
   printf("%s%13s\n", "Elemento", "Valor");

   // loop para exibir os valores do vetor
   for(i = 0; i < 10; i++) {
      printf("%8d%12d\n", i + 1, n[i]);
   } // end for exibir

   return 0;
} // end main
