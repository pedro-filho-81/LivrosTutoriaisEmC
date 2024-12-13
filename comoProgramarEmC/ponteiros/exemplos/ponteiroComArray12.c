/**
 * Fig. 7.20: fig07_20.cpp
 * Usando notações de subscrito e ponteiro com arrays
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 229). Edição do Kindle. 
 */
#include <stdio.h>

#define SIZE 4 

int main()
{
   // cria um array unidimensional (vetor) do tipo inteiro para 4 elementos
   int b[SIZE] = {10, 20, 30, 40};

   // exibe
   printf("\nCria o vetor b:\n\tint b[SIZE] = {10, 20, 30, 40};\n");

   // cria o ponteiro *bPtr para o array b
   // todo ponteiro recebe o endereço de uma variável
   // não é necessário o & comercial para o vetor b
   // pois o vetor b é um ponteiro
   int *bPtr = b;

   // exibe
   printf("Cria o ponteiro *bPtr:\nque recebe o vetor b\n\tint *bPtr = b;\n");

   // cria contador i
   int i;
   int offset; // contador
   
   printf("\nCria as variaveis:\n\tint i;\n\tint offset;");

   // mostra array b usnado notação de subscrito de array
   printf("\n\nArray b impresso com:\n"
            "Notacao de subscrito de array.");

   printf("\nLoop for pelo array:\n\tfor ( i = 0; i < SIZE; i++)");

   printf("\nImrimir o array e os valores:\n\tprintf(\"b[ %%d ] = %%d\", i, b[ i ]);\n");

   // loop pelo array b
   for ( i = 0; i < SIZE; i++)
   {
      // exibe array b e seus elementos
      printf("\t\tb[ %d ] = %d\n", i, b[ i ]);
   } // end for

   printf("\nNotacao de ponteiro/offset onde:\n"
            "O ponteiro eh o nome do array.");

   printf("\nLoop for pelo array:\n\tfor ( offset = 0; offset < SIZE; offset++)");

   printf("\nImrimir o array e os valores:\n\tprintf(\"*( b + %%d ) = %%d\", offset, *( b + offset ) );\n");
   
   // loop pelo array b
   for ( offset = 0; offset < SIZE; offset++)
   {
      // exibe array b e seus elementos
      printf("\t\t*( b + %d ) = %d\n", offset, *( b + offset ) );
   } // end for

   // mostra array b usando bPtr e notação de subscritode array
   printf("\nNotacao de subscrito de ponteiro");

   printf("\nLoop for pelo array:\n\tfor ( i = 0; i < SIZE; i++)");

   printf("\nImrimir o array e os valores:\n\tprintf(\"bPtr[ %%d ] = %%d\\n\", i, bPtr[i]);\n");
   
   // loop pelo array
   for ( i = 0; i < SIZE; i++)
   {
      printf("\t\tbPtr[ %d ] = %d\n", i, bPtr[i]);
   } // end for bPtr
 
   // mostra array b usando bPtr e notação de ponteiro/deslocamento
   printf("\nNotacao de ponteiro/deslocamento");

   printf("\nLoop for pelo array:\n\tfor ( offset = 0; offset < SIZE; offset++)");

   printf("\nImrimir o array e os valores:\n\tprintf(\"*(bPtr + %%d ) = %%d\\n\", offset, *( bPtr + offset));\n");
   
   // loop pelo array b
   for ( offset = 0; offset < SIZE; offset++)
   {
      printf("\t\t*(bPtr + %d ) = %d\n", offset, *( bPtr + offset));
   } // end for
   
   printf("\n\n");
   return 0;
   
} // end main