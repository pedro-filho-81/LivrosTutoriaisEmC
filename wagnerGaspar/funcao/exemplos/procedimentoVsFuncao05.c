/**
 * Procedimento para imprimir uma matriz.
 * Função para somar uma linha da matriz.
 * Diferença entre procedimento e função
 * Procedimento é uma função que não retorna valor
 * Função retorna um valor para a função
 * Procedimento é do tipo (VOID nome_do_procedimento(com ou sem parâmetro) E NÃO retorna um valor.).
 * Função é do tipo (INT, CHAR, FLOAT nome_da_função(com parâmetro) e retorna um valor)
 * 09/10/2024
 */
#include <stdio.h>
#include <stdlib.h> // para srand e rand
#include <time.h> // para srand()

// cria e inicializa variável global
// que será usado como índice da matriz
int tam = 5;

// cria um procedimento para imprimir os valores
// de uma matriz
void imprimir(int matriz[][5])
{
   // variável 
   int i, j;

   // loop para linhas da matriz
   for ( i = 0; i < tam; i++)
   {
      // exibir
      printf("linha %d => ", i);

      // loop para as colunas
      for ( j = 0; j < tam; j++)
      {
         // exibir valores da matriz
         printf("%2d ", matriz[i][j]);
      } // end for j
      printf("\n"); // pula linha
   } // end for i
   printf("\n\n");
} // end imprimir

// cria uma função para somar os valores da matriz
int somarLinhas(int matriz[][5], int linha)
{
   // variáveis
   int coluna, soma = 0;

   // loop para somar os valores da linha
   for ( coluna = 0; coluna < tam; coluna++)
   {
      // somar os valores da matriz na
      // linha indicada pelo usuário
      soma += matriz[linha][coluna];
   } // end for coluna

   // retorna o valor da soma
   return soma;
} // end função somarLinhas

int main()
{
   // cria a matriz
   int matriz[tam][tam];

   // variáveis
   int i, j;

   //  gera semente pa rand()
   srand(time(NULL));

   // loop para adicionar valores na matriz
   // poderia ser criado um procedimento para
   // fazer essa adição
   for ( i = 0; i < tam; i++)
   {
      for ( j = 0; j < tam; j++)
      {
         // adiciona valores aleatórios na matriz
         matriz[i][j] = 1 + rand() % 10;
      } // end for coluna      
   } // end for linha
   
   // chama a função para exibir a matriz
   imprimir(matriz);

   // loop para somar os valores da matriz
   for ( i = 0; i < tam; i++)
   {
      // exibir
      printf("A soma da linha %d eh %d\n\n", i, somarLinhas(matriz, i));
   } // end for soma   

   return 0;

} // end main