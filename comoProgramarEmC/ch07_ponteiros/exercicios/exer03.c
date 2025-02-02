/**
 * 7.3 Responda a cada um dos seguintes. Suponha que números 
 * de ponto flutuante de precisão simples sejam armazenados em 
 * quatro bytes e que o endereço inicial do array seja o local 
 * 1002500 na memória. Cada parte do exercício deve usar os 
 * resultados das partes anteriores quando apropriado.
 * a) Defina um array float chamado numbers com 10 elementos e 
 * inicialize os elementos com os valores 0,0, 1,1, 2,2, …, 9,
 * 9. Suponha que a constante simbólica SIZE tenha sido 
 * definida como 10.
 * b) Defina um ponteiro, nPtr, que aponte para um float.
 * c) Use uma instrução for e notação de subscrito de array 
 * para imprimir elementos de números de array. Use um dígito 
 * de precisão à direita do ponto decimal.
 * e) Imprima os elementos de números usando a notação de 
 * ponteiro/deslocamento com o ponteiro nPtr.
 * f) Imprima os elementos dos números usando a notação de 
 * ponteiro/deslocamento com o nome do array como ponteiro.
 * g) Imprima os elementos dos números subscrevendo 
 * o ponteiro nPtr.
 * h) Consulte o elemento 4 dos números usando a notação de subscrito de 
 * array, notação de ponteiro/deslocamento com o nome do array como 
 * ponteiro, notação de ponteiro subscrito com nPtr e notação de ponteiro/
 * deslocamento com nPtr.
 * i) Supondo que nPtr aponte para o início do array numbers, qual endereço 
 * é referenciado por nPtr + 8? Qual valor é armazenado naquele local?
 * j) Supondo que nPtr aponte para numbers[5], qual endereço é referenciado 
 * por nPtr –= 4? Qual é o valor armazenado naquele local?
 * Deitel, Paul; Deitel, Harvey. C How to Program: With Case Studies in 
 * Applications and Systems Programming, Global Edition (p. 407). 
 * Pearson Education. Edição do Kindle.
 */
#include <stdio.h>
#define SIZE 10

int main()
{
   // constante que define o tamanho do array
   printf("\nConstante que define o tamanho do array");
   printf("\n\t#define SIZE 10\n");

   printf("\nA) defina um array float chamado numbers com 10 elementos:");
   
   float number[SIZE] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};

   printf("\n\tfloat number[SIZE] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};\n");

   printf("\nb) Defina um ponteiro, nPtr, que aponte para um float.\n\tfloat *nPtr;\n");
   float *nPtr;

   printf("\nc) Use uma instrucao for e notacao de subscrito de array \npara imprimir elementos de números de array. \nUse um dígito de precisão à direita do ponto decimal.\n\t");

   printf("\tfor (size_t i = 0; i < SIZE; i++)"
         "\n\t\t    printf(\"%%4.1f\", number[i]);\n\t\t      ");

   for (size_t i = 0; i < SIZE; i++)
   {
      printf("%4.1f", number[i]);
   }
   
   printf("\n\nd) Dê duas instruções separadas que atribuam \no endereço inicial de números de array à variável de ponteiro nPtr.");
   nPtr = number;
   nPtr = &number[0];
   printf("\n\tnptr = number;\n\tEndereco: %p\n\tnptr = &number[0];\n\tEndereco: %p\n", nPtr, nPtr);

   printf("\ne) Imprima os elementos de números usando \na notação de ponteiro/deslocamento com o ponteiro nPtr.\n");
   
   printf("\tprintf(\"%%4.1f\", *(nPtr + i));\n\t");

   for (size_t i = 0; i < SIZE; i++)
      printf("%4.1f", *(nPtr + i));

   printf("\n\nf) Imprima os elementos dos números usando a notação de \nponteiro/deslocamento com o nome do array como ponteiro.\n\t");
   
   printf("printf(\"%%4.1f\", *(number + i));\n\t");
   for (size_t i = 0; i < SIZE; i++)
      printf("%4.1f", *(number + i));

   printf("\n\ng) Imprima os elementos dos números \nsubscrevendo o ponteiro nPtr.");
   
   printf("\n\tfor (size_t i = 0; i < SIZE; i++)"
         "\n\t    printf(\"%%4.1f\", nPtr[i]);\n\t      ");

   for (size_t i = 0; i < SIZE; i++)
      printf("%4.1f", nPtr[i]);


   printf("\n\nh) 1-Consulte o elemento 4 dos números usando a notação de \nsubscrito de array, 2-notação de ponteiro/deslocamento com o nome do \narray como ponteiro, 3-notação de ponteiro subscrito com nPtr e notação \nde ponteiro/deslocamento com nPtr.\n");

   printf("\t1-numero[3] = %.1f\n\t2-*(numero + 3) = %.1f", number[3], *(number + 3));

   printf("\n\t3-nPtr[3] = %.1f\n\t3-*(nPtr + 3) = %.1f", nPtr[3], *(nPtr + 3));

   printf("\n\ni) Supondo que nPtr aponte para o início do array numbers, \nqual endereço é referenciado por nPtr + 8? \nQual valor é armazenado naquele local?");

   printf("\n\t&nPtr[8] = %p\n\t&*(nPtr + 8) = %p", &nPtr[8], &*(nPtr + 8));

   printf("\n\nj) Supondo que nPtr aponte para numbers[5], \nqual endereço é referenciado por nPtr –= 4? \nQual é o valor armazenado naquele local?");
   
   printf("\nEndereco:\n\t&nPtr[9 - 4] = %p\n\t&*(nPtr + 9 - 4) = %p", &nPtr[9 - 4], &*(nPtr + 9 - 4));

   printf("\nValor:\n\tnPtr[9 - 4] = %.1f\n\t*(nPtr + 9 - 4) = %.1f", nPtr[9 - 4], *(nPtr + 9 - 4));

} // end main