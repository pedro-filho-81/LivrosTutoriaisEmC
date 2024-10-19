/*
   Questão: 3.27 Ache os dois maiores números. Usando uma técnica  semelhante
   à do Exercício 3.24, ache os dois maiores  valores dos 10 números.
   [Nota: você poderá informar  cada número apenas uma vez.]
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edição do Kindle.
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

   // cria variáveis
   int num = 0;
   int primeiroMaior = 0;
   int segundoMaior = 0;
   int terceiroMaior = 0;
   int contador = 1;

   // cabeçalho
   printf( "\tPRIMEIRO e SEGUNDO MAIOR\n" );

   // loop para adicionar valor
   // enquanto contador menor ou igual a 10
   while( contador <= 5 ) {

      // entrada de dados
      printf( "Digite um valor: " );
      scanf( "%d", &num );

      // se o contador igual a 1
      if( contador == 1 ) {

         // primeiro recebe num e
         primeiroMaior = num;

         // segundo recebe num
         segundoMaior = num;

      } // fim if

      // se num maior que primeiro maior
      if( num > primeiroMaior ) {

         // segundo recebe primeiro;
         segundoMaior = primeiroMaior;
         // primeiro maior recebe num
         primeiroMaior = num;
      }  // fim if externo

      // se o primeiro igual ao segundo e
      if( primeiroMaior == segundoMaior )
      {
         // se num menor que o primeiro
         if( num < primeiroMaior )
            // segundo recebe número
            segundoMaior = num;
      }
      
      // se num menor que o primeiro e
      if( num < primeiroMaior )
      {
         // num maior que o segundo
         if( num > segundoMaior )
            // segundo recebe num
            segundoMaior = num;
      }
      
      // incremanta contador
      contador++;

   }  // fim while

   // imprime resultado
   printf( "O maior valor eh: %d\no segundo maior eh: %d\nterceiro Maior eh: %d\n\n", primeiroMaior, segundoMaior, terceiroMaior);

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN