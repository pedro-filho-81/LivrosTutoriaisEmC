/**
 * 7.4 Para cada um dos seguintes, escreva uma declaração que 
 * execute a tarefa especificada. Suponha que as variáveis ​
 * ​float number1 e number2 sejam definidas e que number1 seja 
 * inicializada como 7.3.
 * a) Defina a variável fPtr para ser um ponteiro para um 
 * objeto do tipo float.
 * b) Atribua o endereço da variável number1 à variável 
 * ponteiro fPtr.
 * c) Imprima o valor do objeto apontado por fPtr.
 * d) Atribua o valor do objeto apontado por fPtr à variável 
 * number2.
 * e) Imprima o valor de number2.
 * f) Imprima o endereço de number1. Use a especificação de 
 * conversão %p.
 * g) Imprima o endereço armazenado em fPtr. Use o 
 * especificador de conversão %p. O valor impresso é o mesmo 
 * que o endereço de number1?
 * Deitel, Paul; Deitel, Harvey. C How to Program: With Case 
 * Studies in Applications and Systems Programming, Global 
 * Edition (p. 407). Pearson Education. Edição do Kindle.
 */
#include <stdio.h>

int main()
{
   // variáveis
   float number1 = 5.0;
   float number2;

   printf("\nSuponha que as variáveis ​​float number1 e number2 sejam"
         "\ndefinidas e que number1 seja inicializada como 7.3.");
   
   printf("\n\tfloat number1 = 5;\n\tfloat number2;\n");

   printf("\na) Defina a variável fPtr para ser um ponteiro para um objeto do tipo float.\n\tfloat *fPtr;\n");
   float *fPtr;

   printf("\nb) Atribua o endereço da variável number1 à variável ponteiro fPtr.\n\tfPtr = &number1\n");
   // fPtr recebe o endereço do array number1
   fPtr = &number1;
   
   printf("\nc) Imprima o valor do objeto apontado por fPtr.\n\tfPtr = %.1f\n", *fPtr);

   printf("\nd) Atribua o valor do objeto apontado por fPtr à variável number2.\n\tnumber2 = *fPtr\n");
   
   number2 = *fPtr;

   printf("\ne) Imprima o valor de number2.\n\tnumber2 = %.1f\n", number2);

   printf("\nf) Imprima o endereço de number1. Use a especificação de conversão %%p.");
   printf("\n\tEndereco de number1 = %p\n", &number1);

   printf("\ng) Imprima o endereço armazenado em fPtr. \nUse o especificador de conversão %%p. \nO valor impresso é o mesmo que o endereço de number1?\n\tEndereço apontato por fPtr = %p", fPtr);

   printf("\n\n");

} // end main