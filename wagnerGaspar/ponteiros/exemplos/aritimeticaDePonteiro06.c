/**
 * Entendendo aritimética de ponteiros com vetor
 * Aula - 189 
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// procedimento
// exibe os valores do vetor
void imprimir(int vetor[])
{
   // variável
   int i;
   // loop para percorrer o vetor
   for ( i = 0; i < SIZE; i++)
   {
      // imprime os valores do vetor na posição i
      // usando a aritimética de ponteiro, ou seja,
      // endereço do primeiro valor somado mais 1
      // *(vetor + i) ou endereço mais i igual ao
      // próximo endereço, ou próximo valor
      printf("%4d", *( vetor + i ));
      // com ponteiro não usamos na exibição
      // *vetor[i] gera => error: 
      // invalid type argument of unary '*' (have 'int')

   } // end for   
} // end imprimir

int main()
{
   // cria vetor
   int vetor[SIZE] = {45,89,68,25,17,76,34,29,57,44};
   
   printf("\nEm main:\nChamamos o procedimento:\n\timprimir(vetor;)\ne passamos como atributo o vetor,\n"
         "que eh exibido ");

   printf("\n\tVetor Original:\n\tint vetor[SIZE] = ");
   // chama procedimento
   imprimir(vetor);
   
   printf("\n\n");
   return 0;
} // end main