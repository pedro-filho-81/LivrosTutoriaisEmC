/**
 * Passa argumentos para uma função por valor
 * Fig. 7.6: fig07_06.c  
 * Cubo de uma variável usando chamada por valor
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 212). Edição do Kindle. 
 * 11/10/2024
 */
#include <stdio.h>
#include <stdlib.h>

// prototipo de função
// passagem por valor
int cubeBYValue( int n );

int main()
{
   // variável
   int number = 5; // number recebe 5

      printf("\nPASANDO VALORES PARA FUNCAO POR VALOR");
   printf("\nAntes de main, cria a funcao:\t"
            "\n\tint cubeBYValue( int n );");

   printf("\nEm main, cria a variavel:\n\tint number = 5;\n");

   // exebe o resultado
   printf("Em main, O valor original de number eh: %d\n", number);

   printf("\nEm main, chama a funcao:\n"
         "E passa como argumento a variavel number\n"
         "\tcubeByValue( number );\n");

   printf("\nA funcao processa o valor de number\n"
         "E retorna o valor processado para number,\n"
         "number recebe o valor retornado da funcao:\n");

   // number é usado como parâmetro 
   // pela função cubeByValue esta
   // calcula e retorna o cubo do valor de namber
   // para a própia variável number
   number = cubeBYValue( number );

   // exibe o resultado
   printf("\tnumber = cubeByValue( number );\n");

   // exibe o resultado
   printf("\nnumber agora vale: %d\nque eh o cubo de 5\n\n", number);

   return 0;

} // end main

// function cubeByValue 
// recebe um valor e
int cubeBYValue( int n )
{
   // retorna n ao cubo
   return n * n * n;
} // end cubeByValue