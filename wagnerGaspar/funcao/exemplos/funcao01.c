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

   // tam recebe da função scahf a quantidade de valores lidos
   // tam recebe o valor 2, de num1 e num2
   tam = scanf("%d%d", &num1, &num2);
   // exibe a string e o valor de tam
   printf("Tamanho de retorno de scanf: %d\n", tam);

   return 0;
   
} // end main