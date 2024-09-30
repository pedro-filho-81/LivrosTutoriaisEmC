#include <stdio.h>
#include <stdlib.h>
#define SIZE 99
/**
 * Este programa introduz o tópico da 
 * analize de dados da pesquisa ele
 * calcula a média, a mediana e a moda
 * dos dados.
 */

// protótipos
void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort(int vetor[]);
void printArray(const int vetor[]);

int main() {

   // vetor
   int frequency[10] = {0};
   int response[ SIZE] = {
      {6, 7, 8, 9, 8, 7, 8, 9, 8, 9},
      {7, 8, 9, 5, 9, 8, 7, 8, 7, 8},
      {6, 7, 8, 9, 3, 9, 8, 7, 8, 7},
      {7, 8, 9, 8, 9, 8, 9, 7, 8, 9},
      {6, 7, 8, 7, 8, 7, 9, 8, 9, 2},
      {7, 8, 9, 8, 9, 8, 9, 7, 5, 3},
      {5, 6, 7, 2, 5, 3, 9, 4, 6, 4},
      {7, 8, 9, 6, 8, 7, 8, 9, 7, 8},
      {7, 4, 4, 2, 5, 3, 8, 7, 5, 6},
      {4, 5, 6, 1, 6, 5, 7, 8, 7},
   }; // end response

   // processa a resposta
   mean(response);
   median(response);
   mode(frequency, response);
   
   return 0;
} // end main

// função mean - calcula a média de todos
// os valores da resposta
void mean(const int answer[])
{
   // variable
   int j = 0;
   int total = 0;

   printf("\t%s\n\t%7s\n\t%s\n", "**********", "median", "**********");

   // for loop to add the values of the vector
   for ( j = 0; j < 99; j++)
   {
      // total receives the sum 
      // of the values of the vector
      total += answer[j];
   } // end for

   // display result
   printf("A media e o valor medio dos itens dos dados\n"
   "A media e igual a soma de todos os dados\n"
   "dividido pelo tamanho do vector\n"
   "O valor media para essa execucao e: \n\t%d / %d = %.2f\n\n", total, SIZE, (double) total / SIZE);

} // end mean

void median(int answer[]) {

   printf("\t%s\n\t%7s\n\t%s\n%s\n", 
            "**********", 
            "  median", 
            "**********",
   "O array de resposta, nao ordenado e: \n");

  printArray(answer); // exibe array não ordenado
   
   bubbleSort(answer); // ordena array

   printf("\n\nO array ordenado e:\n");
   // printArray(answer); // exibe array ordenado

   // display element mediano
   printf("\n\nA mediana e o elemento %d do\n"
         "array ordenado de %d elementos.\n"
         "Para essa execução, a mediana e %d\n\n",
         SIZE / 2, SIZE, answer[SIZE / 2] );
} // end median

// determina a resposta mais frequente
void mode(int freq[], const int answer[]) {
   // variable
   int rating; // contador para acessar os elementos 1--9 do array freq
   int j; // contador para resumir os elementos 0--98 do array
   int h; // contador para exibir histograma dos elementos do array freq
   int larget = 0; // representa maior frequência
   int modeValue = 0; // representa resposta mais frequênte

   printf("\n%s\n%s\n%s\n", "**********", "  moda ",
         "**********" );
   // inicializa frequência em zero
   for (rating = 1; rating <= 9; rating++)
   {
      freq[rating] = 0;
   } // end for
   
   // frequência de resumo
   for (j = 0; j < SIZE; j++)
   {
      ++freq[answer[j]];
   } // end for
   
   // cabeçalhos
   printf("%s%11s%19s\n\n%54s\n%54s\n\n",
         "Resposta", "Frequencia", "Histograma",
         "1    1    2    2", "5     0   5    0    5");

   // exibe resultados
   for ( rating = 1; rating <= 9; rating++)
   {
      printf("%8d%11d ", rating, freq[ rating ]);

      // acompanha valor da moda e valor da maior frequência
      if (freq[rating] > larget)
      {
         larget = freq[rating];
         modeValue = rating;
      } // end if

      // barra de histograma
      for ( h = 1; h <= freq[rating]; h++)
      {
         printf("*");
      }
      
      printf("\n"); // nova linha
   } // end for externo

   // exibe a moda
   printf("A moda é o valor mais frequente.\n"
          "Para essa execução, a moda e %d, \nque ocorreu"
          " %d vezes.\n\n", modeValue, larget);
} // end mode

// ordena o array bubbleSort
void bubbleSort(int vetor[])
{
   // variáveis
   int passada; // contador das passadas
   int j; // contador de comparação 
   int temp; // local temporário

   // loop for para as passadas
   for (passada = 1; passada < SIZE; passada++)
   {
      for (j = 0; j < SIZE; j++)
      {
         if (vetor[j] > vetor[j + 1])
         {
            temp = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = temp;
         } // end if         
      } // end for interno      
   } // end for passada   
} // end bubbleSort

// imprime o conteúdo do array
void printArray(const int vetor[]) 
{
   // variável
   int j;

   for ( j = 0; j < SIZE; j++)
   {
      if (j % 20 == 0)    
      {
         printf("\n");
      } // end if

      printf("%3d", vetor[j]);

   } // end for   
} // end printArray