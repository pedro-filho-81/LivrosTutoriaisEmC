/**
 * MMM
 * Programa para encontrar a maior e a menor temperatura
 * média anual.
 * Após, imprimir o valor e o mês que ocorreu.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 12

// variáveis globais
int menorTemperatura, maiorTemperatura;

// função adicionar
void addTemp(int vetor[])
{
   // loop para adicionar valores ao vetor
   for (int i = 0; i < SIZE; i++)
      // vetor recebe valores aleatórios
      // entre -6º e 100ºC
      vetor[i] = -6 + rand() % 106;
} // end addTemp

// função mês menor
void mesMenor(int vetor[])
{
   // variáveis
   int i, menor = vetor[0], opcao;

   // loop para achar o menor valor
   for( i = 0; i < SIZE; i++) {
      // verifica se o valor do vetor é menor
      // que o valor da variável menor
      if(vetor[i] < menor) { // se verdade
         // menor recebe esse valor
         menor = vetor[i];
         // e opção recebe a posição
         opcao = i;
      } // end if
   } // end for

   // exibir
   printf("\nA menor temperatura eh %dC\nNo mes de: ", menor);

   // verifica a posição do menor valor
   switch (opcao) // e exibe o mês que ocorreu
   {
      case 0:
         printf("Janeiro.");
         break;
      
      case 1:
         printf("Fevereiro.");
         break;
      
      case 2:
         printf("Marco.");
         break;
      
      case 3:
         printf("Abril.");
         break;
      
      case 4:
         printf("Maio.");
         break;
      
      case 5:
         printf("Junho.");
         break;
      
      case 6:
         printf("Julho.");
         break;
      
      case 7:
         printf("Agosto.");
         break;
      
      case 8:
         printf("SeteMbro.");
         break;
      
      case 9:
         printf("Outubro.");
         break;
      
      case 11:
         printf("Dezembro.");
         break;
      
      default:
         printf("Valor inválido.");
         break;
   } // end switch
} // end mês menor

// função mês menor
void mesMaior(int vetor[])
{
   int i, maior = vetor[0], opcao;

   for( i = 0; i < SIZE; i++) {
      if(vetor[i] > maior) {
         maior = vetor[i];
         opcao = i;
      } // end if maior
   } // end for i

   printf("\nA maior temperatura eh %dC\nNo mes de: ", maior);
   
   switch (opcao)
   {
      case 0:
         printf("Janeiro.");
         break;
      
      case 1:
         printf("Fevereiro.");
         break;
      
      case 2:
         printf("Marco.");
         break;
      
      case 3:
         printf("Abril.");
         break;
      
      case 4:
         printf("Maio.");
         break;
      
      case 5:
         printf("Junho.");
         break;
      
      case 6:
         printf("Julho.");
         break;
      
      case 7:
         printf("Agosto.");
         break;
      
      case 8:
         printf("SeteMbro.");
         break;
      
      case 9:
         printf("Outubro.");
         break;
      
      case 11:
         printf("Dezembro.");
         break;
      
      default:
         printf("Valor inválido.");
         break;
   } // end switch
} // end mês maior

// função display ( exibir )
void display(int vetor[])
{
   // loop para linha da matriz
   for (int i = 0; i < SIZE; i++)
   {  
      // exibe os elementos da matriz
      printf("%4d", vetor[i]);
   } // end for colunas
} // end display

int main()
{
   // vetor
   int tempe[SIZE];

   // semente de rean
   srand(time(NULL));

   // adiciona valores ao vetor tempe
   addTemp(tempe);

   printf("\nTemperaturas em graus Celcius:\n");
   display(tempe); // exibe valores do vetor

   mesMenor(tempe); // exibe a temperatura e o mês
   mesMaior(tempe); // exibe a temperatura e o mês

   printf("\n\n");
   return 0;
} // end main