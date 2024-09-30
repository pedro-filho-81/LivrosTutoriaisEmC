#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 100

// protótipo
int linearSearch(const int vetor[], int key, int size);

int main()
{
   setlocale(LC_ALL, "Portuguese");
   
   // vetor
   int vetor[SIZE]; 

   // variáveis
   int x; // contador
   int searchKey; // para o valor a pesquisar
   int element; // recebe posição do valor da pesquisa

   // cria dados no vetor
   for ( x = 0; x < SIZE; x++)
   {
      vetor[x] = 2 * x; // adiciona valor no vetor
   } // end for

   // entrada de dados
   printf("Digite o valor a pesquisar: ");
   scanf("%d", &searchKey);

   // recebe o valor da pesquisa
   element = linearSearch(vetor, searchKey, SIZE);

   // exibe resultado
   if (element != -1)
   {
      printf("Valor encontrado no elemento %d\n", element);
   } else {
      printf("Valor não encontrado.");
   } // end if else   
   return 0;
} // end main

// linear search
int linearSearch(const int vetor[], int key, int size)
{
   // variável
   int n; // contador

   // loop para pesquisar
   for (n = 0; n < size; n++)
   {
      if (vetor[n] == key)
      {
         return n; // retorna o local da chave
      } // end if      
   } // end for

   return -1;

} // end linearSearch