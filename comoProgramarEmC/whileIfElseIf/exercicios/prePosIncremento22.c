/**
 * 3.22 Pré-incrementando versus pós-incrementando.  
 * Escreva um programa que demonstre a diferença entre  
 * pré-decrementar e pós-decrementar usando o operador  de 
 * decremento --. 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 75). Edição do Kindle. 
 */
#include <stdio.h>
#include <locale.h>

int main() { // início main
	
   setlocale(LC_ALL, "Portuguese");
   
    // variáveis
    int contador1 = 10;
    int contador2 = 10;
   
   printf("\nint contador = %d;\n", contador1);
   printf("O valor inicial eh %d\n", contador1);
   printf("\nPRE-DECREmENTO  versus  POS-DECREmENTO\n");
    
    // faça enquanto contador maior ou igual a 1.
    while(contador1 >= 1 && contador2 >= 1) { // inicio while
        printf("%s%d          %s%d\n",
               "--contador = ", --contador1,
               "contador-- = ", contador2--);
    } // fim while

    // exibe resultado
    printf("Pre-decremento modifica o valor inicial antes de exibir.\n");
    printf("Pos-decremento modifica o valor inicial depois de exibir.\n\n");

    return 0;

} // fim main