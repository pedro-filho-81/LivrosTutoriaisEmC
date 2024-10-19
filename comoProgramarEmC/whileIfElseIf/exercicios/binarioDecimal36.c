/*
   Questão:3.36 Imprimindo o equivalente decimal de um número binário. Leia
   um inteiro contendo apenas 0s e 1s  (ou seja, um inteiro ‘binário’)
   e imprima seu equivalente decimal. [Dica: use os operadores de módulo
   e divisão  para apanhar os dígitos do número ‘binário’ um de cada  vez,
   da direita para a esquerda. Assim como no sistema  numérico decimal, em que
   o dígito mais à direita tem  um valor posicional de 1, e o próximo dígito
   à esquerda  tem um valor posicional de 10, depois de 100, depois de  1.000,
   e assim por diante, no sistema binário, o dígito mais à direita tem um valor
   posicional de 1, o próximo  dígito à esquerda tem um valor posicional de 2,
   depois de  4, depois de 8 e assim por diante. Assim, o número 234  pode ser
   interpretado como 4 * 1 + 3 * 10 + 2 * 100.  O equivalente decimal do binário
   1101 é 1 * 1 + 0 * 2  + 1 * 4 + 1 * 8 ou 1 + 0 + 4 + 8 ou 13.]
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edição do Kindle.
   Autor: Pedro Filho, 18/01/2021
*/

#include<stdlib.h>
#include<stdio.h>
#include <locale.h>
#include<math.h>

int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "portuguese" );

   // cria variável
   int binario = 0; // recebe valor do usuário
   int decimal = 0; // calcula o decimal
   int recebeBinario = 0; // recebe o valor
   int contador = 0; // contador do while

   // entrada de dados
   printf( "Informe um número binário: " );
   scanf( "%d", &binario );

   // recebe o valor do binário
   recebeBinario = binario;

   // enquanto binário maior que zero faça
   while( binario > 0 ) {

      // calcular o decimal
      decimal += pow( 2, contador ) * ( binario % 10 );

      // binário dividido por 10
      binario /= 10;

      // incrementa contador
      contador++;

   } // fim while

   // mostrar resultado
   printf( "\nO valor binário |%d|\nequivale ao número |%d| em decimal.\n\n",
          recebeBinario, decimal );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

} // fim main