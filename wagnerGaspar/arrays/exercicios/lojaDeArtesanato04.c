/**
 * Loja de artesanato
 * Vendedor, salário R$ 1100,00, comissão 5%.
 * Criar um programa que receba os preços e as 
 * quantidades vendidas, armazenando-os em seus 
 * respectivos vetores.
 * Depois, determine e mostre:
 * a) A quantidade vendida, valor unitário e o valor 
 * total de cada objeto. Ao final, deverão ser mostrado 
 * o valor total das vendas e o valor da comissão paga 
 * ao vendedor.
 * b) O valor do objeto mais vendido, e sua posição no 
 * vetor (em caso de empate mostrar todos e suas posições)
 */
#include <stdio.h>
#include <stdlib.h>

#define SIDE 3

void entradaDeDados(float vlUnit[], int quanti[])
{
   for(int i = 0; i < SIDE; i++) {
      printf("Digite o valor unitario e a quantidade vendida: ");
      scanf("%f%d", &vlUnit[i], &quanti[i]);
   } // end for
} // end entrada

// função display ( exibir )
void display(float vlUnit[], int quanti[])
{
   // variáveis
   int maisVendido = 0;
   float valorTotal = 0.0;
   float valorParcial = 0.0; 

   /**
      a) A quantidade vendida, valor unitário e o valor 
      total de cada objeto. Ao final, deverão ser mostrado 
      o valor total das vendas e o valor da comissão paga 
      ao vendedor.
    */
   for (int i = 0; i < SIDE; i++)
   {  
      valorParcial = quanti[i] * vlUnit[i];
      
      printf("Vendido: %d\tValor Unitario R$ %.2f\tValor total R$ %.2f\n", 
               quanti[i], vlUnit[i], valorParcial);
      
      valorTotal += valorParcial;
   } // end for a

   // exibe valores
   printf("\nValor total R$ %.2f\n", valorTotal);
   printf("Comissão paga ao vendedor R$ %.2f\n", 
            valorTotal * 0.05);

   /**
    * b) O valor do objeto mais vendido, e sua posição no 
    * vetor (em caso de empate mostrar todos e suas posições)
    */
   for (int j = 0; j < SIDE; j++) {
      if(quanti[j] > maisVendido)
         maisVendido = quanti[j];
   } // end for j

   for (int k = 0; k < SIDE; k++) {
      if (quanti[k] == maisVendido)
         printf("Posicao: %d\tValor R$ %.2f\n", k, vlUnit[k]);
   } // end for k

   // exibe
   printf("Salario R$ %.2f\n", valorTotal * 0.05 + 1100.00);

} // end display

int main()
{  
   // vetores
   int quanti[SIDE];
   float valores[SIDE];

   // chama funções
   entradaDeDados(valores, quanti);
   display(valores, quanti);

   printf("\n\n");
   return 0;
} // end main