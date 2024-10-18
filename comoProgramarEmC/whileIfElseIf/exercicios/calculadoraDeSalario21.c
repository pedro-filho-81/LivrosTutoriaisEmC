/*
   Questão: 3.21 Calculadora de salário. Desenvolva um programa  que determine
   o salário semanal bruto de vários funcionários. A empresa paga ‘uma hora
   normal’ para cada  funcionário pelas primeiras 40 horas trabalhadas, ‘uma
   hora normal e meia’ por hora trabalhada a partir de 40  horas. Você recebe
   uma lista de funcionários da empresa, o número de horas que cada funcionário
   trabalhou  na semana anterior e o valor ganho por hora de cada  funcionário.
   Seu programa deverá ler essas informações  para cada funcionário e determinar
   e exibir o salário que  cada um deverá receber. Aqui está um exemplo do
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
   int horasTrabalhadas = 0; // para saber as horas trabalhadas
   float valorDaHoraTrabalhada = 0; // valor em Real da hora trabalhada
   float salario = 0; // calcular o salário
   float horasExtras = 0; // calcular horas extras

   // cabeçalho
   printf( "CALCULADORA DE SALÁRIO\n" );

   // entrada de dados
   printf( "Digite o total das horas trabalhadas [-1 para sair]: " );
   scanf( "%d", &horasTrabalhadas );

   // enquanto horas trabalhadas diferente de -1 faça
   while( horasTrabalhadas != -1 )
   {
      // entrada de dados
      printf( "Informe o valor da hora trabalhada R$" );
      scanf( "%f", &valorDaHoraTrabalhada );

      // se horas trabalhadas menor ou igual a 40 horas
      if( horasTrabalhadas <= 40 ) {

         // calcular o salário
         salario = horasTrabalhadas * valorDaHoraTrabalhada;
      } // fim if

      // se não
      else {
         
         // calcular o salário
         horasExtras = valorDaHoraTrabalhada * 0.5;
         salario =  horasTrabalhadas * valorDaHoraTrabalhada + horasExtras;
      } // fim else

      // imprimir resultado
      printf( "O valor do salário é de R$%.2f\n\n", salario );

      // entrada de dados
      printf( "Digite o total das horas trabalhadas [-1 para sair]: " );
      scanf( "%d", &horasTrabalhadas );

   } // fim while


   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN