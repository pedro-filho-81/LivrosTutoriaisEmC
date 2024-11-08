/**
 * 3.7 Escreva instruções em C que:  
 * a) leiam a variável inteira x com scanf.  
 * b) leiam a variável inteira y com scanf.  
 * c) inicializem a variável inteira i em 1.  
 * d) inicializem a variável inteira potência em 1.  
 * e) multipliquem a variável potência por x e atribua 
 * o  resultado à potência.  
 * f) incrementem a variável i em 1.  
 * g) testem i para verificar se ele é maior ou igual a 
 * y na  condição de uma estrutura while.  
 * h) exibam a variável inteira potência com printf. 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 71). Edição do Kindle. 
 * 08/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  // localiza região
  setlocale(LC_ALL, "Portuguese" );

   //variáveis
   int x = 0; // valor a ser calculado
   int y = 0; // valor a ser elevado
   int i = 1; // valor da repetição
   int potencia = 1; // valor da potência
   // mostra cabeçalho
   printf( "{ POTENCIAÇÃO }\n" );
   // entrada de dados
   printf( "Digite um valor: " );
   scanf( "%d", &x ); // entrada pelo usuário
   printf( "x elevado a: " );
   scanf( "%d", &y ); // entrada pelo usuário
   // faça enquanto i for menor ou igual a y
   while( i <= y ) {
      potencia *= x; // calculando a potência de x
      i++; // incrementa 1 a i
   } // fim while
   // mostra o resultado
   printf( "%d elevado a %d = %d\n", x, y, potencia );

   // pula uma linha
   printf( "\n" );

  // pausar
  system( "pause" );

  return 0;

} // fim main