/**
 * Fig. 7.11: fig07_11.c  
 * Imprimindo uma string um caractere por vez usando  
 * um ponteiro não constante para dados constantes
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 218). Edição do Kindle. 
 * 15/10/2024
 */
#include <stdio.h>

// protótipo
void printCaracters( const char *sPtr);

int main()
{
   // variável
   char string[] = "Imprime caracteres de uma String.";

   printf("\nCria a variavel strint:\n");
   printf("\tchar string[] = \"Imprime caracteres de uma String.\";");
   printf("\nExibe a string original eh: \n\t%s\n", string);

   printf("\nCria a funcao:\n\tvoid printCaracters( const char *sPtr);\n");
   printf("Que tem como parametro:\n\tconst char *sPtr\n");
   printf("\nChama a funcao:\n\tprintCaracters( string );\ne passa a variavel string:\n");
   printCaracters( string );

   printf("\nA string maiuscula eh: \n\t%s\n\n", string);

   printf("A palavra chave (const) na função,\nnao permite a alteracao no valor da string.\n");

   printf("\n");
   return 0;

} // end main

// function printCaracters
/**
 * (*sPtr) não pode modificar o caractere ao qual aponta.
 * ou seja, é um ponteiro que aponta para o tipo caracteres 
 */
void printCaracters( const char *sPtr )
{
   // loop for pela string inteira
   for ( ; *sPtr != '\0'; sPtr++)
   {
      // imprime os caracteres do conteúdo apontado pelo ponteiro
      printf("%2c", *sPtr);
   } // sptr   
   
} // end printCaracteres