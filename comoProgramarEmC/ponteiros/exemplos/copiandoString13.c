/**
 * Fig. 7.21: fig07_21.c
 * Copiando uma string usando notação de array e 
 * notação de ponteiro.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 230). Edição do Kindle. 
 */
#include <stdio.h>

// protótipos
void copy1(char * const s1, const char * const s2);
void copy2(char *s1, const char *s2);

int main()
{
   // cria strings
   char string1[10]; // array para string1
   char *string2 = "Ola"; // ponteiro para string2
   char string3[10]; // array para string3
   char string4[] = "Adeus"; // cria um ponteiro para a string4

   // chama a função
   copy1(string1, string2);
   printf("string1 = %s\n", string1);

   copy2(string3, string4);
   printf("string3 = %s\n", string3);

   printf("\n\n");
   return 0;
} // end main

// cria o procedimento copy1
void copy1(char * const s1, const char * const s2)
{
   // loop para for
   for (int i = 0; i < count; i++)
   {
      /* code */
   }
   
} // end copy1

void copy2(char *s1, const char *s2);