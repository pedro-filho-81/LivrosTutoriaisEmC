/**
 * Exercício 02
 * Excreva um procedimento que troca os valores dos
 * parâmetros recebidos.
 * sua assinatura deve ser:
 * void troca(float *a, float *b);
 * Aula - 193
 */
#include <stdio.h>

// troca valores de duas variáveis
// usando ponteiros
void troca(float *a, float *b)
{
   // cria a variável temporaria
   float temp = *a; // temp recebe o valor de *a
   *a = *b; // *a recebe o valor de *b 1ª troca
   *b = temp; // b recebe o valor de a 2ª troca
} // end troca

int main()
{
   // variáveis
   float n1 = 5.25;
   float n2 = 10.32;

   printf("\nVariaveis antes da troca\n\tn1 = %.2f\n\tn2 = %.2f", n1, n2);

   // chama a função troca e passa o endereço das variáveis
   // a função troca processa alterando os valores
   troca(&n1, &n2);

   // exibe os valores
   printf("\nVariaveis depois da troca:\n\tn1 = %.2f\n\tn2 = %.2f", n1, n2);

   printf("\n\n");
   return 0;
} // end main