/**
 * Fig. 7.26: fig07_26.c
 * Programa de classificação de múltiplas finalidades 
 * usando ponteiros para função
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 237). Edição do Kindle. 
 */
#include <stdio.h>

#define SIZE 10

// PROTÓTIPOs
void bubble(int work[], const int size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b); 

int main()
{
   // variaveis
   int order = 0; // 1 ordem crescente, 2 ordem decrescente
   // vetor
   int counter = 0; // contador
   
   // inicializa array
   int vetor[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

   // entrada de dados
   printf("\nDigite 1 para classificar em ordem crescente\n"
            "Digite 2 para classificar em ordem decrescente: ");
   scanf("%d", &order);

   printf("\nItens de dados na ordem original:\n");

   // loop for para exibir vetor
   for ( counter = 0; counter < SIZE; counter++)
      {
      printf("%4d", vetor[counter]);
   } // end for

   /**
    * Classifica array em ordem crescente: passa a 
    * função crescente como um argumento para espe-
    * cificar classificação crescente
    */

   if (order == 1)
   {
      bubble(vetor, SIZE, ascending);   
      printf("\nItens de dado em ordem crescente:\n");
   } // end if
   else { // passa para a função de desending
      bubble(vetor, SIZE, descending);      
      printf("\nItens de dado em ordem decrescente:\n");
   } // end else
   
   // loop for para exibir o vetor ordenado
   for ( counter = 0; counter < SIZE; counter++)
   {
      printf("%4d", vetor[counter]);
   } // end for
   
   printf("\n\n");
   return 0;

}// end main

// function
void bubble(int work[], const int size, int (*compare)(int a, int b))
{
   // variável
   int passada = 0; // passadas
   int counter = 0; // 

   // protótipo
   void inverte(int *element1Ptr, int *element2Ptr);

   for ( passada = 1; passada < size; passada++)
   {
      for ( counter = 0; counter < size - 1; counter++)
      {  
         if ((*compare)(work[counter], work[counter + 1]))
         {
            inverte(&work[counter], &work[counter + 1]);
         } // end if
      } // end for j
   } // end for pass   
} // end function bobble

// function swap
void inverte(int *element1Ptr, int *element2Ptr)
{
   int hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
} // end swap

// function ascending
int ascending(int a, int b)
{
   return b < a;
} // end ascending

// finction descending  
int descending(int a, int b)
{
   return b > a;
} // end descending