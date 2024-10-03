#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * 6.8 Escreva instruções que realizem as seguintes 
 * tarefas:  
 * a) Exibam o valor do sétimo elemento do array de 
 * caracteres f.  
 * b) Incluam um valor no elemento 4 do array de 
 * ponto  flutuante com o subscrito único b.  
 * c) Inicializem cada um dos cinco elementos do 
 * array  de inteiros com o subscrito único g em 8.  
 * d) Somem os elementos do array de ponto flutuante 
 * c  de 100 elementos.  
 * e) Copiem o array a na primeira parte do array b. 
 * Considere double a[11], b[34];  
 * f) Determinem e imprimam o menor e o maior valor 
 * contidos no array de ponto flutuante com 99 
 * elementos w. 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 199). Edição do Kindle. 
 * Pedro, 01/10/2024
 */
int main()
{
   // cabeçalho
   printf("\nRespostas das questoes:\n");
   // a) Exibam o valor do sétimo elemento do array de caracteres f.
   int f[10]; // declara e cria um array de 10 elementos
   f[6] = 10; // atribui 10 na posição 7 do array f
   // exibe o valor da posição 7 do array
   printf("a) f[6] = %d\n", f[6]);

   // b) Incluam um valor no elemento 4 do array de  ponto  flutuante com o subscrito único b.
   float b[10];
   b[3] = 2.5;
   printf("b) b[3] = %.2f\n", b[3]);

   // c) Inicializem cada um dos cinco elementos do array  de inteiros com o subscrito único g em 8.
   int g[5] = {8,8,8,8,8};
   printf("c) g[5] = { ");
   for (int i = 0; i < 5; i++)
   {
      // exibe os valores de g
      printf("%d ", g[i]);
   } // end for
   printf("};\n");

   // d) Somem os elementos do array de ponto flutuante c  de 100 elementos.
   float c[100];
   float soma;
   // adiciona valores
   for (int i = 0; i < 100; i++)
   {
      c[i] = i; // array recebe os valores de i
      soma += c[i]; // soma os valores do array
   } // end for i
   // exibe a soma
   printf("d) A soma de c[100] e: %.2f\n", soma);
   
   // e) Copiem o array a na primeira parte do array b. Considere double a[11], b[34];  
   int a[11];
   int b2[34];
   // adiciona valores em a
   for (int i = 0; i < 11; i++)
   {
      a[i] = i;
   } // end for a

   // adiciona os valores de a em b
   for (int i = 0; i < 34; i++)
   {
      if (i < 11)
      {
         b2[i] = a[i];
      } else
         b2[i] = 0;
   } // end for b

   // exibe os valores de a
   printf("e) a[11] = { ");
   for (int i = 0; i < 11; i++)
   {
      printf("%d ", a[i]);
   } // end for exibe a
   printf(" };\n");

   // exibe os valores de b
   printf("e) b[34] = { ");
   for (int i = 0; i < 34; i++)
   {
      printf("%d ", b2[i]);
   } // end for b
   printf(" };\n");

   /*
 * f) Determinem e imprimam o menor e o maior valor 
 * contidos no array de ponto flutuante com 99 
 * elementos w. 
   */
  // cria vetor
  float w[99];
  float maior, menor;
  const int count = 99;

  srand(time(NULL));

  // adiciona valores ao vetor
  for (int i = 0; i < count; i++)
  {
      w[i] = ((i + rand() % 55) * 0.23) / ((i + rand() % 55) * 0.57);
  } // end for

   // atribui valores para
   maior = w[0];
   menor = w[0];

   // loop para pesquisar o
   for (int i = 0; i < count; i++)
   {
      // maior valor
      if (w[i] > maior)
      {
         maior = w[i];
      } // end if
      // menor valor
      else if (w[i] < menor)
      {
         menor = w[i];
      } // end else if      
   } // end for i

   // exibir resultado
   printf("O maior valor e = %.5f", maior);
   printf("\nO menor valor e = %.5f\n", menor);
  
} // end main