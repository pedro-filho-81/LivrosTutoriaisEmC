 /**
 * funções e/ou procedimentos recursivos.
 * Fazer uma função recursiva para trocar 
 * os elementos de um vetor
 * e exibir o seu resultado na tela
 * 13/11/2024
 */
#include <stdio.h>
#include <stdlib.h>

// trocar valor valores do vetor
void trocar(int vetor[], int inicio, int fim)
{
   // variável
   int temp; // recebe valores do vetor

   // se início menor que o fim
   if (inicio < fim)
   {
      // temp recebe o valor do vetor do índice inicio
      temp = vetor[inicio];
      // vetor com índice inicio recebe 
      // o valor do vetor do índice fim
      vetor[inicio] = vetor[fim];
      // vetor do índice fim recebe o valor temp
      vetor[fim] = temp;

      // função troca recebe o vetor 
      // ínicio é somado 1
      // fim e subtraido 1
      // ou seja, ínicio almenta o valor
      // fim diminui o valor
      trocar(vetor, inicio + 1, fim - 1);
   } // end if
   
} // end trocar

// função imprimir
void imprimir(int vetor[], int tam)
{
   // verificar se todo vetor foi percorrido
   if (tam == 1) // se verdade
   {
      printf("%d ", vetor[tam - 1]);
   } else // se não
   {
      imprimir(vetor, tam - 1);
      printf("%d ", vetor[tam - 1]);
   } // end else 1
   
} // end maiorValor

int main()
{
   // vetor
   int vetor[10] = {10,258,13,445,58,67,700,8,9,10};

   printf("\nVetor original\n");
   // chama a função recursiva maiorValor()
   // e exibe o resultado na função printf();
   imprimir(vetor, 10);
   printf("\nVetor invertido:\n");
   trocar(vetor, 0, 9);
   imprimir(vetor, 10);
   printf("\n\n");

   return 0;
   
} // end main