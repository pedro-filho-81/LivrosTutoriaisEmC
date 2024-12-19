/**
 * Exercício 05
 * Implemente uma função strcpy(char *destino, char *origem) usando ponteiros
 * Aula - 196
 */
#include <stdio.h>

// função para copiar a string origem para
// string destino usando aritimética de ponteiros
int strcpy(char *destino, char *origem)
{
   // variável
   int i = 0; // contador

   // loop enquanto para copiar a string origem 
   // para a string destino usando aritimética 
   // de ponteiros.
   // enquanto origem diferente de final de string '\0' faça
   while (*(origem + i) != '\0')
   {
      // cópia string origem para string de destino
      *(destino + i) = *(origem + i);
      // incrementa i em um
      i++;
   } // end while
   // adiciona final de string na string destino
   *(destino + i) = '\0';
   // retorna o tamanho da string
   return i;
} // end strcpy

int main()
{
   char string1[25];
   char string2[] = {"\nFeliz"};

   printf("\nString2 original: %s\n", string2);

   strcpy(string1, string2);
   printf("\nA string tem: %d caracteres.", strcpy   (string1, string2));
   printf("\nString1 copiada: %s\n", string1);

   printf("\n\n");
   return 0;
} // end main