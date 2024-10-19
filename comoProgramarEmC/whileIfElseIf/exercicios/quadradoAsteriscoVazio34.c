/*
   Questão: 3.34 Quadrado de asteriscos vazio. Modifique o programa que você
   escreveu no Exercício 3.33 para que ele  exiba um quadrado vazio.
   Por exemplo, se seu programa ler um tamanho 5, ele deverá exibir
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edição do Kindle.
   Autor: Pedro Filho, 15/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria variáveis
   int linha = 1;  // para linha
   int linha2 = 1; // para segunda linha
   int coluna1 = 3; // para coluna
   int coluna2 = 3; // para a segunda coluna
   int vazio = 0; // para o vazio do quadrado
   int num = 0; // define o tamanho da linha e coluna

   // cabeçalho
   printf( "QUADRO DE ASTERISCO VAZIO\n" );

   // entrada de dados
   printf( "Informe o tamanho do quadrado: " ); // prompt
   scanf( "%d", &num );

   //MOSTRA A primeira LINHA
   // enquanto linha menor que num
   while( linha <= num ) {

      // imprima
      printf( "*" );

      // incrementa linha
      linha++;

   }  // fim while linha

   // pular linha
   printf( "\n" );

   //MOSTRAR A primeira COLUNA
   while( coluna1 <= num ) {

      // imprime
      printf( "*" );

      // inicializa vazio
      vazio = 0;
      // MOSTRAR A LINHA VAZIA ENTRE AS COLUNAS
      // enquanto linha menor ou igual num
      while( vazio <= num - 3 ) {

         // imprima
         printf( " " );
         // incrementa vazio
         vazio++;

      }  // fim while vazio


      // MOSTRA A SEGUNDA COLUNA
      printf( "*\n" );
      // incrementa coluna1
      coluna1++;

   }  // fim while coluna1

   //MOSTRA A SEGUNDA LINHA
   // enquanto linha menor que num
   while( linha2 <= num ) {

      // imprima
      printf( "*" );

      // incrementa linha
      linha2++;

   }  // fim while linha

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN