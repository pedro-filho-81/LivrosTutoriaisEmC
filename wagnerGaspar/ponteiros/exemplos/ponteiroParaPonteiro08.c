/**
 * Como criar um ponteiro para ponteiro?
 * Ponteiro para ponteiro é um ponteiro que recebe
 * o endereço de outro ponteiro.
 * Ex.: 
 * int var = 10;
 * int *ponteiro1; // ponteiro para inteiro
 * int **ponteiro2; // ponteiro para um ponteiro para inteiro
 * int ***ponteiro3 // ponteiro para um ponteiro para um ponteiro para inteiro
 * *ponteiro1 = &a;
 * **ponteiro2 = &ponteiro1;
 * ***ponteiro3 = &ponteiro2;
 * Aula - 191
 */
#include <stdio.h>

int main()
{
   printf("\nEm main:");
   // variáveis
   int a = 100; // a recebe 100
   int *b; // ponteiro para inteiro
   int **c; // ponteiro para ponteiro para inteiro
   
   printf("\nVariaveis:\n\tint a = 100;\n\tint *b;\n\tint **c;");

   // atribuições
   b = &a; // ponteiro b recebe o endereço da variável a
   c = &b; // ponteiro c recebe o endereço do ponteiro b 
   printf("\nAtribuicoes:\n\tb = &a"
            "\nPonteiro b recebe o endereco da variavel a"
            "\n\tc = &b;"
            "\nPonteiro c recebe o endereco do ponteiro b.");

   printf("\n\nExibe resultados:"
            "\nEndereco de a eh: %p\tConteudo de a eh: %d",
            &a, a);

   printf("\nEndereco de b eh %p\tConteudo de b eh: %p endereco de a.", &b, b);

   printf("\nEndereco de c eh %p\tConteudo de c eh: %p endereco de b", &c, c);

   printf("\n\nExibindo o valor da variavel A:");
   printf("\nO valor de a eh: %d\nO valor apontado pelo ponteiro *b eh: %d", a, *b); 
   printf("\nO valor apontado pelo ponteiro para ponteiro **c eh: %d", **c);

   printf("\n\n");
   return 0;
} // end main