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
   printf("\na, b, c) matriz:\n");
   for (int i = 0; i < LINHA; i++)
   {  printf("linha %d =>  ", i + 1);
      for (int j = 0; j < COLUNA; j++)
      {
         printf("%3d", t[i][j]);
      } // end coluna
      printf("\n");   
   } // end linha
   printf("\n");

   printf("d) Exibe todos os elementos da segunda linha de t:\n");
   printf("t[1][COLUNA] = ");
   for (int j = 0; j < COLUNA; j++)
   {
      printf("%3d", t[1][j]);
   } // end for coluna

   // f)
   printf("\ne) Exibe os valores da terceira coluna de t:\n");
   printf("t[LINHA][2] = ");
   for (int j = 0; j < LINHA; j++)
   {
      printf("%3d", t[j][2]);
   } // end for coluna

   // g)
   printf("\nf) Define o elementos de t linha 1 coluna 2 com 0:\n");
   // matriz linha 1 coluna 2 recebe zero 0
   t[0][1] = 0;
   // exibe a linha 1 coluna 2 como o valor zero 0
   printf("t[0][1] = %d;\n\n", t[0][1]);

   // exibir matriz
   printf("g) matriz:\n");
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
   printf("h) matriz:\n");
   for (int i = 0; i < LINHA; i++)
   {  printf("linha %d =>  ", i + 1);
      for (int j = 0; j < COLUNA; j++)
      {
         printf("%3d", t[i][j]);
      } // end coluna
      printf("\n");   
   } // end linha
   printf("\n");

   // i) usando for inicializar a matriz com zeros
   for (int i = 0; i < LINHA; i++)
   {
      for (int j = 0; j < COLUNA; j++)
      {
         t[i][j] = 0; // matriz recebe zero
      } // end for coluna      
   } // end for linha

   // exibir matriz com zeros
   printf("i) matriz:\n");
   for (int i = 0; i < LINHA; i++)
   {  printf("linha %d =>  ", i + 1);
      for (int j = 0; j < COLUNA; j++)
      {
         printf("%3d", t[i][j]);
      } // end coluna
      printf("\n");   
   } // end linha
   printf("\n");

   // insere valores na matriz via usuário
   int valor = 0; // valor do usuário
   for (int i = 0; i < LINHA; i++)
   {
      for (int j = 0; j < COLUNA; j++)
      {
         printf("Digite um valor para t[%d][%d] = ", i, j);
         scanf("%d", &valor); // entrada do uauário
         t[i][j] = valor; // t recebe os valores
      } // end for coluna      
   } // end for linha
   
   // exibir valores da matriz
   printf("j) matriz:\n");
   for (int i = 0; i < LINHA; i++)
   {  printf("linha %d =>  ", i + 1);
      for (int j = 0; j < COLUNA; j++)
      {
         printf("%3d", t[i][j]);
      } // end coluna
      printf("\n");   
   } // end linha
   printf("\n");

   // k) achar o menor valor de t   
   // loop para adicionar valores
   for (int i = 0; i < LINHA; i++)
   {
      for (int j = 0; j < COLUNA; j++)
      {
         // adiciona valores aleatórios a matriz 
         t[i][j] = 1 + rand() % 50;
      } // end for coluna      
   } // end for linha

   // cria variável
   int menor = t[0][0]; // menor recebe o primeiro valor de t

   // loop para pesquisar a matriz
   for (int i = 0; i < LINHA; i++)
   {
      for (int j = 0; j < COLUNA; j++)
      {
         // se t menor que menor
         if (menor > t[i][j]) // se verdade
         {
            // menor recebe o valor de t
            menor = t[i][j]; // 
         } // end if         
      } // end for clouna      
   } // end for linha
   
   // variável soma
   int soma = 0;

   // exibir valores da matriz
   printf("k) matriz:    [1] [2] [3] [4] [5]\n");
   for (int i = 0; i < LINHA; i++)
   {  printf("linha %d =>  ", i + 1);
      for (int j = 0; j < COLUNA; j++)
      {
         printf("%4d", t[i][j]);
         soma += t[i][j]; // soma os valores de t
      } // end coluna
      printf("\n");   
   } // end linha
   printf("\n");

   // exibir
   printf("O menor valor e: %d\n", menor);

   // l) exibir a primeira linha de t
   printf("\nl) Exibe a primeira linha de t.\n");
   
   // exibir valores da matriz
   printf("l) matriz:\n");
   printf("linha %d =>  ", 1);
   for (int j = 0; j < COLUNA; j++)
   {
      printf("%4d", t[0][j]);
   } // end coluna
   printf("\n");   

   // exibe a soma dos valores de t
   printf("\nTotal do valores da matriz: %d\n\n", soma);

   // exibir valores da matriz
   printf("m) matriz:    [1] [2] [3] [4] [5]\n");
   printf("\nlinha %d =>  ", 1);
   for (int j = 0; j < COLUNA; j++)
   {
      printf("%4d", t[0][j]);
   } // end coluna
   printf("\n");   

   // exibir valores da matriz
   printf("\nn) matriz:    [1] [2] [3] [4] [5]\n");
   for (int i = 0; i < LINHA; i++)
   {  printf("linha %d =>  ", i + 1);
      for (int j = 0; j < COLUNA; j++)
      {
         printf("%4d", t[i][j]);
         soma += t[i][j]; // soma os valores de t
      } // end coluna
      printf("\n");   
   } // end linha
   printf("\n");

   return 0;   
} // end main
