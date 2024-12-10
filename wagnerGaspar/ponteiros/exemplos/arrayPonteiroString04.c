/**
 * /* Fig. 7.21: fig07_21.c  2 Copiando uma string 
 * usando notação de array e notação de ponteiro.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 230). Edição do Kindle. 
 */
#include <stdio.h>

// protótipos
void copy1(char * const s1, const char *const s2);
void copy2(char *s1, const char *s2);

int main()
{
   // variáveis
   char string1[10]; // vetor para 10 caracteres
   char *string2 = "ola"; // ponteiro para string
   char string3[10]; // vetor para 10 caracteres
   char string4[] = "adeus"; // ponteiro para uma string

   // cópia string2 para string1
   copy1(string1, string2);
   // exibe resultado
   printf("string1 = %s\n", string1);

   // cópia string4 para string3
   copy2(string3, string4);
   // exibe resultado
   printf("string3 = %s\n", string3);
   
   printf("\n\n");
   return 0;

} // end main

// procediento copy1 - cópia s2 para s1 
// usando notação de array
void copy1(char * const s1, const char * const s2)
{
   int i; // contador;

   // loop pela string s1 recebe s2 até fim da string
   for( i = 0; (s1[i] = s2[i]) != '\0'; i++) {
      // não faz nada
   } // end for

} // end copy1


// procediento copy2 - cópia s2 para s1 
// usando notação de ponteiro
void copy2(char *s1, const char *s2)
{  
   // loop pela string s1 recebe s2 até fim da string
   for( ; (*s1 = *s2) != '\0'; s1++, s2++) {
      // não faz nada no corpo de for
   } // end for

} // end copy2