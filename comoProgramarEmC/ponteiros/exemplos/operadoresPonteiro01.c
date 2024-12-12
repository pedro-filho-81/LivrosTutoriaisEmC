/**
 * Usando os operadores & e *
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 211). Edição do Kindle. 
 * 11/10/2024
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // variável e ponteiro
   int a;
   int *aPtr; // ponteiro para inteiro

   printf("\nUsando os operadores & e *\n");
   printf("\nCria a variavel a:\nint a;\n");
   printf("Cria um ponteiro para inteiro:\nint *aPtr;");

   // atribuição
   a = 7; // variável a recebe valor 7
   printf("\nVariavel a recebe o valor 7:\na = 7;");
   // O & comercial antes da variável
   // informa o endereço da variável
   aPtr = &a; // O ponteiro aPtr recebe o endereço de a
   printf("\nO ponteiro aPtr recebe o endereco de a:\naPtr = &a;");

   // exibe resultado
   /**
    * %p mostra o endereço no printf("%p")
    * O & comercial antes da variável informa o endereço
    * &a informa o endereço da variável a
    * aPtr informa o endereço da variável a
    */
   printf("\nO &a mostra o endereco de a %p"
         "\nO valor do ponteiro aPtr eh %p\no endereco de a", &a, aPtr);

   /**
    * %d mostra o valor de da variável a 
    * informa o valor da variável a
    * *aPtr informa o valor da variável a
    * que está vinculada ao ponteiro
    */
   printf("\n\nO valor de a eh %d"
         "\nO *aPtr mostra o valor %d\nda variavel a\n", a, *aPtr);

   printf("\nmostrando que * e & sao complementos um "
            "do outro\n&*aPtr = %p mostra o endereco de a"
            "\n*&aPtr = %p tambem exibe o endereco de a\n\n", &*aPtr, *&aPtr);

   return 0;

} // end main