/**
 * Como encontrar o menor e o maior valor
 * em um vetor usando ponteiros.
 * aula - 192
 */
#include <stdio.h>

#define SIZE 10

// procedimento
// os parâmetros são ponteiros e recebem como 
// argumentos os endereços das variáveis
void menorMaior(int *vetor, int *menor, int *maior)
{
   // variaveis
   int i; // contador
 
   // atribuições
   *menor = *vetor; // menor recebe o valor do vetor
   *maior = *vetor; // maior recebe o valor do vetor

   // loop for para percorrer o vetor
   for ( i = 1; i < SIZE; i++)
   {
      // verifica se o valor de menor é
      // maior que o valor no vetor
      if(*menor > *(vetor + i)) // se verdade
         // menor recebe o valor do vetor
         *menor = *(vetor + i);
      
      // verifica se o valor de maior é
      // menor que o valor do vetor
      if(*maior < *(vetor + i)) // se verdade
         // maior recebe o valor do vetor
         *maior = *(vetor + i);
   } // end for    
} // end maior menor

int main()
{
   // cria o vetor
   int vetor[SIZE] = {12,20,25,95,45,68,18,100,74,32};

   // cria as variáveis ponteiros
   int *menor, *maior;

   // exibe resultado
   printf("\nExibe lixo de memoria:\nO menor valor eh: %d\nO maior valor eh: %d\n", menor, maior);

   // chama a função menor maior e passamos com
   // argumentos o vetor e os endereços
   // das variáveis &menor e &maior
   menorMaior(vetor, &menor, &maior);

   // exibe o resultado
   printf("\nApos o procedimento\nO menor valor eh: %d\nO maior valor eh: %d\n", menor, maior);

   printf("\n\n");
   return 0;
} // end main