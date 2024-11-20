#include <stdio.h>

int main()
{
   printf("\nCRIA, INICIALIZA E EXIBE \nOS VALORES DO VETOR\n");
   /**
    * Cria um vetor do tipo inteiro, de nome num2
    * para 5 elementos, sem expecificar o número
    * de elementos; a quantidade de elementos entre 
    * as chaves é o tamanho do array
    */
   printf("num2[] = ");
   int num2[] = {1, 2, 3, 4, 5};
   
   // loop para exibir valores do vetor
   for (int i = 0; i < 5; i++)
      // imprime valores
      printf("%3d", num2[i]);   

   /**
    * Cria um vetor do tipo inteiro, de nome num3.
    * de tamanho 5, com 3 elementos. Nesses casos,
    * às outras posições é preenchidas com zeros.
    */
   printf("\nnum3[] = ");
   // cria vetor
   int num3[] = {1, 2, 3};

   // loop para exibir valores do vetor
   for (int i = 0; i < 5; i++)
      // exibe os valores do vetor
      printf("%3d", num3[i]);   

   /**
    * Cria um vetor do tipo inteiro, de nome num4.
    * de tamanho 5, com 7 elementos. Nesses casos,
    * às outras posições não serão perdidas.
    */
   printf("\nnum4[5] = ");
   // cria vetor
   int num4[5] = {1, 2, 3, 4, 5, 6, 7};
   
   // loop para exibir valores do vetor
   for (int i = 0; i < 5; i++)
      // exibe os valores do vetor
      printf("%3d", num4[i]);   
   
   /**
    * Cria um vetor do tipo inteiro, de nome num5.
    * de tamanho 5, inicializado com 0 zero    */
   printf("\nnum5[5] = ");
   // cria e atribui o valor zero
   int num5[5] = {0};

   // loop para exibir valores do vetor
   for (int i = 0; i < 5; i++)
      // exibe os valores
      printf("%3d", num5[i]);   

   /**
    * Cria um vetor do tipo caractere, de nome vogais.
    * de tamanho 5, com as vogais de elemento.
    * */
   printf("\nvogais[5] = ");
   // cria o vetor
   char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
   
   // loop para exibir valores do vetor
   for (int i = 0; i < 5; i++)
      // exibe os valores do vetor
      printf("%c ", vogais[i]);   

   /**
    * Cria um vetor do tipo float, de nome notas.
    * de tamanho 3, com 3 elemento de ponto-flutuante 
    * */
   printf("\nnotas[3] = ");
   // cria o vetor
   float notas[3] = {7.3, 8.5, 4.6};
   // loop para exibir valores do vetor
   for (int i = 0; i < 3; i++)
      // exibe os valores
      printf("%.1f ", notas[i]);

   printf("\n\n");
   return 0;

} // end main