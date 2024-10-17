/**
 * Fig. 8.4: fig08_04.c  
 * Usando funções ispunct caractere de pontuação.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 263). Edição do Kindle. 
 */
#include <stdio.h>
#include <ctype.h>

int main()
{
   printf("\nCARACTERES DE PONTUACAO.\n");
   printf("%s\n%s%s%s\n%s%s%s\n%s%s%s\n%s%s\n\n",
          "De acordo com ispunct:",
          "Ponto e virgula ;", ispunct(';') ? " eh um " : " nao eh um ", "caractere de pontuacao.",
          "Dois pontos :", ispunct(':') ? " eh um " : " nao eh um ", "caractere de pontuacao.",
          "Ponto .", ispunct('.') ? " eh um " : " nao eh um ", "caractere de pontuacao.",
          ispunct('y') ? "y eh um " : "y nao eh um ", "caractere de pontuacao.");
   return 0;
} // end main