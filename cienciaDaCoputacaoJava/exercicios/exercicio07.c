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
   printf("\nExemplos de Concatenacao:\nConcatenar eh juntar.\n");
   printf("2, \"bc\" =>   %5d%s%12s\n", 2, "bc", "une 2 e bc");
   printf("2 + 3, \"bc\" =>  %2d%s%12s\n", 2 + 3, "bc", "une 5 e bc");
   printf("(2 + 3), \"bc\" => %d%s%12s\n", (2 + 3), "bc", "une 5 e bc");
   printf("\"bc\", (2 + 3) => %s%d%12s\n", "bc", (2 + 3), "une bc e 5");
   printf("\"bc\", 2, 3 =>   %s%d%d%15s\n", "bc", 2, 3, "une bc, 2 e 3");
   printf("Na linguagem de programacao C\no sinal de concatenacao eh a (,) virgula.\nConcatenar eh juntar.\n\n");
   return 0;
} // end main