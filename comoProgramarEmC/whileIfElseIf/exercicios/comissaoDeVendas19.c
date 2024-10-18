/*
   Questão: 3.19 Calculadora de comissão de vendas. Uma grande  companhia
   química paga seus vendedores por comissão.  Os vendedores recebem R$ 200,00
   por semana, mais 9  por cento de suas vendas brutas nessa semana.
   Por exemplo, um vendedor que comercialize R$ 5.000,00 em produtos químicos
   em uma semana receberá R$ 200,00 e  mais 9 por cento de R$ 5.000,00, ou seja,
   receberá um  total de R$ 650,00. Desenvolva um programa que peça
   os  valores brutos de cada vendedor na semana que passou,  calcule e apresente
   o valor que esse vendedor deverá receber. Processe os valores referentes
   a um vendedor por vez.  Veja um exemplo do diálogo de entrada/saída:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 74). Edição do Kindle.
   Autor: Pedro Filho, 1//10/2024
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
   const float salario = 200.00; // salário semanal
   float vendasBrutas = 0; // para entrada das vendas brutas
   float percentualDasVendas = 0; // calcular os 9% sobre vendas brutas
   float pagamento = 0; // para calcular o valor da semana

   // entrada de dados
   printf( "Informe o valor das vendas brutas R$" );
   scanf( "%f", &vendasBrutas );

   // enquanto vendas brutas diferente de -1 faça
   while( vendasBrutas != -1 )
   {
      // calcular o percentual sobre as vendas brutas
      percentualDasVendas = vendasBrutas * 9 / 100;

      // calcular o pagamento
      pagamento = salario + percentualDasVendas;

      // imprime o valor do pagamento semanal
      printf( "O pagamento é de R$%.2f\n\n", pagamento );

      // entrada de dados
      printf( "Informe o valor das vendas brutas R$" );
      scanf( "%f", &vendasBrutas );
   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN