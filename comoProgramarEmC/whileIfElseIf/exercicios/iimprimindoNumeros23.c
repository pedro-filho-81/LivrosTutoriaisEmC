/**
 * 3.23 Imprimindo números por um loop. 
 * Escreva um  programa que utilize o looping para imprimir 
 * os números de 1 a 10 lado a lado na mesma linha, 
 * com três espa-  ços entre os números. 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 75). Edição do Kindle. 
 */
#include <stdio.h>

int main()
{
   // variável
   int contador = 0;
   while (contador < 10)
   {
      // exibe os valores
      printf("%3d", contador + 1);
      // incrementa 1
      contador++;
   } // end while
   
} // end main