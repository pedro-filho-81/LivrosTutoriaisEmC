/**
 * Programa para ler 10 números reais e armazena
 * em um vetor. Em seguida, ler o código e faça:
 * 0 - finaliza o programa;
 * 1 - imprime o vetor na ordem crescente;
 * 2 = imprime o vetor na ordem inversa.
 * O program deve funcionar até o usuário 
 * digitar 0 e encerrar o programa.
 * 25/11/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// função adicionar
void add(float vetor[])
{
   // loop para adicionar valores ao vetor
   for (int i = 0; i < SIZE; i++)
      // vetor recebe valores aleatórios
      // entre 1 e 100
      vetor[i] = (1.25 + rand() % 100) / 7;
} // end addTemp

// ordenar vetor
void order(float vetor[])
{
   // variáveis
   int i, j;
   float temp;

   // loop para ordenar o vetor
   for(i = 0; i < SIZE; i++) {
      for ( j = 0; j < SIZE; j++)
      {
         if(vetor[i] < vetor[j]) {
            temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
         } // end if
      } // end for j      
   } // end for i
} // end order

// função para inverter os valores do vetor
void reverse(float vetor[], int inicio, int fim)
{
   // variáveis
   float temp = 0;

   // loop para iverter os valores do vetor
   while(inicio < fim) {
         temp = vetor[inicio];
         vetor[inicio] = vetor[fim];
         vetor[fim] = temp;
         fim--; // decrementa
         inicio++; // incrementa
   } // end while
} // end reverse

// função display ( exibir )
void display(float vetor[])
{
   // loop para linha da matriz
   for (int i = 0; i < SIZE; i++)
   {
      // exibe os elementos da matriz
      printf("%.2f ", vetor[i]);
   } // end for colunas
} // end display

int main()
{
   // vetor
   float vetor[SIZE];
   
   // variável
   int opcao;

   // semente de rean
   srand(time(NULL));

   // enquanto resposta diferente de -1 faça
   // executa todo o programa
   while(opcao != 0) {
      // adiciona valores ao vetor tempe
      add(vetor);

      // varifica a resposta da variável opção
      switch (opcao)
      {
         case 1:
            // ordenar vetor
            printf("\nVetor original:\n");
            display(vetor);     
            break;

         case 2:
            // ordenar vetor
            printf("\nVetor original:\n");
            display(vetor);   
            // inverte os valores do vetor
            reverse(vetor, 0, SIZE - 1);
            printf("\nVetor invertido:\n");
            display(vetor);
            break;

            default:
               printf("Valor invalido! Tente novamente.");
      } // end swhitch

      // menu
      printf("\n\n\tOPCOES\n");
      printf("*******************\n");
      printf("*   0 - Sair      *\n");
      printf("*   1 - Imprimir  *\n");
      printf("*   2 - Inverter  *\n");
      printf("*******************\n");
   
      // aguarda resposta baseada no menu
      printf("Opcao: ");
      scanf(" %d", &opcao);

   } // end while opção
   
   printf("\n\n");
   
   return 0;

} // end main