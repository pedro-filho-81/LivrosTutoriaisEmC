/**
 * 1.2.7 O que cada um dos seguintes imprime? 
 * a. System.out.println(2 + "bc"); 
 * b. System.out.println(2 + 3 + "bc"); 
 * c. System.out.println((2+3) + "bc"); 
 * d. System.out.println("bc" + (2+3)); 
 * e. System.out.println("bc" + 2 + 3); 
 * Explique cada resultado.
 * Sedgewick, Robert; Wayne, Kevin. Computer Science: An 
 * Interdisciplinary Approach . Pearson Education. 
 * Edição do Kindle.
 */
#include <stdio.h>
int main()
{
   printf("\nExemplos de Concatenacao:\n");
   printf("2, \"bc\" =>   %5d%s\n", 2, "bc");
   printf("2 + 3, \"bc\" =>  %2d%s\n", 2 + 3, "bc");
   printf("(2 + 3), \"bc\" => %d%s\n", (2 + 3), "bc");
   printf("\"bc\", (2 + 3) => %s%d\n", "bc", (2 + 3));
   printf("\"bc\", 2 + 3 =>   %s%d\n", "bc", 2 + 3);
   printf("Na linguagem de programacao C\no sinal de concatenacao eh a (,) virgula.\nConcatenar eh juntar.\n\n");
   return 0;
} // end main