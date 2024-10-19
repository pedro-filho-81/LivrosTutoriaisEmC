/*
   Questão: 3.28 Valide a entrada do usuário. Modifique o programa  da Figura
   3.10 para validar suas entradas. Em qualquer  entrada, se o valor inserido
   for diferente de 1 ou 2, continue o looping até que o usuário informe
   um valor correto.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 76). Edição do Kindle.
   Autor: Pedro Filho, 17/01/2021
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

   // cria variável senha
   int senhaValida = 0; // senha válida 1 ou 2
   int contador = 1;

   // cabeçalho
   printf( "\tSENHA CORRETA\n" );

   // enquanto senha diferente de 12534 faça
   while( contador <= 10 ) {

      // entrada de dados
      printf( "\nDigite o número 1 ou 2: " );
      scanf( "%d", &senhaValida );

      // se senha igual a 1
      if( senhaValida == 1 ) {
         printf( "Senha válida!\n" );
         contador += 10;
      } // fim if

      // se senha igual a 1
      if( senhaValida == 2 ) {
         printf( "Senha válida!\n" );
         contador += 10;
      } // fim if

      // contador
      contador++;

} // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN