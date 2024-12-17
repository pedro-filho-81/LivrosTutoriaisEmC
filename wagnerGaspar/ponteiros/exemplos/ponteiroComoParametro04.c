/**
 * Como passar um ponteiro como parâmetro?
 * Aula 187
 */
#include <stdio.h>

// procedimento imprimir que recebe o endereço de um inteiro
int imprimir(int *numPtr)
{
   // exibe o valor de uma variável
   printf("\nO valor apontado pelo ponteiro eh: %d\n", *numPtr);

   // ponteiro *numPtr altera o valor
   // da variável cujo o endereço é
   // é passado para a função
   *numPtr = 80;

} // end imprimir

int main()
{
   // exibir
   printf("\nCriamos o procedimento:"
            "\n\tint imprimir(int *numPtr)");
   // variável
   int num = 6;
   printf("\nEm main:\ncria a variavel\n\tint num = 6;");

   printf("\nO valor da variavel num eh: %d\n", num);

   printf("\nChamamos a funcao:\n\timprimir(&num);"
            "\nE passamos o endereco da variavel &num:");

   // chama o procedimento imprimir e passamos
   // o endereço da variável (&num)
   imprimir(&num);

   printf("\nNa funcao, apos imprimir o valor"
          "\napontado pelo ponteiro *numPtr");
   printf("\npassamos um novo valor ao ponteiro *num:"
            "\n\t*num = 80;");

   // exibe o valor de num atual ou alterado pela função
   printf("\nE imprimimos o novo valor\natribuido na funcao: %d\n\n", num);

   return 0;
   
} // end main