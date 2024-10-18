/*
   Questão: 3.20 Calculadora de juros. Os juros simples sobre um  empréstimo
   são calculados a partir da fórmula  juros = principal * taxa * dias/ 365;
   Essa fórmula considera que taxa seja a taxa de juros  anual e, portanto,
   inclui a divisão por 365 (dias). Desenvolva um programa que aceite principal,
   taxa e dias  para vários empréstimos, calcule e apresente os juros simples
   para cada empréstimo, usando a fórmula apresentada. Veja um exemplo do
   diálogo de entrada/saída:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edição do Kindle.
   Autor: Pedro Filho, 16/01/2021
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

   // variáveis
   float valorDoEmprestimo = 0; // para o valor principal
   float taxaDeJurosAnual = 0; // para a taxa
   float juros = 0; // para os juros
   float prazoParaPagar = 0; // prazo para o pagamento do empréstimo
   
   // cabeçalho
   printf( "CALCULADORA DE JUROS SIMPLES\n" );
   
   // entrada de dados
   printf( "Informe o valor principal do empréstimo [-1 para sair] R$" ); // prompt
   scanf( "%f", &valorDoEmprestimo );

   // enquanto valor do empréstimo for diferente de zero faça
   while( valorDoEmprestimo != -1 )
   {
      // entrada de dados
      printf( "Informe o valor da taxa de juros anual: " );
      scanf( "%f", &taxaDeJurosAnual );

      printf( "Informe o prazo do empréstimo em dias: " );
      scanf( "%f", &prazoParaPagar );

      // calcular os juros
      juros = valorDoEmprestimo * taxaDeJurosAnual * prazoParaPagar / 365;

      // imprimir resultado
      printf( "O valor dos juros é de R$%.2f\n\n", juros );

      // entrada de dados
      printf( "Informe o valor principal do empréstimo [-1 para sair] R$" ); // prompt
      scanf( "%f", &valorDoEmprestimo );

   }  // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN