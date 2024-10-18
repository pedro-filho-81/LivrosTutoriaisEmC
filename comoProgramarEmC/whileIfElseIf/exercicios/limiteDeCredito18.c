/*
   Questão: loja de departamentos excedeu seu limite de crédito. Os  seguintes
   fatos estão disponíveis para cada cliente:
   a) Número de conta.
   b) Saldo no início do mês.
   c) Total de todos os encargos desse cliente nesse mês.
   d) Total de todos os créditos aplicados à conta desse  cliente nesse mês.
   e) Limite de crédito autorizado.
   O programa deverá ler cada um desses fatos, calcular o  novo saldo
   (= saldo inicial + encargos - créditos)  e determinar se o novo saldo é
   superior ao limite de  crédito do cliente. Para os clientes cujo limite
   de crédito foi ultrapassado, o programa deverá exibir o número  de conta
   do cliente, o limite de crédito, o novo saldo e  a mensagem ‘Limite de
   crédito ultrapassado’. Veja um  exemplo do diálogo de entrada/saída:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 74). Edição do Kindle.
   Autor: Pedro Filho, 15/01/2021
*/

// Incluir Biblioteca
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int numContaCliente = 0; // número da conta do cliente
   float saldoDevedor = 0; // saldo no iníco do mês
   float limiteDeCredito = 0; // limite de crédito na loja
   float encargosMonetarios = 0; // total de encargos
   float ComprasDoMes = 0; // total de compras efetuados no mês
   float valorDosDebitos = 0;

   // cabeçalho
   printf( "\tLIMITE DE CRÉDITO\n" );

   // entrada de dados
   printf( "Informe o número da conta [ -1 para sair ]: " ); // prompt
   scanf( "%d", &numContaCliente ); // entrada do usuário

   // enquanto número da conta do cliente diferente de -1
   while( numContaCliente != -1 )
   {
      // entrada de dados
      printf( "Informe o saldo devedor: " ); // prompt
      scanf( "%f", &saldoDevedor );

      printf( "Informe os encargos R$" ); // prompt
      scanf( "%f", &encargosMonetarios );

      printf( "Infrome as compras do mês R$ " ); // prompt
      scanf( "%f", &ComprasDoMes );

      printf( "Informe o limite de crédito: " ); // prompt
      scanf( "%f", &limiteDeCredito );

      // calcular
      valorDosDebitos = saldoDevedor + encargosMonetarios + ComprasDoMes;

      // imprimir resultado
      printf( "\n\tRESUMO DO CRÉDITO\n" );
      printf( "Conta: %d\n", numContaCliente );
      printf( "Saldo devedor: R$%.2f\n", saldoDevedor );
      printf( "Total de encargos R$%.2f\n", encargosMonetarios );
      printf( "Valor das Compras no mês R$%.2f\n", ComprasDoMes );
      printf( "Limite de créditos: R$%.2f\n", limiteDeCredito );
      printf( "Saldo devedor R$%.2f\n", valorDosDebitos );

      // verificar se o valor dos debitos é maior que o limite de créditos
      if( valorDosDebitos > limiteDeCredito ) { // se verdade

         // imprimir
         printf( "COMPRAS NÃO APROVADAS!" );
      } // fim if

      // se não for
      else {

         // imprimir
         printf( "Compras aprovadas.\n" );
      } // fim else

      // entrada de dados
      printf( "Informe o número da conta [ -1 para sair ]: " ); // prompt
      scanf( "%d", &numContaCliente ); // entrada do usuário

   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN