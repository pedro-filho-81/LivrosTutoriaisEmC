/**
 * Qual o tamanho de um ponteiro do tipo 
 * (int, char e float) na linguagem C é?
 * Aula - 185
 */
#include <stdio.h>

int main()
{
   int *ponteiro1;
   char *ponteiro2;
   float *ponteiro3;

   // exibe o tamanho do tipo
   printf("\nO TAmANHO DO TIPO:");
   printf("\nO tamanho do tipo int eh: %d byte.\n", sizeof(int));
   printf("O tamanho do tipo char eh: %d byte.\n", sizeof(char));
   printf("O tamanho do tipo float eh: %d byte.\n", sizeof(float));

   printf("\nO TAmANHO DO TIPO PONTEIRO\n");
   printf("O tamanho do ponteiro do tipo int eh: %d bytes\n", sizeof(ponteiro1));
   printf("O tamanho do ponteiro do tipo char eh: %d bytes\n", sizeof(ponteiro2));
   printf("O tamanho do tipo float int eh: %d bytes\n", sizeof(ponteiro3));

   printf("\n\n");
   return 0;

} // end main