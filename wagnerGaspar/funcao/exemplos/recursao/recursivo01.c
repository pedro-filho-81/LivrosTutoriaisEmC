/**
 * funções e procedimentos recursivos
 * Exemplo: imprimir todos os números de n até 0
 * 11/11/2024
 */
#include <stdio.h>
#include <stdlib.h>

// procedimento imprimir
void imprimir(int x)
{
   // verifique se x igual a zero
   if (x == 0) // se verdade
   {
      // exiba o valor de x
      printf("%d ", x);
      // e termina o programa
   } else { // se não
      // exibe o valor de x em ordem decrescete
   //   printf("%d ", x);
      // chama o procedimento imprimir
      // e subitrai 1 do valor da variável x
      imprimir(x - 1);
      // exibe o valor de x em ordem crescente
      printf("%d ", x);
   } // end else
} // end imprimir

int main()
{
   // variável
   int n;

   // entrada de dados
   printf("Digite um valor maior que zero: ");
   scanf("%d", &n);

   // chama a função imprimir
   imprimir(n);

   return 0;
   
} // end main