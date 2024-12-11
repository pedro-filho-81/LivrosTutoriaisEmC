/**
 * a) Defina um array do tipo float chamado numbers com 
 * 10 elementos, e inicialize os elementos  com os 
 * valores 0.0, 1.1, 2.2,..., 9.9. Suponha que a 
 * constante simbólica SIZE tenha sido  definida como 10.
 * b) Defina um ponteiro, nPtr, que aponte um objeto  
 * do tipo float.  
 * c) Imprima os elementos do array numbers utilizando 
 * a notação de subscrito de array. Use uma  instrução 
 * for e suponha que a variável de controle inteira i 
 * tenha sido definida. Imprima cada  número com 1 
 * posição de precisão à direita do  ponto decimal.  
 * d) Indique duas instruções separadas que atribuam  
 * o endereço inicial do array numbers à variável de  
 * ponteiro nPtr. 
 * e) Imprima os elementos do array numbers usando a  
 * notação ponteiro/deslocamento com o ponteiro nPtr.  
 * f) Imprima os elementos do array numbers usando a  
 * notação de ponteiro/deslocamento com o nome de  
 * array como ponteiro.  
 * g) Imprima os elementos do array numbers 
 * subscritando o ponteiro nPtr.  
 * h) Faça referência ao elemento 4 do array numbers  
 * usando a notação de subscrito de array, a notação  
 * de ponteiro/deslocamento com o nome do array  como 
 * ponteiro, a notação de subscrito de ponteiro com 
 * nPtr e a notação de ponteiro/deslocamento  com nPtr.
 * i) Supondo que nPtr aponte para o início do array  
 * numbers, qual endereço é referenciado por nPtr  + 8? 
 * Que valor é armazenado nesse local? 
 * j) Supondo que nPtr aponte para numbers[5], qual  
 * endereço é referenciado por nPtr –= 4? Qual o  valor 
 * armazenado nesse local?
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 243). Edição do Kindle. 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 244). Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
   // cria array
   float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
   // cria ponteiro
   float *nPtr = numbers;

   // exibe resultado
   printf("\nA) Cria array, tipo float com 10 elementos.\n");
   printf("float number[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};");

   printf("\nB) Cria o ponteiro nPtr:");
   printf("\nfloat *nPtr = number;");

   printf("\nC) Imprime os valores do array:\n");
   for (int i = 0; i < SIZE; i++)
   {
      /* imprime valores do array */
      printf("%5.1f", numbers[i]);
   } // end for
   
   printf("\nD) Endereco do array numbers: %p", numbers);
   printf("\nEndereco recebido por nPtr: %p", nPtr);
   printf("\nEndereco recebido por nPtr via &number: %p", &numbers);
   printf("\nEndereco do ponteiro nPtr: %p", &nPtr);

   printf("\nE) Exibe conteudo do array com for\nusando o ponteiro(nPtr[i]):\n");
   for (int i = 0; i < SIZE; i++)
   {
      // exibe os valores do array via ponteiro
      printf("%5.1f", nPtr[i]);
   } // end for

   printf("\n\n");
   return 0;

} // end main