/**
 * Vetor é sempre ponteiro? SIm
 * Com alterar os valores no array unidimencional
 * usando função ou procedimento
 * Aula 188
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// procedimentos
// modifica os valores do vetor
void teste(int vetor[])
{
   // variável
   int i;
   // loop para percorrer o vetor
   for ( i = 0; i < SIZE; i++)
   {
      // vetor recebe seus valores multiplicados por 2
      vetor[i] = vetor[i] * 2;
   } // end for
   printf("\n");
} // end teste

// exibe os valores do vetor
void imprimir(int vetor[])
{
   // variável
   int i;
   // loop para percorrer o vetor
   for ( i = 0; i < SIZE; i++)
   {
      // imprime os valores do vetor na posição i
      printf("%4d", vetor[i]);
   } // end for   
} // end imprimir

int main()
{
   // cria vetor
   int vetor[SIZE] =
         {45,89,68,25,17,76,34,29,57,44};
   
   printf("\nEm main:\nChamamos o procedimento:\n\timprimir(vetor;)\ne passamos como atributo o vetor,\n"
         "que eh exibido ");

   printf("\n\tVetor Original:\n\tint vetor[SIZE] = ");
   // chama procedimento
   imprimir(vetor);
   
   printf("\n\nDepois chamamos a procedimento\n\tteste(vetor);\ne passamos como argumento o vetor.\n");
   // chama procedimento para alterar o vetor
   teste(vetor);

   printf("Chamamos novamente o procedimento"
            "\n\timprimir(vetor);"
            "\ne passamos como argumento o vetor.");
   printf("\n\tVetor modificado:\n\tvetor[SIZE] = ");
   imprimir(vetor);
   
   printf("\n\n");
   return 0;
} // end main