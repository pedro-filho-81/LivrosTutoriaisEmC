/**
 * 12) Escreva um programa que leia o nome e o valor 
 * de determinada mercadoria de uma loja. Sabendo que 
 * o desconto para pagamento à vista é de 10% sobre o 
 * valor total, calcule o valor a ser pago à vista. 
 * Escreva o nome da mercadoria, o valor total, o 
 * valor do desconto e o valor a ser pago à vista.
 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 140). 
 * GEN LTC. Edição do Kindle. 
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
   // strings
   char nomeProd[5][50]; // matriz de string
   char cadastrar = 's';

   int quantidade[20];
   int i = 0; // para loops
   int contarCompras = 1;

   float vlProduto[20];
   float vlPagamento[20];
   float vlTotal;
   float vlDescontos;

   printf("\nCADASTRO DAS VENDAS.\n");

   // loop para entrada dos dados
   while (cadastrar == 's')  
   {
      // data entry
      printf("Digite o nome do produto: ");
      scanf(" %30[^\n]", nomeProd[i]);
      printf("Digite a quantidade: ");
      scanf("%d", &quantidade[i]);
      printf("Valor do produto: R$ ");
      scanf("%f", &vlProduto[i]);
      
      // calcular
      vlPagamento[i] = vlProduto[i] * quantidade[i];

      // valor total recebe os valores do pagamento
      vlTotal += vlPagamento[i];

      i++; // incrementa os índices

      // pergunta se quer continuar
      printf("Deseja fazer novo cadastro? (s/n): ");
      scanf(" %c", &cadastrar);
      
      // se cadastrar igual a não (n)
      if (cadastrar == 'n')
      {
         break; // sair do cadastro
      } // end if
      else {
         contarCompras++;
      }
   } // end for entrada
 
   // loop para exibir as compras
   for ( i = 0; i < contarCompras; i++)
   {
      // exibir resultado
      printf("\nProduto: %s\nQuantudade: %d\nVlProduto: R$ %.2f\n",nomeProd[i], quantidade[i], vlProduto[i]);

      printf("Valor a pagar R$ %.2f\n", vlPagamento[i]);
         
      // calcular descontos
      vlDescontos = vlTotal * 0.10;

   } // end for

   printf("\nPAGAmENTO");

   // exibe valor total
   printf("\nVoce fez %d compras", contarCompras);
   printf("\nTotal a pagar R$ %.2f\n", vlTotal);
   printf("Avista tem R$ %.2f de descontos.\n", vlDescontos);
   printf("Total avista R$ %.2f\n\n", vlTotal - vlDescontos);

   return 0;

} // end main