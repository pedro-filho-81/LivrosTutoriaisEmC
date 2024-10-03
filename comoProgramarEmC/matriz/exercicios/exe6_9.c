#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 2
#define COLUNA 5

/**
 * 6.9 Considere um array de inteiros t de 2 por 5.  
 * a) Escreva uma definição para t.  
 * b) Quantas linhas t possui?  
 * c) Quantas colunas t possui?  
 * d) Quantos elementos t possui?  
 * e) Escreva os nomes de todos os elementos na 
 * segunda linha de t.  
 * f) Escreva os nomes de todos os elementos na 
 * terceira  coluna de t.  
 * g) Escreva uma única instrução que defina o 
 * elemento  de t na linha 1, coluna 2, como zero.  
 * h) Escreva uma série de instruções que inicializem  
 * cada elemento de t em zero. 
 * Não use uma estrutura de repetição. 
 * i) Escreva uma estrutura for aninhada que 
 * inicialize  cada elemento de t em zero.  
 * j) Escreva uma instrução que insira os valores dos 
 * elementos de t a partir do terminal.  
 * k) Escreva uma série de instruções que determinem 
 * e  imprimam o menor valor no array t.  
 * l) Escreva uma instrução que apresente os 
 * elementos  da primeira linha de t.  
 * m) Escreva uma instrução que some os elementos da  
 * quarta coluna de t.  
 * n) Escreva uma série de instruções que imprimam o  
 * array t em formato tabular. Liste os subscritos de  
 * coluna como cabeçalhos no topo e liste os 
 * subscritos de linha à esquerda de cada
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 199). Edição do Kindle. 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 200). Edição do Kindle. 
 * Pedro, 01/10/2024
 */
int main()
{
   //matriz
   int t[ LINHA ] [ COLUNA ];

   printf("\nb) #define LINHA 2\nc) #define COLUNA 5\n");
   printf("a) int t[LINHA][COLUNA];\n");
   printf("t tem 10 elementos.\n");

   srand(time(NULL));

   // loop para adicionar valores
   for (int i = 0; i < LINHA; i++)
   {
      for (int j = 0; j < COLUNA; j++)
      {
         // adiciona valores aleatórios a matriz 
         t[i][j] = 1 + rand() % 50;
      } // end for coluna      
   } // end for linha

   // exibir matriz
   printf("\nmatriz:\n");
   for (int i = 0; i < LINHA; i++)
   {  printf("linha %d =>  ", i + 1);
      for (int j = 0; j < COLUNA; j++)
      {
         printf("%3d", t[i][j]);
      } // end coluna
      printf("\n");   
   } // end linha
   printf("\n");

   printf("Exibe todos os elementos da segunda linha de t:\n");
   printf("t[1][COLUNA] = ");
   for (int j = 0; j < COLUNA; j++)
   {
      printf("%3d", t[1][j]);
   } // end for coluna

   // f)
   printf("\nExibe os valores da terceira coluna de t:\n");
   printf("t[LINHA][2] = ");
   for (int j = 0; j < LINHA; j++)
   {
      printf("%3d", t[j][2]);
   } // end for coluna

   // g)
   printf("\nDefine o elementos de t linha 1 coluna 2 com 0:\n");
   // matriz linha 1 coluna 2 recebe zero 0
   t[0][1] = 0;
   // exibe a linha 1 coluna 2 como o valor zero 0
   printf("t[0][1] = %d;\n\n", t[0][1]);

   // exibir matriz
   printf("matriz:\n");
   for (int i = 0; i < LINHA; i++)
   {  printf("linha %d =>  ", i + 1);
      for (int j = 0; j < COLUNA; j++)
      {
         printf("%3d", t[i][j]);
      } // end coluna
      printf("\n");   
   } // end linha
   printf("\n");

   // h) inicializa array t com zero
   t[0][0] = 0;
   t[0][1] = 0;
   t[0][2] = 0;
   t[0][3] = 0;
   t[0][4] = 0;
   t[1][0] = 0;
   t[1][1] = 0;
   t[1][2] = 0;
   t[1][3] = 0;
   t[1][4] = 0;
   
   // exibir matriz com zeros
   printf("matriz:\n");
   for (int i = 0; i < LINHA; i++)
   {  printf("linha %d =>  ", i + 1);
      for (int j = 0; j < COLUNA; j++)
      {
         printf("%3d", t[i][j]);
      } // end coluna
      printf("\n");   
   } // end linha
   printf("\n");

   return 0;   
} // end main
