/**
 * usando funções da linquagem C
 */
#include <stdio.h>
#include <string.h>

// função principal
int main()
{
   int tam = 0, num1, num2;

   // a função printf retorna a quantidade de caracteres
   // e imprime a palavra
   tam = printf("Hello");
   printf("\nTamanho da string: %d\n", tam);

   tam = scanf("%d%d", &num1, &num2);
   printf("Tamanho de retorno de scanf: %d\n", tam);

   return 0;
   
} // end main