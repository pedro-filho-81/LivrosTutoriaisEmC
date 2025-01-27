/**
 * 6.4.3 Especificando o tamanho de um array com uma 
 * constante simbólica e inicializando elementos do 
 * array com cálculos A Figura 6.3 inicializa o array de 
 * cinco elementos s com os valores 2, 4, 6, 8 e 10, 
 * então imprime o array em formato tabular. Para gerar 
 * os valores, multiplicamos o contador de loop por 2 e 
 * adicionamos 2.
 */
#include <stdio.h>
#define SIZE 5 // maximum size of array

// function main bigins program execution
int main()
{
   // simbolic constant SIZE can be used to specify array size
   int s[SIZE] = {0};

   for (size_t i = 0; i < SIZE; i++)
   { // set the values
      /* code */
      s[i] = 2 + 2 * i;
   } // end for

   // header
   printf("%s%8s\n", "Element", "Value");
   
   // output contants of array s in tabular format
   for (size_t i = 0; i < SIZE; i++)
   {
      /* code */
      printf("%4d%8d\n", i, s[i]);
   } // end for 
} // end main