/**
 * 
 * 09/10/2024
 */
#include <stdio.h>
#include <stdlib.h> // para srand e rand
#include <time.h> // para srand()
 
// cria e inicializa variável global
// que será usado como índice da matriz
int tam = 5;

// cria um matriz global que será vista
// por qualque função no programa
// as funções não precisam ter um parâmetro
// para manipular a matriz
int matriz[5][5];

// cria um procedimento para imprimir os valores
// de uma matriz
void imprimir()
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
   printf("\n");
} // end imprimir

// cria uma função para somar as linhas
// da matriz
int somarLinhas(int linha)
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

// cria uma função para somar as linhas
// da matriz
int somarColunas(int coluna)
{
   // variáveis
   int linha, soma = 0;

   // loop para somar os valores da linha
   for ( linha = 0; linha < tam; linha++)
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
   
   printf("\nmatriz:\n");
   // chama a função para exibir a matriz
   imprimir(matriz);

   printf("Soma das linhas:\n");
   // loop para somar as linhas da matriz
   for ( i = 0; i < tam; i++)
   {
      // exibir
      printf("A soma da linha %d eh %d\n", i, somarLinhas(i));
   } // end for soma   
   
   printf("\nSoma das colunas:\n");
   // loop para somar as colunas da matriz
   for ( i = 0; i < tam; i++)
   {
      // exibir
      printf("A soma da coluna %d eh %d\n", i, somarColunas(i));
   } // end for soma

   printf("\n");

   return 0;

} // end main